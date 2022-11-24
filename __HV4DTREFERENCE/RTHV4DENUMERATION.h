#pragma once

#include "RTHV4DENUMERATION.g.h"

namespace winrt::THV4D::implementation
{
	struct RTHV4DENUMERATION : RTHV4DENUMERATIONT<RTHV4DENUMERATION>
	{
	public:
		RTHV4DENUMERATION();

	};

}

namespace winrt::THV4D::factory_implementation
{
	struct RTHV4DENUMERATION : RTHV4DENUMERATIONT<RTHV4DENUMERATION, implementation::RTHV4DENUMERATION>
	{

	};

}
