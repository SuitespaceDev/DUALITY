#include "pch.h"
#include "HV4D_DIR_ALREADY_EXISTS.h"
#if __has_include("HV4D_DIR_ALREADY_EXISTS.g.cpp")
#include "HV4D_DIR_ALREADY_EXISTS.g.cpp"
#endif

namespace winrt::HV4D::implementation
{
	HV4D_DIR_ALREADY_EXISTS::HV4D_DIR_ALREADY_EXISTS()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4D_DIR_ALREADY_EXISTS::HV4D_DIR_ALREADY_EXISTS(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4D_DIR_ALREADY_EXISTS::HV4D_DIR_ALREADY_EXISTS(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4D_DIR_ALREADY_EXISTS::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4D_DIR_ALREADY_EXISTS::HV4DSetUuidOfInstance()
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

	uint64_t HV4D_DIR_ALREADY_EXISTS::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	uint64_t HV4D_DIR_ALREADY_EXISTS::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4D_DIR_ALREADY_EXISTS::HV4DSetCreatedDateTime()
	{
		created_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	void HV4D_DIR_ALREADY_EXISTS::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4D_DIR_ALREADY_EXISTS::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4D_DIR_ALREADY_EXISTS::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4D_DIR_ALREADY_EXISTS::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_ITERATOR{ nullptr, winrt::guid{L"{F159B4A1-D655-4866-BD90-24CFA383C42F}"}, nullptr };

	};

	HV4D::IHV4DOBJECT HV4D_DIR_ALREADY_EXISTS::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4D_DIR_ALREADY_EXISTS::HV4DSender(HV4D::IHV4DOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4D_DIR_ALREADY_EXISTS::HV4DReturnTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{D2BBDE08-7CCC-4037-B4DD-561163E21227}" };

	}

	uint64_t HV4D_DIR_ALREADY_EXISTS::HV4DReturnTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0xD2BBDE087CCC4037;

	}

	winrt::hstring HV4D_DIR_ALREADY_EXISTS::HV4DReturnTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4D_DIR_ALREADY_EXISTS";

	}

	winrt::guid HV4D_DIR_ALREADY_EXISTS::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4D_DIR_ALREADY_EXISTS::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4D_DIR_ALREADY_EXISTS::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4D_DIR_ALREADY_EXISTS::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4D_DIR_ALREADY_EXISTS::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4D_DIR_ALREADY_EXISTS::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

}
