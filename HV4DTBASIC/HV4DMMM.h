#pragma once

#include "HV4DMMM.g.h"

import CHV4DTBASIC;

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;
namespace HV4D = winrt::HV4D;
namespace TBASIC = winrt::HV4DTBASIC;
namespace CTBASIC = CHV4D::CHV4DTBASIC;

namespace winrt::HV4DTBASIC::implementation
{
	struct HV4DMMM : HV4DMMMT<HV4DMMM>
	{
	public:
		HV4DMMM();

		HV4DMMM(HV4D::IHV4DCOBJECT const&);

		HV4DMMM(HV4D::IHV4DCOBJECT const&, winrt::guid const&, WF::IInspectable const&);

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
		virtual HV4D::IHV4DCOBJECT HV4DSender();

		virtual void HV4DSender(HV4D::IHV4DCOBJECT const&);

	private:
		HV4D::IHV4DCOBJECT owner_handle{};

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
		virtual HV4D::IHV4DRETURN HV4DMMMFromHstring(winrt::hstring const&);

		virtual HV4D::IHV4DRETURN HV4DMMMFromNumeric(std::uint32_t const&, std::uint32_t const&, std::uint32_t const&);

		virtual HV4D::IHV4DRETURN HV4DMMMFromProj(TBASIC::HV4DMMM const&);

		virtual HV4D::IHV4DRETURN HV4DMMMToHstring(winrt::hstring&);

		virtual HV4D::IHV4DRETURN HV4DMMMToNumeric(std::uint32_t&, std::uint32_t&, std::uint32_t&);

		virtual HV4D::IHV4DRETURN HV4DMMMToProj(TBASIC::HV4DMMM&);

		virtual HV4D::IHV4DRETURN HV4DMMMIsEqualHstring(winrt::hstring const&);

		virtual HV4D::IHV4DRETURN HV4DMMMIsEqualNumeric(std::uint32_t const&, std::uint32_t const&, std::uint32_t const&);

		virtual HV4D::IHV4DRETURN HV4DMMMIsEqualProj(TBASIC::HV4DMMM const&);

	private:
		CTBASIC::CHV4DMMM tagMMM{};

	};

}

namespace winrt::HV4DTBASIC::factory_implementation
{
	struct HV4DMMM : HV4DMMMT<HV4DMMM, implementation::HV4DMMM>
	{

	};

}
