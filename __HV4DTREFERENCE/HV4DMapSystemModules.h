#pragma once

#include <map>

#include "CHV4DRTCLASS.h"

#include "winrt/HV4D.HV4DFLOW.h"
#include "winrt/HV4D.HV4DENUM.h"

namespace winrt::HV4D::HV4DDUALITY
{
	const std::unordered_map<HV4D::HV4DENUM::HV4D_SYSTEM_MODULE_ID, hstring>* const HV4DMapSystemModuleIDToHstring();

	const std::unordered_map<hstring, HV4D::HV4DENUM::HV4D_SYSTEM_MODULE_ID>* const HV4DMapSystemModuleHstringToID();

}