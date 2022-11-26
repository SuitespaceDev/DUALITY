#pragma once

#include "HV4DDISPATCH.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DDISPATCH : HV4DDISPATCHT<HV4DDISPATCH>
	{
	public:
		HV4DDISPATCH();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DDISPATCH : HV4DDISPATCHT<HV4DDISPATCH, implementation::HV4DDISPATCH>
	{

	};

}
