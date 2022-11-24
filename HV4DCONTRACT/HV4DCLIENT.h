#pragma once

#include "winrt/HV4D.h"

#include "HV4DCLIENT.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DCLIENT : HV4DCLIENTT<HV4DCLIENT>
	{
	public:
		HV4DCLIENT();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DCLIENT : HV4DCLIENTT<HV4DCLIENT, implementation::HV4DCLIENT>
	{

	};

}
