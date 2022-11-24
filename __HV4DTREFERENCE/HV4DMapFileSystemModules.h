#pragma once

#include <map>

#include "winrt/HV4D.HV4DFLOW.h"
#include "winrt/HV4D.HV4DENUM.h"

namespace winrt::HV4D::HV4DDUALITY
{
	const std::unordered_map<HV4D::HV4DENUM::HV4D_FILE_SYSTEM_MODULE_ID, hstring>* const HV4DMapFileSystemModuleIDToHstring();

	const std::unordered_map<hstring, HV4D::HV4DENUM::HV4D_FILE_SYSTEM_MODULE_ID>* const HV4DMapFileSystemModuleHstringToID();

}