#include "pch.h"
#include "HV4DCLASST.h"
#if __has_include("HV4DCLASST.g.cpp")
#include "HV4DCLASST.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DCLASST::HV4DCLASST()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DCLASST::HV4DCLASST(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DCLASST::HV4DCLASST(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DCLASST::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DCLASST::HV4DSetUuidOfInstance()
	{
		GUID uid;

		HRESULT hr = CoCreateGuid(&uid);

		if (SUCCEEDED(hr))
		{
			uuid_of_instance = uid;

			return;
		}
		else
		{
			throw HV4D::HV4D_OPERATION_FAILED{};

		}

	}

	uint64_t HV4DCLASST::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	uint64_t HV4DCLASST::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DCLASST::HV4DSetCreatedDateTime()
	{
		created_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	void HV4DCLASST::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DCLASST::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DCLASST::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DCLASST::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DOBJECT HV4DCLASST::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DCLASST::HV4DSender(HV4D::IHV4DOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DCLASST::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{9931699B-6239-4869-B82B-630377C3A58E}" };

	}

	uint64_t HV4DCLASST::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0x9931699B62394869;

	}

	winrt::hstring HV4DCLASST::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DCLASST";

	}

	winrt::guid HV4DCLASST::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DCLASST::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DCLASST::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DCLASST::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DCLASST::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DCLASST::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DCLASSTFromHstring(winrt::hstring const& ns, winrt::hstring const& c)
	{
		try
		{
			tagCLASST = CTBASIC::CHV4DCLASST{ ns.data(), c.data() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DCLASSTFromMAXPATH(TBASIC::HV4DMAXPATH const& ns, TBASIC::HV4DMAXPATH const& c)
	{
		winrt::hstring nmspace{}, coclass{};

		ns.HV4DMAXPATHToHstring(nmspace);

		c.HV4DMAXPATHToHstring(coclass);

		try
		{
			tagCLASST = CTBASIC::CHV4DCLASST{ nmspace.data(), coclass.data() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DCLASSTFromProj(TBASIC::HV4DCLASST const& e)
	{
		winrt::hstring nmspace{}, coclass{};

		e.HV4DCLASSTToHstring(nmspace, coclass);

		try
		{
			tagCLASST = CTBASIC::CHV4DCLASST{ nmspace.data(), coclass.data() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DCLASSTToHstring(winrt::hstring& ns, winrt::hstring& c)
	{
		std::wstring nmspace{}, coclass{};

		tagCLASST.HV4DGetStringCLASST(nmspace, coclass);

		ns = nmspace;

		c = coclass;

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DCLASSTToHV4DMAXPATH(TBASIC::HV4DMAXPATH& ns, TBASIC::HV4DMAXPATH& c)
	{
		std::wstring nmspace{}, coclass{};

		tagCLASST.HV4DGetStringCLASST(nmspace, coclass);

		ns.HV4DMAXPATHFromHstring(nmspace);

		c.HV4DMAXPATHFromHstring(coclass);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DCLASSTToProj(TBASIC::HV4DCLASST& e)
	{
		std::wstring nmspace{}, coclass{};

		tagCLASST.HV4DGetStringCLASST(nmspace, coclass);

		e.HV4DCLASSTFromHstring(nmspace, coclass);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DCLASSTIsEqualHstring(winrt::hstring const& ns, winrt::hstring const& c)
	{
		std::wstring nmspace{}, coclass{};

		tagCLASST.HV4DGetStringCLASST(nmspace, coclass);

		if (nmspace == ns && coclass == c)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DCLASSTIsEqualHV4DMAXPATH(TBASIC::HV4DMAXPATH const& ns, TBASIC::HV4DMAXPATH const& c)
	{
		winrt::hstring nmspace{}, coclass{};

		ns.HV4DMAXPATHToHstring(nmspace);
		
		c.HV4DMAXPATHToHstring(coclass);

		std::wstring cnmspace{}, ccoclass{};

		tagCLASST.HV4DGetStringCLASST(cnmspace, ccoclass);

		if (nmspace == cnmspace && coclass == ccoclass)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DCLASSTIsEqualProj(TBASIC::HV4DCLASST const& e)
	{
		winrt::hstring nmspace{}, coclass{};

		e.HV4DCLASSTToHstring(nmspace, coclass);

		std::wstring cnmspace{}, ccoclass{};

		tagCLASST.HV4DGetStringCLASST(cnmspace, ccoclass);

		if (nmspace == cnmspace && coclass == ccoclass)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

}
