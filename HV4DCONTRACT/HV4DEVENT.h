#pragma once

#include "winrt/HV4D.h"

#include "HV4DEVENT.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DEVENT : HV4DEVENTT<HV4DEVENT>
	{
	public:
		HV4DEVENT();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DEVENT : HV4DEVENTT<HV4DEVENT, implementation::HV4DEVENT>
	{

	};

}
