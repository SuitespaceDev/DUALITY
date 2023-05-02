#include "pch.h"
#include "HV4DHHMMSS.h"
#if __has_include("HV4DHHMMSS.g.cpp")
#include "HV4DHHMMSS.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DHHMMSS::HV4DHHMMSS()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DHHMMSS::HV4DHHMMSS(HV4D::IHV4DCOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DHHMMSS::HV4DHHMMSS(HV4D::IHV4DCOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DHHMMSS::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DHHMMSS::HV4DSetUuidOfInstance()
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

	std::uint64_t HV4DHHMMSS::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	std::uint64_t HV4DHHMMSS::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DHHMMSS::HV4DSetCreatedDateTime()
	{
		created_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	void HV4DHHMMSS::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DHHMMSS::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DHHMMSS::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DHHMMSS::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DCOBJECT HV4DHHMMSS::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DHHMMSS::HV4DSender(HV4D::IHV4DCOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DHHMMSS::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{897BCEBD-41ED-4B80-98C7-1978ABFC0F31}" };

	}

	std::uint64_t HV4DHHMMSS::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0x897BCEBD41ED4B80;

	}

	winrt::hstring HV4DHHMMSS::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DHHMMSS";

	}

	winrt::guid HV4DHHMMSS::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DHHMMSS::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DHHMMSS::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DHHMMSS::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DHHMMSS::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DHHMMSS::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DHHMMSS::HV4DHHMMSSFromHstring(winrt::hstring const& t)
	{
		try
		{
			tagHHMMSS = t.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHHMMSS::HV4DHHMMSSFromProj(TBASIC::HV4DHHMMSS const& e)
	{
		winrt::hstring hhmmss{};

		e.HV4DHHMMSSToHstring(hhmmss);

		try
		{
			tagHHMMSS = hhmmss.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHHMMSS::HV4DHHMMSSToHstring(winrt::hstring& t)
	{
		t = tagHHMMSS.operator std::wstring();

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHHMMSS::HV4DHHMMSSToProj(TBASIC::HV4DHHMMSS& e)
	{
		e.HV4DHHMMSSFromHstring(tagHHMMSS.operator std::wstring());

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHHMMSS::HV4DHHMMSSIsEqualHstring(winrt::hstring const& t)
	{
		CTBASIC::CHV4DHHMMSS hhmmss{};

		try
		{
			hhmmss = t.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagHHMMSS == hhmmss)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagHHMMSS < hhmmss)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DHHMMSS::HV4DHHMMSSIsEqualProj(TBASIC::HV4DHHMMSS const& e)
	{
		winrt::hstring hhmmss{};

		e.HV4DHHMMSSToHstring(hhmmss);

		CTBASIC::CHV4DHHMMSS chhmmss{};

		try
		{
			chhmmss = hhmmss.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagHHMMSS == chhmmss)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagHHMMSS < chhmmss)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DHHMMSS::HV4DSetToCurrentTime()
	{
		try
		{
			tagHHMMSS();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_OPERATION_FAILED{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}
