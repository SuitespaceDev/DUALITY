#pragma once

#include "winrt/HV4D.h"

#include "HV4DTREE.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DTREE : HV4DTREET<HV4DTREE>
	{
	public:
		HV4DTREE();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DTREE : HV4DTREET<HV4DTREE, implementation::HV4DTREE>
	{

	};

}
