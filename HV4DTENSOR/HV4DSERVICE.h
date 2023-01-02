#pragma once

#include <Objbase.h>

#include <ctime>

#include "HV4DSERVICE.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;
namespace HV4D = winrt::HV4D;

namespace winrt::HV4DTENSOR::implementation
{
	struct HV4DSERVICE : HV4DSERVICET<HV4DSERVICE>
	{
	public:
		HV4DSERVICE();

	public:
		virtual winrt::guid HV4DUuidOfInstance();

	private:
		void HV4DSetUuidOfInstance();

		winrt::guid uuid_of_instance{};

	public:
		virtual uint64_t HV4DCreatedDateTime();

		virtual uint64_t HV4DUpdatedDateTime();

	private:
		void HV4DSetCreatedDateTime();

		void HV4DSetUpdatedDateTime();

		uint64_t created_date_time{ 0 };

		uint64_t updated_date_time{ 0 };

	public:
		virtual WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DSupportsInterfaces();

	private:
		void HV4DListSupportedInterfaces();

		WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> supported_interfaces{};

	public:
		virtual HV4D::IHV4DTTYPE HV4DGetTType();

	};

}

namespace winrt::HV4DTENSOR::factory_implementation
{
	struct HV4DSERVICE : HV4DSERVICET<HV4DSERVICE, implementation::HV4DSERVICE>
	{

	};

}
