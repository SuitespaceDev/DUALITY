#include "pch.h"
#include "HV4DSYSFILE.h"
#if __has_include("HV4DSYSFILE.g.cpp")
#include "HV4DSYSFILE.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DCONTRACT::implementation
{
	HV4DSYSFILE::HV4DSYSFILE()
	{

		return;

	}

	HV4DRETURN HV4DSYSFILE::HV4D()
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
