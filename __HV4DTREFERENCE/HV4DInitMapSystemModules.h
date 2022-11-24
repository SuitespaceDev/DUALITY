#pragma once

#include <map>
#include <vector>

#include "CHV4DRTCLASS.h"

#include "HV4DMapSystemModules.h"

#include "winrt/HV4D.HV4DFLOW.h"
#include "winrt/HV4D.HV4DENUM.h"
#include "winrt/HV4D.HV4DWINRT.h"

namespace winrt::HV4D::HV4DDUALITY
{
	std::vector<HV4D::HV4DENUM::HV4D_ENUMERATED_SYSTEM_MODULE> HV4DInitEnumeratedSystemModules();

	std::unordered_map<HV4D::HV4DENUM::HV4D_SYSTEM_MODULE_ID, HV4D::HV4DDUALITY::CHV4DRTCLASS> HV4DInitMapEnumeratedSystemModules();

	HV4D::HV4DRETURN HV4DIsOntoMappedSystemModule(std::vector<HV4D::HV4DENUM::HV4D_ENUMERATED_SYSTEM_MODULE> const&);

	HV4D::HV4DRETURN HV4DIsOntoMappedSystemModule(std::unordered_map<HV4D::HV4DENUM::HV4D_SYSTEM_MODULE_ID, HV4D::HV4DDUALITY::CHV4DRTCLASS> const&);

}