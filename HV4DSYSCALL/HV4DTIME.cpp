#include "pch.h"
#include "HV4DTIME.h"
#if __has_include("HV4DTIME.g.cpp")
#include "HV4DTIME.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DSYSCALL::implementation
{
	HV4DTIME::HV4DTIME()
	{

		return;

	}

	HV4DRETURN HV4DTIME::HV4DIsValidTime(uint64_t const& t)
	{


		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTIME::HV4DIsValidTime(hstring const&, hstring const&)
	{


		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
