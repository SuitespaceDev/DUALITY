#pragma once

#include <map>
#include <vector>

#include "CHV4DRTCLASS.h"

#include "HV4DMapFileSystemModules.h"

#include "winrt/HV4D.HV4DFLOW.h"
#include "winrt/HV4D.HV4DENUM.h"
#include "winrt/HV4D.HV4DWINRT.h"


namespace winrt::HV4D::HV4DDUALITY
{
	std::vector<HV4D::HV4DENUM::HV4D_ENUMERATED_FILE_SYSTEM_MODULE> HV4DInitEnumeratedFileSystemModules();

	std::unordered_map<HV4D::HV4DENUM::HV4D_FILE_SYSTEM_MODULE_ID, HV4D::HV4DDUALITY::CHV4DRTCLASS> HV4DInitMapFileSystemModules();

	HV4D::HV4DRETURN HV4DIsOntoMappedFileSystemModule(std::vector<HV4D::HV4DENUM::HV4D_ENUMERATED_FILE_SYSTEM_MODULE> const&);

	HV4D::HV4DRETURN HV4DIsOntoMappedFileSystemModule(std::unordered_map<HV4D::HV4DENUM::HV4D_FILE_SYSTEM_MODULE_ID, HV4D::HV4DDUALITY::CHV4DRTCLASS> const&);

}