#pragma once

#include "winrt/HV4D.h"

#include "HV4DWORLD.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DWORLD : HV4DWORLDT<HV4DWORLD>
	{
	public:
		HV4DWORLD();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DWORLD : HV4DWORLDT<HV4DWORLD, implementation::HV4DWORLD>
	{

	};

}
