#include "pch.h"
#include "HV4DHVID.h"
#if __has_include("HV4DHVID.g.cpp")
#include "HV4DHVID.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DHVID::HV4DHVID()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DHVID::HV4DHVID(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DHVID::HV4DHVID(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DHVID::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DHVID::HV4DSetUuidOfInstance()
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

	uint64_t HV4DHVID::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	uint64_t HV4DHVID::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DHVID::HV4DSetCreatedDateTime()
	{
		created_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	void HV4DHVID::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DHVID::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DHVID::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DHVID::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DOBJECT HV4DHVID::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DHVID::HV4DSender(HV4D::IHV4DOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DHVID::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{493BEFB6-88CA-4D84-A27A-9D735C89C443}" };

	}

	uint64_t HV4DHVID::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0x493BEFB688CA4D84;

	}

	winrt::hstring HV4DHVID::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DHVID";

	}

	winrt::guid HV4DHVID::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DHVID::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DHVID::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DHVID::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DHVID::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DHVID::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DFromHstring(winrt::hstring const& uid)
	{
		try
		{
			tagHVID = uid.c_str();

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DFromABI(TBASIC::HVID const& e)
	{
		winrt::guid uid{ L"{" + e.a + L"-" + e.b + L"-" + e.c + L"-" + e.d + L"-" + e.e + L"}" };

		try
		{
			tagHVID = uid;

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DFromWinRT(TBASIC::HV4DHVID const& e)
	{
		winrt::hstring uid{};

		if (e.HV4DToHstring(uid) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		try
		{
			tagHVID = uid.c_str();

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DToHstring(winrt::hstring& uuid)
	{
		std::wstring uid{};

		tagHVID.HV4DGetStringHVID(uid);

		uuid = uid;

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DToABI(TBASIC::HVID& e)
	{
		std::wstring uid{};

		tagHVID.HV4DGetStringHVID(uid);

		e.a = std::wstring{ &uid[1],  &uid[8] };
		e.a = std::wstring{ &uid[10], &uid[13] };
		e.a = std::wstring{ &uid[15], &uid[18] };
		e.a = std::wstring{ &uid[20], &uid[23] };
		e.a = std::wstring{ &uid[25], &uid[36] };

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DToWinRT(TBASIC::HV4DHVID& e)
	{
		std::wstring uid{};

		tagHVID.HV4DGetStringHVID(uid);

		if (e.HV4DFromHstring(uid) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DIsEqualHstring(winrt::hstring const& uuid)
	{
		winrt::guid uid{ uuid };

		if (tagHVID == uid)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagHVID < uid)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DIsEqualABI(TBASIC::HVID const& e)
	{
		if (tagHVID == CTBASIC::CHV4DHVID{ std::wstring{ L"{" + e.a + L"-" + e.b + L"-" + e.c + L"-" + e.d + L"-" + e.e + L"}"} })
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagHVID > CTBASIC::CHV4DHVID{ std::wstring{ L"{" + e.a + L"-" + e.b + L"-" + e.c + L"-" + e.d + L"-" + e.e + L"}"} })
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DIsEqualWinRT(TBASIC::HV4DHVID const& e)
	{
		winrt::hstring uid{};

		if (e.HV4DToHstring(uid) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagHVID == CTBASIC::CHV4DHVID{ uid.c_str() })
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagHVID > CTBASIC::CHV4DHVID{ uid.c_str() })
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DSetToRandomHVID()
	{
		try
		{
			tagHVID.HV4DRandomHVID();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_OPERATION_FAILED{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}
