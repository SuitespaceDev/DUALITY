#pragma once

#include "winrt/HV4D.h"

#include "HV4DSERVER.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DSERVER : HV4DSERVERT<HV4DSERVER>
	{
	public:
		HV4DSERVER();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DSERVER : HV4DSERVERT<HV4DSERVER, implementation::HV4DSERVER>
	{

	};

}
