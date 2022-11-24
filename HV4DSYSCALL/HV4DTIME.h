#pragma once

#include "winrt/HV4D.h"

#include "HV4DTIME.g.h"

namespace winrt::HV4DSYSCALL::implementation
{
	struct HV4DTIME : HV4DTIMET<HV4DTIME>
	{
	public:
		HV4DTIME();

	public:
		HV4D::HV4DRETURN HV4DIsValidTime(uint64_t const&);

		HV4D::HV4DRETURN HV4DIsValidTime(hstring const&, hstring const&);

	};

}

namespace winrt::HV4DSYSCALL::factory_implementation
{
	struct HV4DTIME : HV4DTIMET<HV4DTIME, implementation::HV4DTIME>
	{

	};

}
