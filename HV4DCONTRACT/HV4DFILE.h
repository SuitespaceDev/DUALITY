#pragma once

#include "winrt/HV4D.h"

#include "HV4DFILE.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DFILE : HV4DFILET<HV4DFILE>
	{
	public:
		HV4DFILE();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DFILE : HV4DFILET<HV4DFILE, implementation::HV4DFILE>
	{

	};

}
