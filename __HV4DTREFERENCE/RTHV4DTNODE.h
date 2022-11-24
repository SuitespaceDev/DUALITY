#pragma once

#include "RTHV4DTNODE.g.h"

namespace winrt::THV4D::implementation
{
	struct RTHV4DTNODE : RTHV4DTNODET<RTHV4DTNODE>
	{
	public:
		RTHV4DTNODE();

	};

}

namespace winrt::THV4D::factory_implementation
{
	struct RTHV4DTNODE : RTHV4DTNODET<RTHV4DTNODE, implementation::RTHV4DTNODE>
	{

	};

}
