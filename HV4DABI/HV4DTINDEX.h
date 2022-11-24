#pragma once

#include "HV4DTINDEX.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DTINDEX : HV4DTINDEXT<HV4DTINDEX>
	{
	public:
		HV4DTINDEX();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DTINDEX : HV4DTINDEXT<HV4DTINDEX, implementation::HV4DTINDEX>
	{

	};

}
