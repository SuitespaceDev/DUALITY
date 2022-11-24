#pragma once

#include "RTHV4DAPPLICATION.g.h"

namespace winrt::THV4D::implementation
{
	struct RTHV4DAPPLICATION : RTHV4DAPPLICATIONT<RTHV4DAPPLICATION>
	{
	public:
		RTHV4DAPPLICATION();

	};

}

namespace winrt::THV4D::factory_implementation
{
	struct RTHV4DAPPLICATION : RTHV4DAPPLICATIONT<RTHV4DAPPLICATION, implementation::RTHV4DAPPLICATION>
	{

	};

}
