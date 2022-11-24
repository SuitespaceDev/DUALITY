#pragma once

#include "RTHV4DHEADER.g.h"

namespace winrt::THV4D::implementation
{
	struct RTHV4DHEADER : RTHV4DHEADERT<RTHV4DHEADER>
	{
	public:
		RTHV4DHEADER();

	};

}

namespace winrt::THV4D::factory_implementation
{
	struct RTHV4DHEADER : RTHV4DHEADERT<RTHV4DHEADER, implementation::RTHV4DHEADER>
	{

	};

}
