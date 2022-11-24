#include "pch.h"
#include "HV4DWIN.h"
#if __has_include("HV4DWIN.g.cpp")
#include "HV4DWIN.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DSYSCALL::implementation
{
	HV4DWIN::HV4DWIN()
	{

		return;

	}

	HV4DRETURN HV4DWIN::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
