#pragma once

#include <map>
#include <vector>

#include "CHV4DINDEX.h"

#include "HV4DMapIndex.h"

#include "winrt/HV4D.HV4DFLOW.h"
#include "winrt/HV4D.HV4DWINRT.h"

namespace winrt::HV4D::HV4DDUALITY
{
	std::vector<HV4D::HV4DWINRT::HV4D_ENUMERATED_INDEX_FIELD> HV4DInitEnumeratedIndexField();

	std::unordered_map<HV4D::HV4DWINRT::HV4D_INDEX_FIELD_ID, HV4D::HV4DDUALITY::CHV4DINDEX> HV4DInitMapIndexField();

	HV4D::HV4DRETURN HV4DIsOntoMappedIndexField(std::vector<HV4D::HV4DWINRT::HV4D_ENUMERATED_INDEX_FIELD> const&);

	HV4D::HV4DRETURN HV4DIsOntoMappedIndexField(std::unordered_map<HV4D::HV4DWINRT::HV4D_INDEX_FIELD_ID, HV4D::HV4DDUALITY::CHV4DINDEX> const&);

}