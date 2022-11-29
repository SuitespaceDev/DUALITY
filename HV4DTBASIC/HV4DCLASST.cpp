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

	HV4D::IHV4DRETURN HV4DCLASST::HV4DFromHstring(winrt::hstring const& ns, winrt::hstring const& c)
	{
		try
		{
			tagCLASST = CTBASIC::CHV4DCLASST{ ns.c_str(), c.c_str() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DFromABI(TBASIC::CLASST const& e)
	{
		try
		{
			tagCLASST = CTBASIC::CHV4DCLASST{ e.ns.c_str(), e.c.c_str() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DFromWinRT(TBASIC::HV4DCLASST const& e)
	{
		TBASIC::CLASST abs{};

		if (e.HV4DToABI(abs) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		try
		{
			tagCLASST = CTBASIC::CHV4DCLASST{ abs.ns.c_str(), abs.c.c_str() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DToHstring(winrt::hstring& ns, winrt::hstring& c)
	{
		std::wstring nmspace{}, clss{};

		tagCLASST.HV4DGetStringCLASST(nmspace, clss);

		ns = nmspace;

		c = clss;

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DToABI(CLASST& e)
	{
		std::wstring nmspace{}, clss{};

		tagCLASST.HV4DGetStringCLASST(nmspace, clss);

		e.ns = nmspace;

		e.c = clss;

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DToWinRT(TBASIC::HV4DCLASST& e)
	{
		std::wstring nmspace{}, clss{};

		tagCLASST.HV4DGetStringCLASST(nmspace, clss);

		if (e.HV4DFromHstring(nmspace, clss) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DIsEqualHstring(winrt::hstring const& p, winrt::hstring const& f)
	{
		std::wstring nmspace{}, clss{};

		tagCLASST.HV4DGetStringCLASST(nmspace, clss);

		if (nmspace == p && clss == f)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DIsEqualABI(TBASIC::CLASST const& e)
	{
		std::wstring nmspace{}, clss{};

		tagCLASST.HV4DGetStringCLASST(nmspace, clss);

		if (nmspace == e.ns && clss == e.c)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

	HV4D::IHV4DRETURN HV4DCLASST::HV4DIsEqualWinRT(TBASIC::HV4DCLASST const& e)
	{
		std::wstring nmspace{}, clss{};

		tagCLASST.HV4DGetStringCLASST(nmspace, clss);

		winrt::hstring winrt_path{}, winrt_file{};

		e.HV4DToHstring(winrt_path, winrt_file);

		if (nmspace == winrt_path && clss == winrt_file)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

}
