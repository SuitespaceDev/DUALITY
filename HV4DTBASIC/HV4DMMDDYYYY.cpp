#include "pch.h"
#include "HV4DMMDDYYYY.h"
#if __has_include("HV4DMMDDYYYY.g.cpp")
#include "HV4DMMDDYYYY.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DMMDDYYYY::HV4DMMDDYYYY()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DMMDDYYYY::HV4DMMDDYYYY(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DMMDDYYYY::HV4DMMDDYYYY(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DMMDDYYYY::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DMMDDYYYY::HV4DSetUuidOfInstance()
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

	uint64_t HV4DMMDDYYYY::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	uint64_t HV4DMMDDYYYY::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DMMDDYYYY::HV4DSetCreatedDateTime()
	{
		created_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	void HV4DMMDDYYYY::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DMMDDYYYY::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DMMDDYYYY::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DMMDDYYYY::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DOBJECT HV4DMMDDYYYY::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DMMDDYYYY::HV4DSender(HV4D::IHV4DOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DMMDDYYYY::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{77758E79-1B87-480A-B759-3B77CDF92671}" };

	}

	uint64_t HV4DMMDDYYYY::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0x77758E791B87480A;

	}

	winrt::hstring HV4DMMDDYYYY::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DMMDDYYYY";

	}

	winrt::guid HV4DMMDDYYYY::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DMMDDYYYY::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DMMDDYYYY::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DMMDDYYYY::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DMMDDYYYY::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DMMDDYYYY::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DMMDDYYYY::HV4DFromHstring(winrt::hstring const& d)
	{
		try
		{
			tagMMDDYYYY = d.c_str();

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMMDDYYYY::HV4DFromABI(TBASIC::MMDDYYYY const& e)
	{
		try
		{
			tagMMDDYYYY = std::wstring{ e.mm + L"/" + e.dd + L"/" + e.yyyy };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMMDDYYYY::HV4DFromWinRT(TBASIC::HV4DMMDDYYYY const& e)
	{
		winrt::hstring date{};

		if (e.HV4DToHstring(date) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		try
		{
			tagMMDDYYYY = date.c_str();

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMMDDYYYY::HV4DToHstring(winrt::hstring& d)
	{
		std::wstring date{};

		tagMMDDYYYY.HV4DGetStringMMDDYYYY(date);

		d = date;

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMMDDYYYY::HV4DToABI(TBASIC::MMDDYYYY& e)
	{
		std::wstring date{};

		tagMMDDYYYY.HV4DGetStringMMDDYYYY(date);

		e.mm = std::wstring{ &date[0], &date[1] };
		e.dd = std::wstring{ &date[2], &date[3] };
		e.yyyy = std::wstring{ &date[4], &date[7] };

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMMDDYYYY::HV4DToWinRT(TBASIC::HV4DMMDDYYYY& e)
	{
		std::wstring date{};

		tagMMDDYYYY.HV4DGetStringMMDDYYYY(date);

		if (e.HV4DFromHstring(date) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMMDDYYYY::HV4DIsEqualHstring(winrt::hstring const& e)
	{
		if (tagMMDDYYYY == CTBASIC::CHV4DMMDDYYYY{ e.c_str() })
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagMMDDYYYY > CTBASIC::CHV4DMMDDYYYY{ e.c_str() })
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DMMDDYYYY::HV4DIsEqualABI(TBASIC::MMDDYYYY const& e)
	{
		if (tagMMDDYYYY == CTBASIC::CHV4DMMDDYYYY{ std::wstring{ e.mm + L"/" + e.dd + L"/" + e.yyyy } })
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagMMDDYYYY > CTBASIC::CHV4DMMDDYYYY{ std::wstring{ e.mm + L"/" + e.dd + L"/" + e.yyyy } })
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DMMDDYYYY::HV4DIsEqualWinRT(TBASIC::HV4DMMDDYYYY const& e)
	{
		winrt::hstring date{};

		if (e.HV4DToHstring(date) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagMMDDYYYY == CTBASIC::CHV4DMMDDYYYY{ date.c_str() })
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagMMDDYYYY > CTBASIC::CHV4DMMDDYYYY{ date.c_str() })
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DMMDDYYYY::HV4DSetToCurrentDate()
	{
		try
		{
			tagMMDDYYYY.HV4DCurrentMMDDYYYY();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_OPERATION_FAILED{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}
