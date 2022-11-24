#pragma once

#include <map>
#include <vector>

#include "HV4DMapSystemFile.h"

#include "winrt/HV4D.HV4DFLOW.h"
#include "winrt/HV4D.HV4DWINRT.h"

namespace winrt::HV4D::HV4DDUALITY
{
	std::vector<HV4D::HV4DWINRT::HV4D_ENUMERATED_SYSTEM_FILE_FIELD> HV4DInitEnumeratedSystemFileField();

	std::unordered_map<HV4D::HV4DWINRT::HV4D_SYSTEM_FILE_FIELD_ID, hstring> HV4DInitMapSystemFileField();

	HV4D::HV4DRETURN HV4DIsOntoMappedSystemFileField(std::vector<HV4D::HV4DWINRT::HV4D_ENUMERATED_SYSTEM_FILE_FIELD> const&);

	HV4D::HV4DRETURN HV4DIsOntoMappedSystemFileField(std::unordered_map<HV4D::HV4DWINRT::HV4D_SYSTEM_FILE_FIELD_ID, hstring> const&);

}