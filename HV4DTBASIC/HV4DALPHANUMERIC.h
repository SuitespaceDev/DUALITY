#pragma once

#include "HV4DALPHANUMERIC.g.h"

import CHV4DTBASIC;

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;
namespace HV4D = winrt::HV4D;
namespace TBASIC = winrt::HV4DTBASIC;
namespace CTBASIC = CHV4D::CHV4DTBASIC;

namespace winrt::HV4DTBASIC::implementation
{
	struct HV4DALPHANUMERIC : HV4DALPHANUMERICT<HV4DALPHANUMERIC>
	{
	public:
		HV4DALPHANUMERIC();

		HV4DALPHANUMERIC(HV4D::IHV4DOBJECT const&);

		HV4DALPHANUMERIC(HV4D::IHV4DOBJECT const&, winrt::guid const&, WF::IInspectable const&);

	public:
		virtual winrt::guid HV4DUuidOfInstance();

	private:
		void HV4DSetUuidOfInstance();

		winrt::guid uuid_of_instance{};

	public:
		virtual std::uint64_t HV4DCreatedDateTime();

		virtual std::uint64_t HV4DUpdatedDateTime();

	private:
		void HV4DSetCreatedDateTime();

		void HV4DSetUpdatedDateTime();

		std::uint64_t created_date_time{ 0 };

		std::uint64_t updated_date_time{ 0 };

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
		virtual winrt::guid HV4DTTypeUid();

		virtual std::uint64_t HV4DTTypeID();

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

	public:
		virtual HV4D::IHV4DRETURN HV4DALPHANUMERICFromHstring(winrt::hstring const&);

		virtual HV4D::IHV4DRETURN HV4DALPHANUMERICFromProj(TBASIC::HV4DALPHANUMERIC const&);

		virtual HV4D::IHV4DRETURN HV4DALPHANUMERICToHstring(winrt::hstring&);

		virtual HV4D::IHV4DRETURN HV4DALPHANUMERICToProj(TBASIC::HV4DALPHANUMERIC&);

		virtual HV4D::IHV4DRETURN HV4DALPHANUMERICIsEqualHstring(winrt::hstring const&);

		virtual HV4D::IHV4DRETURN HV4DALPHANUMERICIsEqualProj(TBASIC::HV4DALPHANUMERIC const&);

	private:
		CTBASIC::CHV4DALPHANUMERIC tagANUM{};

	};

}

namespace winrt::HV4DTBASIC::factory_implementation
{
	struct HV4DALPHANUMERIC : HV4DALPHANUMERICT<HV4DALPHANUMERIC, implementation::HV4DALPHANUMERIC>
	{

	};

}
