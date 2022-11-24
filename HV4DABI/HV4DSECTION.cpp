#include "pch.h"
#include "HV4DSECTION.h"
#if __has_include("HV4DSECTION.g.cpp")
#include "HV4DSECTION.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DABI::implementation
{
	HV4DSECTION::HV4DSECTION()
	{

		return;

	}

	HV4DRETURN HV4DSECTION::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
