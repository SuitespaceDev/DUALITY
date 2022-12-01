#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\CHV4DTBASIC.lib")

#include <Objbase.h>

#include <ctime>

#include "../CHV4DTBASIC/CHV4DOFFSET.h"

#include "HV4DOFFSET.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;
namespace HV4D = winrt::HV4D;
namespace TBASIC = winrt::HV4DTBASIC;
namespace CTBASIC = CHV4D::CHV4DTBASIC;

namespace winrt::HV4DTBASIC::implementation
{
	struct HV4DOFFSET : HV4DOFFSETT<HV4DOFFSET>
	{
	public:
		HV4DOFFSET();

		HV4DOFFSET(HV4D::IHV4DOBJECT const&);

		HV4DOFFSET(HV4D::IHV4DOBJECT const&, winrt::guid const&, WF::IInspectable const&);

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
		virtual winrt::guid HV4DTTypeUid();

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

	public:
		virtual HV4D::IHV4DRETURN HV4DOFFSETFromHstring(winrt::hstring const&, winrt::hstring const&);

		virtual HV4D::IHV4DRETURN HV4DOFFSETFromNUM(uint64_t const&, uint64_t const&);

		virtual HV4D::IHV4DRETURN HV4DOFFSETFromProj(HV4DOFFSET const&);

		virtual HV4D::IHV4DRETURN HV4DOFFSETToNUM(uint64_t&, uint64_t&);

		virtual HV4D::IHV4DRETURN HV4DOFFSETToHstring(winrt::hstring&, winrt::hstring&);

		virtual HV4D::IHV4DRETURN HV4DOFFSETToProj(HV4DOFFSET&);

		virtual HV4D::IHV4DRETURN HV4DOFFSETIsEqualNUM(uint64_t const&, uint64_t const&);

		virtual HV4D::IHV4DRETURN HV4DOFFSETIsEqualHstring(winrt::hstring const&, winrt::hstring const&);

		virtual HV4D::IHV4DRETURN HV4DOFFSETIsEqualProj(HV4DOFFSET const&);

	private:
		CTBASIC::CHV4DOFFSET tagOFFSET{};

	};

}

namespace winrt::HV4DTBASIC::factory_implementation
{
	struct HV4DOFFSET : HV4DOFFSETT<HV4DOFFSET, implementation::HV4DOFFSET>
	{

	};

}
