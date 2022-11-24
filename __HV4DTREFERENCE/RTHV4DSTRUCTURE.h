#pragma once

#include "RTHV4DSTRUCTURE.g.h"

namespace winrt::THV4D::implementation
{
	struct RTHV4DSTRUCTURE : RTHV4DSTRUCTURET<RTHV4DSTRUCTURE>
	{
	public:
		RTHV4DSTRUCTURE();

	};

}

namespace winrt::THV4D::factory_implementation
{
	struct RTHV4DSTRUCTURE : RTHV4DSTRUCTURET<RTHV4DSTRUCTURE, implementation::RTHV4DSTRUCTURE>
	{

	};

}
