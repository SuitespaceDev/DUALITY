#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "HV4DINTERUPT.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DINTERUPT : HV4DINTERUPTT<HV4DINTERUPT>
	{
	public:
		HV4DINTERUPT();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DINTERUPT : HV4DINTERUPTT<HV4DINTERUPT, implementation::HV4DINTERUPT>
	{

	};

}
