#pragma once

#include "HV4DSESSION.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DSESSION : HV4DSESSIONT<HV4DSESSION>
	{
	public:
		HV4DSESSION();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DSESSION : HV4DSESSIONT<HV4DSESSION, implementation::HV4DSESSION>
	{

	};

}
