#pragma once

#include <map>
#include <vector>

#include "HV4DMapConfigurationFile.h"

#include "winrt/HV4D.HV4DFLOW.h"
#include "winrt/HV4D.HV4DENUM.h"
#include "winrt/HV4D.HV4DWINRT.h"

namespace winrt::HV4D::HV4DDUALITY
{
	std::vector<HV4D::HV4DWINRT::HV4D_ENUMERATED_DUALITY_ENTRY> HV4DInitEnumeratedConfigurationField();

	std::unordered_map<HV4D::HV4DWINRT::HV4D_DUALITY_FIELD_ID, hstring> HV4DInitMapConfigurationField();

	HV4D::HV4DRETURN HV4DIsOntoMappedConfigurationDocument(std::vector<HV4D::HV4DWINRT::HV4D_ENUMERATED_DUALITY_ENTRY> const&);

	HV4D::HV4DRETURN HV4DIsOntoMappedConfigurationDocument(std::unordered_map<HV4D::HV4DWINRT::HV4D_DUALITY_FIELD_ID, hstring> const&);

}