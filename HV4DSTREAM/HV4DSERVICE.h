#pragma once

#include "HV4DSERVICE.g.h"

namespace winrt::HV4DATT::implementation
{
	struct HV4DSERVICE : HV4DSERVICET<HV4DSERVICE>
	{
	public:
		HV4DSERVICE();

	};

}

namespace winrt::HV4DATT::factory_implementation
{
	struct HV4DSERVICE : HV4DSERVICET<HV4DSERVICE, implementation::HV4DSERVICE>
	{

	};

}
