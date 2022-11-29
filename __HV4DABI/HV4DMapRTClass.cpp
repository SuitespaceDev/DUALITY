#include "pch.h"

#include "HV4DMapRTClass.h"

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DWINRT;

namespace winrt::HV4D::HV4DDUALITY
{
	std::unordered_map<HV4D_RTCLASS_FIELD_ID, hstring> const tagHV4DMapRTClassFieldIDToHstring{
		{ HV4D_RTCLASS_FIELD_ID::HV4D_HVID			,L"HV4D_HVID"		},
		{ HV4D_RTCLASS_FIELD_ID::HV4D_MMM			,L"HV4D_MMM"		},
		{ HV4D_RTCLASS_FIELD_ID::HV4D_NAME			,L"HV4D_NAME"		},
		{ HV4D_RTCLASS_FIELD_ID::HV4D_PATH			,L"HV4D_PATH"		},
		{ HV4D_RTCLASS_FIELD_ID::HV4D_DLL			,L"HV4D_DLL"		},
		{ HV4D_RTCLASS_FIELD_ID::HV4D_NAMESPACE		,L"HV4D_NAMESPACE"	},
		{ HV4D_RTCLASS_FIELD_ID::HV4D_CLASST		,L"HV4D_CLASST"		} };

	const std::unordered_map<HV4D_RTCLASS_FIELD_ID, hstring>* const HV4DMapRTClassFieldIDToHstring()
	{
		return &tagHV4DMapRTClassFieldIDToHstring;

	}

	std::unordered_map<hstring, HV4D_RTCLASS_FIELD_ID> const tagHV4DMapRTClassFieldHstringToID{
		{ L"HV4D_HVID"			,HV4D_RTCLASS_FIELD_ID::HV4D_HVID		},
		{ L"HV4D_MMM"			,HV4D_RTCLASS_FIELD_ID::HV4D_MMM			},
		{ L"HV4D_NAME"			,HV4D_RTCLASS_FIELD_ID::HV4D_NAME		},
		{ L"HV4D_PATH"			,HV4D_RTCLASS_FIELD_ID::HV4D_PATH		},
		{ L"HV4D_DLL"			,HV4D_RTCLASS_FIELD_ID::HV4D_DLL			},
		{ L"HV4D_NAMESPACE"		,HV4D_RTCLASS_FIELD_ID::HV4D_NAMESPACE	},
		{ L"HV4D_CLASST"		,HV4D_RTCLASS_FIELD_ID::HV4D_CLASST		} };

	const std::unordered_map<hstring, HV4D_RTCLASS_FIELD_ID>* const HV4DMapRTClassFieldHstringToID()
	{
		return &tagHV4DMapRTClassFieldHstringToID;

	}

}