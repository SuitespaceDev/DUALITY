#pragma once

#include "HV4DCLASST.g.h"

import CHV4DTBASIC;

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;
namespace HV4D = winrt::HV4D;
namespace TBASIC = winrt::HV4DTBASIC;
namespace CTBASIC = CHV4D::CHV4DTBASIC;

namespace winrt::HV4DTBASIC::implementation
{
	struct HV4DCLASST : HV4DCLASSTT<HV4DCLASST>
	{
	public:
		HV4DCLASST();

		HV4DCLASST(HV4D::IHV4DCOBJECT const&);

		HV4DCLASST(HV4D::IHV4DCOBJECT const&, winrt::guid const&, WF::IInspectable const&);

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
		virtual HV4D::IHV4DRETURN HV4DCLASSTFromHstring(winrt::hstring const&, winrt::hstring const&);

		virtual HV4D::IHV4DRETURN HV4DCLASSTFromMAXPATH(TBASIC::HV4DMAXPATH const&, TBASIC::HV4DMAXPATH const&);

		virtual HV4D::IHV4DRETURN HV4DCLASSTFromProj(TBASIC::HV4DCLASST const&);

		virtual HV4D::IHV4DRETURN HV4DCLASSTToHstring(winrt::hstring&, winrt::hstring&);

		virtual HV4D::IHV4DRETURN HV4DCLASSTToHV4DMAXPATH(TBASIC::HV4DMAXPATH&, TBASIC::HV4DMAXPATH&);

		virtual HV4D::IHV4DRETURN HV4DCLASSTToProj(TBASIC::HV4DCLASST&);

		virtual HV4D::IHV4DRETURN HV4DCLASSTIsEqualHstring(winrt::hstring const&, winrt::hstring const&);

		virtual HV4D::IHV4DRETURN HV4DCLASSTIsEqualHV4DMAXPATH(TBASIC::HV4DMAXPATH const&, TBASIC::HV4DMAXPATH const&);

		virtual HV4D::IHV4DRETURN HV4DCLASSTIsEqualProj(TBASIC::HV4DCLASST const&);

	private:
		CTBASIC::CHV4DCLASST tagCLASST{};

	};

}

namespace winrt::HV4DTBASIC::factory_implementation
{
	struct HV4DCLASST : HV4DCLASSTT<HV4DCLASST, implementation::HV4DCLASST>
	{

	};

}
