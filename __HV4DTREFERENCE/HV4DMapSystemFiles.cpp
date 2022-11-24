#include "pch.h"

#include "HV4DMapSystemFiles.h"

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DFLOW;
using namespace winrt::HV4D::HV4DENUM;

namespace winrt::HV4D::HV4DDUALITY
{
	class CHV4DSYSFILE;

	std::unordered_map<HV4D_FILE_SYSTEM_ID, hstring> const tagHV4DMapSystemFileIDToHstring{
		{ HV4D_FILE_SYSTEM_ID::FHV4DDUALITY		,L"FHV4DDUALITY" },
		{ HV4D_FILE_SYSTEM_ID::FHV4D			,L"FHV4D"		 },
		{ HV4D_FILE_SYSTEM_ID::FHV4DVOL			,L"FHV4DVOL"	 },
		{ HV4D_FILE_SYSTEM_ID::FHV4DATT			,L"FHV4DATT"	 },
		{ HV4D_FILE_SYSTEM_ID::FHV4DSFT			,L"FHV4DSFT"	 },
		{ HV4D_FILE_SYSTEM_ID::FHV4DBAT			,L"FHV4DBAT"	 } };

	const std::unordered_map<HV4D_FILE_SYSTEM_ID, hstring>* const HV4DMapSystemFileIDToHstring()
	{
		return &tagHV4DMapSystemFileIDToHstring;

	}

	std::unordered_map<hstring, HV4D_FILE_SYSTEM_ID> const tagHV4DMapSystemFileHstringToID{
		{ L"FHV4DDUALITY"	,HV4D_FILE_SYSTEM_ID::FHV4DDUALITY	},
		{ L"FHV4D"			,HV4D_FILE_SYSTEM_ID::FHV4D			},
		{ L"FHV4DVOL"		,HV4D_FILE_SYSTEM_ID::FHV4DVOL		},
		{ L"FHV4DATT"		,HV4D_FILE_SYSTEM_ID::FHV4DATT		},
		{ L"FHV4DSFT"		,HV4D_FILE_SYSTEM_ID::FHV4DSFT		},
		{ L"FHV4DBAT"		,HV4D_FILE_SYSTEM_ID::FHV4DBAT		} };

	const std::unordered_map<hstring, HV4D_FILE_SYSTEM_ID>* const HV4DMapSystemFileHstringToID()
	{
		return &tagHV4DMapSystemFileHstringToID;

	}

}