#pragma once

#include "HV4DPROVIDER.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DPROVIDER : HV4DPROVIDERT<HV4DPROVIDER>
	{
	public:
		HV4DPROVIDER();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DPROVIDER : HV4DPROVIDERT<HV4DPROVIDER, implementation::HV4DPROVIDER>
	{

	};

}
