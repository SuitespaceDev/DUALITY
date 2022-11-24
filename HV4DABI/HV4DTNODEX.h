#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DT.h"

#include "HV4DTNODEX.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DTNODEX : HV4DTNODEXT<HV4DTNODEX>
	{
	public:
		HV4DTNODEX();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DTNODEX : HV4DTNODEXT<HV4DTNODEX, implementation::HV4DTNODEX>
	{

	};

}
