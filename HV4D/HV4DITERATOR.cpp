#include "pch.h"
#include "HV4DITERATOR.h"
#if __has_include("HV4DITERATOR.g.cpp")
#include "HV4DITERATOR.g.cpp"
#endif

namespace winrt::HV4D::implementation
{
	HV4DITERATOR::HV4DITERATOR()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DITERATOR::HV4DITERATOR(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DITERATOR::HV4DITERATOR(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DITERATOR::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DITERATOR::HV4DSetUuidOfInstance()
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

	uint64_t HV4DITERATOR::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	uint64_t HV4DITERATOR::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DITERATOR::HV4DSetCreatedDateTime()
	{
		created_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	void HV4DITERATOR::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DITERATOR::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DITERATOR::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DITERATOR::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_CONTRACT{ nullptr, winrt::guid{L"{0034EB60-089C-4B10-96FB-8F2FF99F4EC7}"}, nullptr };

	};

	HV4D::IHV4DOBJECT HV4DITERATOR::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DITERATOR::HV4DSender(HV4D::IHV4DOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DITERATOR::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{AC3981F5-84C0-46D9-BA44-B1036A938C58}" };

	}

	uint64_t HV4DITERATOR::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0xAC3981F584C046D9;

	}

	winrt::hstring HV4DITERATOR::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"IHV4DITERATOR";

	}

	winrt::guid HV4DITERATOR::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DITERATOR::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DITERATOR::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DITERATOR::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DITERATOR::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DITERATOR::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

}
