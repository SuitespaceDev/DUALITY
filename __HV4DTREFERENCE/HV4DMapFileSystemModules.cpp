#include "pch.h"

#include "HV4DMapFileSystemModules.h"

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DFLOW;
using namespace winrt::HV4D::HV4DENUM;

namespace winrt::HV4D::HV4DDUALITY
{
	std::unordered_map<HV4D_FILE_SYSTEM_MODULE_ID, hstring> const tagHV4DMapFileSystemModuleIDToHstring{
		{ HV4D_FILE_SYSTEM_MODULE_ID::HV4DBOOT   		,L"HV4DBOOT"  		},
		{ HV4D_FILE_SYSTEM_MODULE_ID::HV4DVOLUME		,L"HV4DVOLUME"		},
		{ HV4D_FILE_SYSTEM_MODULE_ID::HV4DMOUNT			,L"HV4DMOUNT"		},
		{ HV4D_FILE_SYSTEM_MODULE_ID::HV4DOSTREAM		,L"HV4DOSTREAM"		},
		{ HV4D_FILE_SYSTEM_MODULE_ID::HV4DISTREAM		,L"HV4DISTREAM"		},
		{ HV4D_FILE_SYSTEM_MODULE_ID::HV4DBAT           ,L"HV4DBAT"        } };

	const std::unordered_map<HV4D_FILE_SYSTEM_MODULE_ID, hstring>* const HV4DMapFileSystemModuleIDToHstring()
	{
		return &tagHV4DMapFileSystemModuleIDToHstring;

	}

	std::unordered_map<hstring, HV4D_FILE_SYSTEM_MODULE_ID> const tagHV4DMapFileSystemModuleHstringToID{
		{ L"HV4DBOOT"  		,HV4D_FILE_SYSTEM_MODULE_ID::HV4DBOOT   	},
		{ L"HV4DVOLUME"		,HV4D_FILE_SYSTEM_MODULE_ID::HV4DVOLUME		},
		{ L"HV4DMOUNT"		,HV4D_FILE_SYSTEM_MODULE_ID::HV4DMOUNT		},
		{ L"HV4DOSTREAM"	,HV4D_FILE_SYSTEM_MODULE_ID::HV4DOSTREAM	},
		{ L"HV4DISTREAM"	,HV4D_FILE_SYSTEM_MODULE_ID::HV4DISTREAM	},
		{ L"HV4DBAT"        ,HV4D_FILE_SYSTEM_MODULE_ID::HV4DBAT		} };

	const std::unordered_map<hstring, HV4D_FILE_SYSTEM_MODULE_ID>* const HV4DMapFileSystemModuleHstringToID()
	{
		return &tagHV4DMapFileSystemModuleHstringToID;

	}

}