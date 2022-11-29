#include "pch.h"
#include "HV4DOFFSET.h"
#if __has_include("HV4DOFFSET.g.cpp")
#include "HV4DOFFSET.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DOFFSET::HV4DOFFSET()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DOFFSET::HV4DOFFSET(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DOFFSET::HV4DOFFSET(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DOFFSET::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DOFFSET::HV4DSetUuidOfInstance()
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

	uint64_t HV4DOFFSET::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	uint64_t HV4DOFFSET::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DOFFSET::HV4DSetCreatedDateTime()
	{
		created_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	void HV4DOFFSET::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DOFFSET::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DOFFSET::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DOFFSET::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DOBJECT HV4DOFFSET::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DOFFSET::HV4DSender(HV4D::IHV4DOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DOFFSET::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{0A731AD8-1637-405C-8075-4FBAAEB173AE}" };

	}

	uint64_t HV4DOFFSET::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0x0A731AD81637405C;

	}

	winrt::hstring HV4DOFFSET::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DOFFSET";

	}

	winrt::guid HV4DOFFSET::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DOFFSET::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DOFFSET::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DOFFSET::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DOFFSET::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DOFFSET::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DFromUInt64(uint64_t const& o, uint64_t const& sz)
	{
		try
		{
			tagOFFSET = CTBASIC::CHV4DOFFSET{ o, sz };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DFromHstring(winrt::hstring const& o, winrt::hstring const& sz)
	{
		try
		{
			tagOFFSET = CTBASIC::CHV4DOFFSET{ o.c_str(), sz.c_str() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DFromABI(TBASIC::OFFSET const& e)
	{
		try
		{
			tagOFFSET = CTBASIC::CHV4DOFFSET{ e.o.num, e.sz.num };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DFromWinRT(TBASIC::HV4DOFFSET const& e)
	{
		uint64_t offset{}, size{};

		if (e.HV4DToUInt64(offset, size) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		try
		{
			tagOFFSET = CTBASIC::CHV4DOFFSET{ offset, size };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DToUInt64(uint64_t& o, uint64_t& sz)
	{
		tagOFFSET.HV4DGetNumericOFFSET(o, sz);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DToHstring(winrt::hstring& o, winrt::hstring& sz)
	{
		std::wstring offset{}, size{};

		tagOFFSET.HV4DGetStringOFFSET(offset, size);

		o = offset;

		sz = size;

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DToABI(TBASIC::OFFSET& o)
	{
		tagOFFSET.HV4DGetNumericOFFSET(o.o.num, o.sz.num);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DToWinRT(winrt::HV4DTBASIC::HV4DOFFSET& o)
	{
		uint64_t offset{}, size{};

		tagOFFSET.HV4DGetNumericOFFSET(offset, size);

		if(o.HV4DFromUInt64(offset, size) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_OPERATION_FAILED{};
		
		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DIsEqualUInt64(uint64_t const& o, uint64_t const& sz)
	{

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DIsEqualHstring(winrt::hstring const& o, winrt::hstring const& sz)
	{

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DIsEqualABI(TBASIC::OFFSET const& e)
	{

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DIsEqualWinRT(TBASIC::HV4DOFFSET const& e)
	{

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}
