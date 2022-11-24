#pragma once

#include "winrt/HV4D.h"

#include "HV4DSYSFILE.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DSYSFILE : HV4DSYSFILET<HV4DSYSFILE>
	{
	public:
		HV4DSYSFILE();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DSYSFILE : HV4DSYSFILET<HV4DSYSFILE, implementation::HV4DSYSFILE>
	{

	};

}
