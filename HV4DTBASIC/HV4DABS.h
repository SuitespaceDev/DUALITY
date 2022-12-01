#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\CHV4DTBASIC.lib")

#include <Objbase.h>

#include <ctime>

#include "../CHV4DTBASIC/CHV4DABS.h"

#include "HV4DABS.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;
namespace HV4D = winrt::HV4D;
namespace TBASIC = winrt::HV4DTBASIC;
namespace CTBASIC = CHV4D::CHV4DTBASIC;

namespace winrt::HV4DTBASIC::implementation
{
	struct HV4DABS : HV4DABST<HV4DABS>
	{
	public:
		HV4DABS();

		HV4DABS(HV4D::IHV4DOBJECT const&);

		HV4DABS(HV4D::IHV4DOBJECT const&, winrt::guid const&, WF::IInspectable const&);

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
		virtual HV4D::IHV4DRETURN HV4DABSFromHstring(winrt::hstring const&, winrt::hstring const&);

		virtual HV4D::IHV4DRETURN HV4DABSFromMAXPATH(TBASIC::HV4DMAXPATH const&, TBASIC::HV4DMAXPATH const&);

		virtual HV4D::IHV4DRETURN HV4DABSFromProj(TBASIC::HV4DABS const&);

		virtual HV4D::IHV4DRETURN HV4DABSToHstring(winrt::hstring&, winrt::hstring&);

		virtual HV4D::IHV4DRETURN HV4DABSToMAXPATH(TBASIC::HV4DMAXPATH&, TBASIC::HV4DMAXPATH&);

		virtual HV4D::IHV4DRETURN HV4DABSToProj(TBASIC::HV4DABS&);

		virtual HV4D::IHV4DRETURN HV4DABSIsEqualHstring(winrt::hstring const&, winrt::hstring const&);

		virtual HV4D::IHV4DRETURN HV4DABSIsEqualMAXPATH(TBASIC::HV4DMAXPATH const&, TBASIC::HV4DMAXPATH const&);

		virtual HV4D::IHV4DRETURN HV4DABSIsEqualProj(TBASIC::HV4DABS const&);

	private:
		CTBASIC::CHV4DABS tagABS{};

	};

}

namespace winrt::HV4DTBASIC::factory_implementation
{
	struct HV4DABS : HV4DABST<HV4DABS, implementation::HV4DABS>
	{

	};

}
