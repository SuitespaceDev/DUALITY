#include "pch.h"
#include "HV4DT_TYPE_OBJECT.h"
#if __has_include("HV4DT_TYPE_OBJECT.g.cpp")
#include "HV4DT_TYPE_OBJECT.g.cpp"
#endif

namespace winrt::HV4D::implementation
{
	HV4DT_TYPE_OBJECT::HV4DT_TYPE_OBJECT()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DT_TYPE_OBJECT::HV4DT_TYPE_OBJECT(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DT_TYPE_OBJECT::HV4DT_TYPE_OBJECT(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DT_TYPE_OBJECT::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DT_TYPE_OBJECT::HV4DSetUuidOfInstance()
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

	uint64_t HV4DT_TYPE_OBJECT::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	uint64_t HV4DT_TYPE_OBJECT::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DT_TYPE_OBJECT::HV4DSetCreatedDateTime()
	{
		created_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	void HV4DT_TYPE_OBJECT::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DT_TYPE_OBJECT::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DT_TYPE_OBJECT::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DT_TYPE_OBJECT::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_ITERATOR{ nullptr, winrt::guid{L"{9B845864-4EAB-4203-A022-414AD4766B9A}"}, nullptr };

	};

	HV4D::IHV4DOBJECT HV4DT_TYPE_OBJECT::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DT_TYPE_OBJECT::HV4DSender(HV4D::IHV4DOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DT_TYPE_OBJECT::HV4DTType()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{AE977CB4-7226-4346-B195-FD3865FC46C6}" };

	}

	uint64_t HV4DT_TYPE_OBJECT::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0xAE977CB472264346;

	}

	winrt::hstring HV4DT_TYPE_OBJECT::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DT_TYPE_OBJECT";

	}

	winrt::guid HV4DT_TYPE_OBJECT::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DT_TYPE_OBJECT::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DT_TYPE_OBJECT::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DT_TYPE_OBJECT::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DT_TYPE_OBJECT::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DT_TYPE_OBJECT::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

}
