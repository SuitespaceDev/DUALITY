#include "pch.h"
#include "HV4DRTCLASS.h"
#if __has_include("HV4DRTCLASS.g.cpp")
#include "HV4DRTCLASS.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DSYSCALL::implementation
{
	HV4DRTCLASS::HV4DRTCLASS()
	{

		return;

	}

	HV4DRETURN HV4DRTCLASS::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
