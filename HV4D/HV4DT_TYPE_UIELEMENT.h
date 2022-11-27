#pragma once

#include <Objbase.h>

#include <ctime>

#include "HV4DT_TYPE_UIELEMENT.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;
namespace HV4D = winrt::HV4D;

namespace winrt::HV4D::implementation
{
	struct HV4DT_TYPE_UIELEMENT : HV4DT_TYPE_UIELEMENTT<HV4DT_TYPE_UIELEMENT>
	{
	public:
		HV4DT_TYPE_UIELEMENT();

		HV4DT_TYPE_UIELEMENT(HV4D::IHV4DOBJECT const&);

		HV4DT_TYPE_UIELEMENT(HV4D::IHV4DOBJECT const&, winrt::guid const&, WF::IInspectable const&);

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

	public:
		virtual HV4D::IHV4DOBJECT HV4DSender();

		virtual void HV4DSender(HV4D::IHV4DOBJECT const&);

	private:
		HV4D::IHV4DOBJECT owner_handle{};

	public:
		virtual winrt::guid HV4DTType();

		virtual uint64_t HV4DTTypeID();

		virtual winrt::hstring HV4DTTypeName();

	public:
		virtual winrt::guid HV4DExtendedArgsType();

		virtual void HV4DExtendedArgsType(winrt::guid const&);

	private:
		winrt::guid extended_args_type{};

	public:
		virtual WF::IInspectable HV4DExtendedArgs();

		virtual void HV4DExtendedArgs(WF::IInspectable const&);

	private:
		WF::IInspectable extended_args{};

	public:
		virtual winrt::hstring HV4DComments();

		virtual void HV4DComments(winrt::hstring const&);

	private:
		winrt::hstring comments{};

	};

}

namespace winrt::HV4D::factory_implementation
{
	struct HV4DT_TYPE_UIELEMENT : HV4DT_TYPE_UIELEMENTT<HV4DT_TYPE_UIELEMENT, implementation::HV4DT_TYPE_UIELEMENT>
	{

	};

}
