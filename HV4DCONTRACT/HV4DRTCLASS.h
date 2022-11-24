#pragma once

#include "winrt/HV4D.h"

#include "HV4DRTCLASS.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DRTCLASS : HV4DRTCLASST<HV4DRTCLASS>
	{
	public:
		HV4DRTCLASS();

	public:
		HV4D::HV4DRETURN HV4D();

	};

	const std::unordered_map<HV4D::HV4DWINRT::HV4D_RTCLASS_FIELD_ID, hstring>* const HV4DMapRTClassFieldIDToHstring();

	const std::unordered_map<hstring, HV4D::HV4DWINRT::HV4D_RTCLASS_FIELD_ID>* const HV4DMapRTClassFieldHstringToID();

	HV4D::HV4DRETURN HV4DIsOntoMappedIndexField(std::vector<HV4D::HV4DWINRT::HV4D_ENUMERATED_INDEX_FIELD> const&);

	HV4D::HV4DRETURN HV4DIsOntoMappedIndexField(std::unordered_map<HV4D::HV4DWINRT::HV4D_INDEX_FIELD_ID, HV4D::HV4DDUALITY::CHV4DINDEX> const&);


}

namespace winrt::HV4DSYSCALL::factory_implementation
{
	struct HV4DRTCLASS : HV4DRTCLASST<HV4DRTCLASS, implementation::HV4DRTCLASS>
	{

	};

}
