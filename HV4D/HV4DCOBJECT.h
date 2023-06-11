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

		HV4DCOBJECT(WFC::IMap<winrt::guid, IInspectable> initializers);

	public:
		virtual HV4D::IHV4DRETURN HV4DSupportedInterfaces(WFC::IMap<winrt::guid, IInspectable> interfaces);

	private:
		WFC::IMap<winrt::guid, IInspectable> SupportedInterfaces{ nullptr };

	public:
		virtual IHV4DRETURN HV4DSetInstanceData(WFC::IMap<winrt::guid, IInspectable> instance);

		virtual IHV4DRETURN HV4DGetInstanceData(WFC::IMap<winrt::guid, IInspectable> instance);

	private:
		winrt::guid UuidOfInstance{ L"" };

		uint64_t CreatedDateTime{ 0 };

		uint64_t UpdatedDateTime{ 0 };

		winrt::guid UuidOfCollection{ L"" };

		winrt::guid UuidOfClassObject{ L"" };

		winrt::hstring NameOfClassObject{ L"" };

		winrt::guid UuidOfClassObjectSet{ L"" };

		uint64_t IdOfClassObjectSet{ 0 };

	public:
		virtual IHV4DRETURN HV4DSetBrokerData(WFC::IMap<winrt::guid, IInspectable> broker);

		virtual IHV4DRETURN HV4DGetBrokerData(WFC::IMap<winrt::guid, IInspectable> broker);

	private:
		winrt::guid HV4DGetBrokerTypeUuid{ L"" };

		winrt::guid HV4DGetBrokerTypeId{ L"" };

		winrt::hstring HV4DGetBrokerTypeName{ L"" };

		HV4D::IHV4DSERVICE HV4DGetBrokerService{ nullptr };

	public:
		virtual HV4D::IHV4DRETURN HV4DAGGREGATE(
			WFC::IMap<winrt::guid, IInspectable> execute,
			WFC::IMap<winrt::guid, IInspectable> pop,
			WFC::IMap<winrt::guid, IInspectable> values);

		winrt::event<WF::TypedEventHandler<IInspectable, IInspectable>> sink;

	private:
		/*** FOR TEMPLATE PURPOSES ONLY ***/

	public:
		HV4D::IHV4DRETURN HV4DListFunctionMembers(WFC::IMap<winrt::guid, IInspectable> functions);

		HV4D::IHV4DRETURN HV4DListEventMembers(WFC::IMap<winrt::guid, IInspectable> events);

	private:
		HV4D::IHV4DFUNCTION Functions{ nullptr };

		HV4D::IHV4DFUNCTION Events{ nullptr };

	public:


	private:
		IInspectable Sender{ nullptr };

		winrt::guid ExtendedArgsType{ L"" };

		IInspectable HV4DExtendedArgs{ nullptr };

		winrt::hstring HV4DComments{ L"" };

	};

}

namespace winrt::HV4D::factory_implementation
{
	struct HV4DCOBJECT : HV4DCOBJECTT<HV4DCOBJECT, implementation::HV4DCOBJECT>
	{

	};

}
