#pragma once

#include "winrt/HV4D.h"

#include "HV4DMETA.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DMETA : HV4DMETAT<HV4DMETA>
	{
	public:
		HV4DMETA();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DMETA : HV4DMETAT<HV4DMETA, implementation::HV4DMETA>
	{

	};

}
