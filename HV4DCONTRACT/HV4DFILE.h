#pragma once

#include "HV4DFILE.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DFILE : HV4DFILET<HV4DFILE>
	{
	public:
		HV4DFILE();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DFILE : HV4DFILET<HV4DFILE, implementation::HV4DFILE>
	{

	};

}
