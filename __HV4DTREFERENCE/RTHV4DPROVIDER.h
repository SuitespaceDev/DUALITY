#pragma once

#include "RTHV4DPROVIDER.g.h"

namespace winrt::THV4D::implementation
{
	struct RTHV4DPROVIDER : RTHV4DPROVIDERT<RTHV4DPROVIDER>
	{
	public:
		RTHV4DPROVIDER();

	};

}

namespace winrt::THV4D::factory_implementation
{
	struct RTHV4DPROVIDER : RTHV4DPROVIDERT<RTHV4DPROVIDER, implementation::RTHV4DPROVIDER>
	{

	};

}
