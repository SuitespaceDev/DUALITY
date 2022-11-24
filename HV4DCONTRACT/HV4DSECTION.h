#pragma once

#include "winrt/HV4D.h"

#include "HV4DSECTION.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DSECTION : HV4DSECTIONT<HV4DSECTION>
	{
	public:
		HV4DSECTION();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DSECTION : HV4DSECTIONT<HV4DSECTION, implementation::HV4DSECTION>
	{

	};

}
