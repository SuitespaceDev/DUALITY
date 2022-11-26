#include "pch.h"

#include "CHV4DFACTORY.h"

namespace winrt::HV4DSYSCALL
{
	HV4D::IHV4DRETURN CHV4DGetActivationFactory(winrt::hstring const& dll, winrt::hstring const& rtclass, WF::IActivationFactory o)
	{
		void* dllHandle = WINRT_IMPL_LoadLibraryW(dll.c_str());

		if (dllHandle == nullptr)
		{
			return HV4D::HV4D_MODULE_NOT_FOUND{};

		}

		void* proc = WINRT_IMPL_GetProcAddress(dllHandle, "DllGetActivationFactory");

		if (proc == nullptr)
		{
			return HV4D::HV4D_INVALID_POINTER{};

		}

		auto DllGetActivationFactory = reinterpret_cast<HRESULT(__stdcall*)(void* classId, void** factory)>(proc);

		const wchar_t* cname{ rtclass.c_str() };
		const UINT32 cnamelen = (UINT32)wcslen(cname);

		HSTRING hcname = NULL;
		HSTRING_HEADER header;
		winrt::check_hresult(WindowsCreateStringReference(cname, cnamelen, &header, &hcname));

		HRESULT ret = S_OK;

		void** unkActivationFactory = new void* [1];
		ret = (*DllGetActivationFactory)(&header, unkActivationFactory);

		if (ret != S_OK)
		{
			return HV4D::HV4D_RTCLASS_NOT_FOUND{};

		}

		winrt::Windows::Foundation::IActivationFactory oObj{ nullptr };
		winrt::copy_from_abi(oObj, *unkActivationFactory);

		if (oObj == nullptr)
		{
			return HV4D::HV4D_OPERATION_FAILED{};

		}

		o = oObj;

		WindowsDeleteString(hcname);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	};

}