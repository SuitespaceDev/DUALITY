#pragma once

#include <map>
#include <vector>

#include "CHV4DSYSFILE.h" 

#include "HV4DMapSystemFiles.h"

#include "winrt/HV4D.HV4DFLOW.h"
#include "winrt/HV4D.HV4DENUM.h"
#include "winrt/HV4D.HV4DWINRT.h"

namespace winrt::HV4D::HV4DDUALITY
{
	std::vector<HV4D::HV4DENUM::HV4D_ENUMERATED_FILE_SYSTEM> HV4DInitEnumeratedSystemFile();

	std::unordered_map<HV4D::HV4DENUM::HV4D_FILE_SYSTEM_ID, HV4D::HV4DDUALITY::CHV4DSYSFILE> HV4DInitMapSystemFile();

	HV4D::HV4DRETURN HV4DIsOntoMappedSystemFile(std::vector<HV4D::HV4DENUM::HV4D_ENUMERATED_FILE_SYSTEM> const&);

	HV4D::HV4DRETURN HV4DIsOntoMappedSystemFile(std::unordered_map<HV4D::HV4DENUM::HV4D_FILE_SYSTEM_ID, HV4D::HV4DDUALITY::CHV4DSYSFILE> const&);

}