#pragma once

#include "HV4DSERVICEABI.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DSERVICEABI : HV4DSERVICEABIT<HV4DSERVICEABI>
	{
	public:
		HV4DSERVICEABI();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DSERVICEABI : HV4DSERVICEABIT<HV4DSERVICEABI, implementation::HV4DSERVICEABI>
	{

	};

}
