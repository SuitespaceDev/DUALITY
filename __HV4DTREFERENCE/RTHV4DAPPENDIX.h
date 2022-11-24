#pragma once

#include "RTHV4DAPPENDIX.g.h"

namespace winrt::HV4DAPPENDIX::implementation
{
	struct RTHV4DAPPENDIX : RTHV4DAPPENDIXT<RTHV4DAPPENDIX>
	{
	public:
		RTHV4DAPPENDIX();

	};

}

namespace winrt::HV4DAPPENDIX::factory_implementation
{
	struct RTHV4DAPPENDIX : RTHV4DAPPENDIXT<RTHV4DAPPENDIX, implementation::RTHV4DAPPENDIX>
	{

	};

}
