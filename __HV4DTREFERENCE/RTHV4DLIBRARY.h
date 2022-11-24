#pragma once

#include "RTHV4DLIBRARY.g.h"

namespace winrt::THV4D::implementation
{
	struct RTHV4DLIBRARY : RTHV4DLIBRARYT<RTHV4DLIBRARY>
	{
	public:
		RTHV4DLIBRARY();

	};

}

namespace winrt::THV4D::factory_implementation
{
	struct RTHV4DLIBRARY : RTHV4DLIBRARYT<RTHV4DLIBRARY, implementation::RTHV4DLIBRARY>
	{

	};

}
