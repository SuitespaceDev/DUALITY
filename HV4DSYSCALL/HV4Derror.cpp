#include "pch.h"
#include "HV4Derror.h"
#if __has_include("HV4Derror.g.cpp")
#include "HV4Derror.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DSYSCALL::implementation
{
	HV4Derror::HV4Derror()
	{

		return;

	}

	HV4DRETURN HV4Derror::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
