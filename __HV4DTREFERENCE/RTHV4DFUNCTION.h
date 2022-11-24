#pragma once

#include "RTHV4DFUNCTION.g.h"

namespace winrt::THV4D::implementation
{
	struct RTHV4DFUNCTION : RTHV4DFUNCTIONT<RTHV4DFUNCTION>
	{
	public:
		RTHV4DFUNCTION();

	};

}

namespace winrt::THV4D::factory_implementation
{
	struct RTHV4DFUNCTION : RTHV4DFUNCTIONT<RTHV4DFUNCTION, implementation::RTHV4DFUNCTION>
	{

	};

}
