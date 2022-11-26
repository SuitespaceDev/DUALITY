#pragma once

#include "HV4DSECTION.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DSECTION : HV4DSECTIONT<HV4DSECTION>
	{
	public:
		HV4DSECTION();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DSECTION : HV4DSECTIONT<HV4DSECTION, implementation::HV4DSECTION>
	{

	};

}
