#include "pch.h"
#include "HV4DTIME.h"
#if __has_include("HV4DTIME.g.cpp")
#include "HV4DTIME.g.cpp"
#endif

namespace winrt::HV4DSYSCALL::implementation
{
	HV4DTIME::HV4DTIME()
	{

		return;

	}

	HV4D::IHV4DRETURN HV4DTIME::HV4DIsValidTime(uint64_t const& t)
	{


		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DTIME::HV4DIsValidTime(winrt::hstring const&, winrt::hstring const&)
	{


		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}
