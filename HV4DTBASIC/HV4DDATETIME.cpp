#include "pch.h"
#include "HV4DDATETIME.h"
#if __has_include("HV4DDATETIME.g.cpp")
#include "HV4DDATETIME.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DDATETIME::HV4DDATETIME()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DDATETIME::HV4DDATETIME(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DDATETIME::HV4DDATETIME(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DDATETIME::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DDATETIME::HV4DSetUuidOfInstance()
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

	uint64_t HV4DDATETIME::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	uint64_t HV4DDATETIME::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DDATETIME::HV4DSetCreatedDateTime()
	{
		created_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	void HV4DDATETIME::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DDATETIME::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DDATETIME::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DDATETIME::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DOBJECT HV4DDATETIME::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DDATETIME::HV4DSender(HV4D::IHV4DOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DDATETIME::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{4AE9BD7D-573C-4CD5-8790-53207974FDBE}" };

	}

	uint64_t HV4DDATETIME::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0x4AE9BD7D573C4CD5;

	}

	winrt::hstring HV4DDATETIME::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DDATETIME";

	}

	winrt::guid HV4DDATETIME::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DDATETIME::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DDATETIME::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DDATETIME::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DDATETIME::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DDATETIME::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DDATETIME::HV4DDATETIMEFromHstring(winrt::hstring const& d, winrt::hstring const& t)
	{
		try
		{
			tagDATETIME = { d.data(), t.data() };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DDATETIME::HV4DDATETIMEFromHV4D(TBASIC::HV4DMMDDYYYY const& d, TBASIC::HV4DHHMMSS const& t)
	{
		winrt::hstring date{}, time{};

		d.HV4DMMDDYYYYToHstring(date);

		t.HV4DHHMMSSToHstring(time);

		try
		{
			tagDATETIME = { date.data(), time.data() };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DDATETIME::HV4DDATETIMEFromProj(TBASIC::HV4DDATETIME const& e)
	{
		winrt::hstring date{}, time{};

		e.HV4DDATETIMEToHstring(date, time);

		try
		{
			tagDATETIME = { date.data(), time.data() };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DDATETIME::HV4DDATETIMEToHstring(winrt::hstring& d, winrt::hstring& t)
	{
		std::wstring date{}, time{};

		tagDATETIME.HV4DGetStringDATETIME(date, time);

		d = date;

		t = time;

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DDATETIME::HV4DDATETIMEToHV4D(TBASIC::HV4DMMDDYYYY& d, TBASIC::HV4DHHMMSS& t)
	{
		std::wstring date{}, time{};

		tagDATETIME.HV4DGetStringDATETIME(date, time);

		d.HV4DMMDDYYYYFromHstring(date);

		t.HV4DHHMMSSFromHstring(time);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DDATETIME::HV4DDATETIMEToProj(TBASIC::HV4DDATETIME& e)
	{
		std::wstring date{}, time{};

		tagDATETIME.HV4DGetStringDATETIME(date, time);

		e.HV4DDATETIMEFromHstring(date, time);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DDATETIME::HV4DDATETIMEIsEqualHstring(winrt::hstring const& d, winrt::hstring const& t)
	{
		CTBASIC::CHV4DDATETIME test{ d.data(), t.data() };

		if (tagDATETIME == test)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagDATETIME < test)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DDATETIME::HV4DDATETIMEIsEqualHV4D(TBASIC::HV4DMMDDYYYY const& d, TBASIC::HV4DHHMMSS const& t)
	{
		winrt::hstring date{}, time{};

		d.HV4DMMDDYYYYToHstring(date);

		t.HV4DHHMMSSToHstring(time);

		CTBASIC::CHV4DDATETIME test{ date.data(), time.data() };

		if (tagDATETIME == test)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagDATETIME < test)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DDATETIME::HV4DDATETIMEIsEqualProj(TBASIC::HV4DDATETIME const& e)
	{
		winrt::hstring date{}, time{};

		e.HV4DDATETIMEToHstring(date, time);

		CTBASIC::CHV4DDATETIME test{ date.data(), time.data() };

		if (tagDATETIME == test)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagDATETIME < test)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DDATETIME::HV4DSetToCurrentDATETIME()
	{
		try
		{
			tagDATETIME.HV4DSetToCurrentDATETIME();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_OPERATION_FAILED{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}
