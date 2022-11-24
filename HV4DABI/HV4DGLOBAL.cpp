#include "pch.h"
#include "HV4DGLOBAL.h"
#if __has_include("HV4DGLOBAL.g.cpp")
#include "HV4DGLOBAL.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DGLOBAL::HV4DGLOBAL()
	{

		return;

	}

	HV4DRETURN HV4DGLOBAL::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
