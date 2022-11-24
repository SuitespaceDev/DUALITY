#pragma once

#include <map>
#include <vector>

#include "HV4DMapSystemFile.h"

#include "winrt/HV4D.HV4DFLOW.h"
#include "winrt/HV4D.HV4DWINRT.h"

namespace winrt::HV4D::HV4DDUALITY
{
	const std::unordered_map<HV4D::HV4DWINRT::HV4D_SYSTEM_FILE_FIELD_ID, hstring>* const HV4DMapSystemFileFieldIDToHstring();

	const std::unordered_map<hstring, HV4D::HV4DWINRT::HV4D_SYSTEM_FILE_FIELD_ID>* const HV4DMapSystemFileFieldHstringToID();

}