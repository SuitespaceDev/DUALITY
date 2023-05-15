#pragma once

#include <Objbase.h>

#include <ctime>

#include "HV4DCOBJECT.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;
namespace HV4D = winrt::HV4D;

namespace winrt::HV4DCOBJECT::implementation
{
	struct HV4DCOBJECT : HV4DCOBJECTT<HV4DCOBJECT>
	{
	public:
		HV4DCOBJECT();

		HV4DCOBJECT(HV4D::IHV4DCOBJECT const&);

		HV4DCOBJECT(HV4D::IHV4DCOBJECT const&, winrt::guid const&, WF::IInspectable const&);

	private:
		void HV4DListSupportedInterfaces();

	public:
		winrt::Windows::Foundation::Collections::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DSupportedInterfaces() 
		{
			return SupportedInterfaces;

		};

	private:
		winrt::Windows::Foundation::Collections::IVector<HV4D::HV4DT_TYPE_CONTRACT> SupportedInterfaces{};

	public:
		winrt::guid HV4DUuidOfInstance();

		winrt::guid HV4DUuidOfClassObject() { return L"{839C965B-45FC-475A-A163-57A83D712293}"; };

		winrt::hstring HV4DClassObjectName();

		winrt::guid HV4DUuidOfCollection() { return L"{05EAF3E1-F4E5-458B-BD95-A7121C22826A}"; };

		uint64_t HV4DCreatedDateTime();

		uint64_t HV4DUpdatedDateTime();

	private:
		winrt::guid uuid_of_instance{};

		uint64_t date_created{};

		uint64_t date_updated{};

	public:
		HV4D::IHV4DTTYPE HV4DGetTType() { return HV4D::HV4DT_TYPE_CONTRACT{}; };

		HV4D::IHV4DSERVICE HV4DGetService() { return; };



	private:




	}

}

namespace winrt::HV4DCOBJECT::factory_implementation
{
	struct HV4DCOBJECT : HV4DCOBJECTT<HV4DCOBJECT, implementation::HV4DCOBJECT>
	{

	};

}
