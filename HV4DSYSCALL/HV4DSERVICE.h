﻿#pragma once

#include "HV4DSERVICE.g.h"

namespace winrt::HV4DSYSCALL::implementation
{
	struct HV4DSERVICE : HV4DSERVICET<HV4DSERVICE>
	{
	public:
		HV4DSERVICE();

	};

}

namespace winrt::HV4DSYSCALL::factory_implementation
{
	struct HV4DSERVICE : HV4DSERVICET<HV4DSERVICE, implementation::HV4DSERVICE>
	{

	};

}
