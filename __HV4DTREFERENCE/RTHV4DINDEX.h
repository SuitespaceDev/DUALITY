#pragma once

#include "RTHV4DINDEX.g.h"

namespace winrt::THV4D::implementation
{
	struct RTHV4DINDEX : RTHV4DINDEXT<RTHV4DINDEX>
	{
	public:
		RTHV4DINDEX();

	};

}

namespace winrt::THV4D::factory_implementation
{
	struct RTHV4DINDEX : RTHV4DINDEXT<RTHV4DINDEX, implementation::RTHV4DINDEX>
	{

	};

}
