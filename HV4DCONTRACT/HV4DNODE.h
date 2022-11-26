#pragma once

#include "HV4DNODE.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DNODE : HV4DNODET<HV4DNODE>
	{
	public:
		HV4DNODE();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DNODE : HV4DNODET<HV4DNODE, implementation::HV4DNODE>
	{

	};

}
