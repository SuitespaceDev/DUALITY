#include "pch.h"

#include "HV4DMapFileSystemModules.h"

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DFLOW;
using namespace winrt::HV4D::HV4DENUM;

namespace winrt::HV4D::HV4DDUALITY
{
	std::unordered_map<HV4D_SYSTEM_MODULE_ID, hstring> const tagHV4DMapSystemModuleIDToHstring{
		{ HV4D_SYSTEM_MODULE_ID::HV4DCACHE		,L"HV4DCACHE"		},
		{ HV4D_SYSTEM_MODULE_ID::HV4DKERNEL		,L"HV4DKERNEL"		},
		{ HV4D_SYSTEM_MODULE_ID::HV4DTREE   	,L"HV4DTREE"   		},
		{ HV4D_SYSTEM_MODULE_ID::HV4DGLOBAL		,L"HV4DGLOBAL"		},
		{ HV4D_SYSTEM_MODULE_ID::HV4DWORLD		,L"HV4DWORLD"		},
		{ HV4D_SYSTEM_MODULE_ID::HV4DOBJECT		,L"HV4DOBJECT"		},
		{ HV4D_SYSTEM_MODULE_ID::HV4DMETADATA	,L"HV4DMETADATA"	} };

	const std::unordered_map<HV4D_SYSTEM_MODULE_ID, hstring>* const HV4DMapSystemModuleIDToHstring()
	{
		return &tagHV4DMapSystemModuleIDToHstring;

	}

	std::unordered_map<hstring, HV4D_SYSTEM_MODULE_ID> const tagHV4DMapSystemModuleHstringToID{
		{ L"HV4DCACHE"		,HV4D_SYSTEM_MODULE_ID::HV4DCACHE		},
		{ L"HV4DKERNEL"		,HV4D_SYSTEM_MODULE_ID::HV4DKERNEL		},
		{ L"HV4DTREE"   	,HV4D_SYSTEM_MODULE_ID::HV4DTREE   		},
		{ L"HV4DGLOBAL"		,HV4D_SYSTEM_MODULE_ID::HV4DGLOBAL		},
		{ L"HV4DWORLD"		,HV4D_SYSTEM_MODULE_ID::HV4DWORLD		},
		{ L"HV4DOBJECT"		,HV4D_SYSTEM_MODULE_ID::HV4DOBJECT		},
		{ L"HV4DMETADATA"	,HV4D_SYSTEM_MODULE_ID::HV4DMETADATA	} };

	const std::unordered_map<hstring, HV4D_SYSTEM_MODULE_ID>* const HV4DMapSystemModuleHstringToID()
	{
		return &tagHV4DMapSystemModuleHstringToID;

	}

}