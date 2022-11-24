#pragma once

#include <map>
#include <vector>

#include "winrt/HV4D.HV4DFLOW.h"
#include "winrt/HV4D.HV4DWINRT.h"

namespace winrt::HV4D::HV4DDUALITY
{
	const std::unordered_map<hstring, HV4D::HV4DWINRT::HV4D_INDEX_FIELD_ID>* const HV4DMapProjectIndexFieldHstringToID();

	const std::unordered_map<HV4D::HV4DWINRT::HV4D_INDEX_FIELD_ID, hstring>* const HV4DMapProjectIndexFieldIDToHstring();

}