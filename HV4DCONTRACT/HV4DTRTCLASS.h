#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DT.h"

#include "HV4DTRTCLASS.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DTRTCLASS : HV4DTRTCLASST<HV4DTRTCLASS>
	{
	public:
		HV4DTRTCLASS();

	public:
		virtual HV4D::HV4DRETURN HV4DNodeSolution(winrt::guid&, hstring&, hstring&);

		virtual HV4D::HV4DRETURN HV4DNodeHVID(HV4D::HV4DT_TYPE_ENUM, winrt::guid&, hstring&);

		virtual HV4D::HV4DRETURN HV4DWasCreatedOn(uint64_t&);

		virtual HV4D::HV4DRETURN HV4DWasSavedOn(uint64_t&);

		virtual HV4D::HV4DRETURN HV4DWasOpenedOn(uint64_t&);

		virtual HV4D::HV4DRETURN HV4DNodeParent(HV4DT::IHV4DTNODE&);

		virtual HV4D::HV4DRETURN HV4DNodeNextSibling(HV4DT::IHV4DTNODE&);

		virtual HV4D::HV4DRETURN HV4DNodePrevSibling(HV4DT::IHV4DTNODE&);

		virtual HV4D::HV4DRETURN HV4DNodeChildren(Windows::Foundation::Collections::IMap<winrt::guid, HV4DT::IHV4DTNODE>);

	};

	__declspec(dllexport) const std::unordered_map<HV4D::HV4DWINRT::HV4D_RTCLASS_FIELD_ID, hstring>* const HV4DMapRTClassFieldIDToHstring();

	__declspec(dllexport) const std::unordered_map<hstring, HV4D::HV4DWINRT::HV4D_RTCLASS_FIELD_ID>* const HV4DMapRTClassFieldHstringToID();

	__declspec(dllexport) HV4D::HV4DRETURN HV4DIsOntoMappedIndexField(std::vector<HV4D::HV4DWINRT::HV4D_ENUMERATED_INDEX_FIELD> const&);

	__declspec(dllexport) HV4D::HV4DRETURN HV4DIsOntoMappedIndexField(std::unordered_map<HV4D::HV4DWINRT::HV4D_INDEX_FIELD_ID, HV4D::HV4DDUALITY::CHV4DINDEX> const&);

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DTRTCLASS : HV4DTRTCLASST<HV4DTRTCLASS, implementation::HV4DTRTCLASS>
	{

	};

}
