#include "pch.h"
#include "HV4DSERVICE.h"
#if __has_include("HV4DSERVICE.g.cpp")
#include "HV4DSERVICE.g.cpp"
#endif

namespace winrt::HV4DCONTRACT::implementation
{
	HV4DSERVICE::HV4DSERVICE()
	{

		return;

	}

	winrt::guid HV4DSERVICE::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}

	void HV4DSERVICE::HV4DSetUuidOfInstance()
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

	uint64_t HV4DSERVICE::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	uint64_t HV4DSERVICE::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DSERVICE::HV4DSetCreatedDateTime()
	{
		created_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	void HV4DSERVICE::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DSERVICE::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DSERVICE::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DSERVICE::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_SERVICE{};

	};

}
