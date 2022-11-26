#pragma once

#include "winrt/HV4D.h"

#include "HV4DTIME.g.h"

namespace HV4D = winrt::HV4D;

namespace winrt::HV4DSYSCALL::implementation
{
	struct HV4DTIME : HV4DTIMET<HV4DTIME>
	{
	public:
		HV4DTIME();

	public:
		HV4D::IHV4DRETURN HV4DIsValidTime(uint64_t const&);

		HV4D::IHV4DRETURN HV4DIsValidTime(winrt::hstring const&, winrt::hstring const&);

	};

}

namespace winrt::HV4DSYSCALL::factory_implementation
{
	struct HV4DTIME : HV4DTIMET<HV4DTIME, implementation::HV4DTIME>
	{

	};

}
