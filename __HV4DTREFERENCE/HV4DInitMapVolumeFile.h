#pragma once

#include <map>
#include <vector>

#include "HV4DMapVolumeFile.h"

#include "winrt/HV4D.HV4DFLOW.h"
#include "winrt/HV4D.HV4DWINRT.h"

namespace winrt::HV4D::HV4DDUALITY
{
	std::vector<HV4D::HV4DWINRT::HV4D_ENUMERATED_VOLUME_ENTRY> HV4DInitEnumeratedVolumeField();

	std::unordered_map<HV4D::HV4DWINRT::HV4D_VOLUME_FILE_FIELD_ID, hstring> HV4DInitMapVolumeField();

	HV4D::HV4DRETURN HV4DIsOntoMappedVolumeField(std::vector<HV4D::HV4DWINRT::HV4D_ENUMERATED_VOLUME_ENTRY> const&);

	HV4D::HV4DRETURN HV4DIsOntoMappedVolumeField(std::unordered_map<HV4D::HV4DWINRT::HV4D_VOLUME_FILE_FIELD_ID, hstring> const&);

}