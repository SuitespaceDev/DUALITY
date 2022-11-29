#pragma once

#include "winrt/HV4D.h"

#include "HV4DHPC.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DHPC : HV4DHPCT<HV4DHPC>
	{
	public:
		HV4DHPC();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DHPC : HV4DHPCT<HV4DHPC, implementation::HV4DHPC>
	{

	};

}
