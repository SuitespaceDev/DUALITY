#pragma once

#include "HV4DSERVICE.g.h"

namespace winrt::PeregrineX12::implementation
{
	struct HV4DSERVICE : HV4DSERVICET<HV4DSERVICE>
	{
	public:
		HV4DSERVICE();

	};

}

namespace winrt::PeregrineX12::factory_implementation
{
	struct HV4DSERVICE : HV4DSERVICET<HV4DSERVICE, implementation::HV4DSERVICE>
	{

	};

}
