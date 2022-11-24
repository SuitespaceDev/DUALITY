#pragma once

#include <map>
#include <vector>

#include "winrt/HV4D.HV4DFLOW.h"
#include "winrt/HV4D.HV4DENUM.h"

namespace winrt::HV4D::HV4DDUALITY
{
	const std::unordered_map<HV4D::HV4DENUM::HV4D_FILE_SYSTEM_ID, hstring>* const HV4DMapSystemFileIDToHstring();

	const std::unordered_map<hstring, HV4D::HV4DENUM::HV4D_FILE_SYSTEM_ID>* const HV4DMapSystemFileHstringToID();

}