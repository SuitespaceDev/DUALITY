#pragma once

#include <Objbase.h>

#include <ctime>

#include "HV4DCOBJECT.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;
namespace HV4D = winrt::HV4D;

namespace winrt::HV4D::implementation
{
	struct HV4DCOBJECT : HV4DCOBJECTT<HV4DCOBJECT>
	{
	public:
		HV4DCOBJECT();

		HV4DCOBJECT(HV4D::IHV4DCOBJECT const&);

		HV4DCOBJECT(HV4D::IHV4DCOBJECT const&, winrt::guid const&, WF::IInspectable const&);

	private:
		HV4D::IHV4DCOBJECT owner_handle{ nullptr };

		winrt::guid extended_args_type{ L"{2D048E34-FDC5-4230-9C3A-BD05DAF60D1B}" };

		WF::IInspectable extended_args{ nullptr };

	public:
		winrt::Windows::Foundation::Collections::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DSupportedInterfaces();

	private:
		void HV4DListSupportedInterfaces();

		winrt::Windows::Foundation::Collections::IVector<HV4D::HV4DT_TYPE_CONTRACT> SupportedInterfaces{};

	public:
		winrt::guid HV4DUuidOfInstance();

		uint64_t HV4DCreatedDateTime();

		uint64_t HV4DUpdatedDateTime();

		winrt::guid HV4DUuidOfClassObject();

		winrt::hstring HV4DNameOfClassObject();

		winrt::guid HV4DUuidOfCollection();

	private:
		void HV4DSetUuidOfInstance();

		winrt::guid uuid_of_instance{};

		void HV4DSetCreatedDateTime();

		uint64_t date_created{};

		void HV4DSetUpdatedDateTime();

		uint64_t date_updated{};

	public:
		HV4D::IHV4DTTYPE HV4DGetTType();

		HV4D::IHV4DSERVICE HV4DGetService();



	private:




	}

}

namespace winrt::HV4D::factory_implementation
{
	struct HV4DCOBJECT : HV4DCOBJECTT<HV4DCOBJECT, implementation::HV4DCOBJECT>
	{

	};

}
