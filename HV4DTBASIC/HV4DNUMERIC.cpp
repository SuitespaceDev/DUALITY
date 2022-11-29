#include "pch.h"
#include "HV4DNUMERIC.h"
#if __has_include("HV4DNUMERIC.g.cpp")
#include "HV4DNUMERIC.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DNUMERIC::HV4DNUMERIC()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DNUMERIC::HV4DNUMERIC(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DNUMERIC::HV4DNUMERIC(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DNUMERIC::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DNUMERIC::HV4DSetUuidOfInstance()
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

	uint64_t HV4DNUMERIC::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	uint64_t HV4DNUMERIC::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DNUMERIC::HV4DSetCreatedDateTime()
	{
		created_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	void HV4DNUMERIC::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DNUMERIC::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DNUMERIC::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DNUMERIC::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DOBJECT HV4DNUMERIC::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DNUMERIC::HV4DSender(HV4D::IHV4DOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DNUMERIC::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{3A42CCFC-8D5F-495E-BA64-39B7F18F659A}" };

	}

	uint64_t HV4DNUMERIC::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0x3A42CCFC8D5F495E;

	}

	winrt::hstring HV4DNUMERIC::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DNUMERIC";

	}

	winrt::guid HV4DNUMERIC::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DNUMERIC::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DNUMERIC::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DNUMERIC::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DNUMERIC::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DNUMERIC::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DFromUInt8(uint8_t const& n)
	{
		try
		{
			tagNUMERIC = n;
		
		}
		catch(std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DFromUInt16(uint16_t const& n)
	{
		try
		{
			tagNUMERIC = n;

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DFromUInt32(uint32_t const& n)
	{
		try
		{
			tagNUMERIC = n;

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DFromUInt64(uint64_t const& n)
	{
		try
		{
			tagNUMERIC = n;

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DFromHstring(winrt::hstring const& s)
	{
		try
		{
			tagNUMERIC = s.c_str();

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DFromABI(TBASIC::NUMERIC const& e)
	{
		try
		{
			tagNUMERIC = e.num;

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DFromWinRT(winrt::HV4DTBASIC::HV4DNUMERIC const& e)
	{
		uint64_t num{};

		if (e.HV4DToUInt64(num) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		try
		{
			tagNUMERIC = num;

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DToUInt64(uint64_t& n)
	{
		tagNUMERIC.HV4DGetNUMERIC(n);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DToHstring(winrt::hstring& s)
	{
		std::wstring str{};

		tagNUMERIC.HV4DGetStringNUMERIC(str);

		s = str;

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DToABI(TBASIC::NUMERIC& e)
	{
		tagNUMERIC.HV4DGetNUMERIC(e.num);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DToWinRT(TBASIC::HV4DNUMERIC& e)
	{
		std::wstring str{};

		tagNUMERIC.HV4DGetStringNUMERIC(str);

		if (e.HV4DFromHstring(str) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_OPERATION_FAILED{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DIsEqualUInt8(uint8_t const& n)
	{
		if (tagNUMERIC == n)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		if (tagNUMERIC > n)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DIsEqualUInt16(uint16_t const& n)
	{
		if (tagNUMERIC == n)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		if (tagNUMERIC > n)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DIsEqualUInt32(uint32_t const& n)
	{
		if (tagNUMERIC == n)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		if (tagNUMERIC > n)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DIsEqualUInt64(uint64_t const& n)
	{
		if (tagNUMERIC == n)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		if (tagNUMERIC > n)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DIsEqualHstring(winrt::hstring const& s)
	{
		if (tagNUMERIC == std::wcstoull(&s[0], NULL, 10))
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		if (tagNUMERIC > std::wcstoull(&s[0], NULL, 10))
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DIsEqualABI(TBASIC::NUMERIC const& e)
	{
		if (tagNUMERIC == e.num)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		if (tagNUMERIC > e.num)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DIsEqualWinRT(TBASIC::HV4DNUMERIC const& e)
	{
		uint64_t num{};

		if (e.HV4DToUInt64(num) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_OPERATION_FAILED{};

		}

		if (tagNUMERIC == num)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		if (tagNUMERIC == num)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

}
