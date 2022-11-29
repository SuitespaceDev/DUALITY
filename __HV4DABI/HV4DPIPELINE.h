#pragma once

#include "winrt/HV4D.h"

#include "HV4DPIPELINE.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DPIPELINE : HV4DPIPELINET<HV4DPIPELINE>
	{
	public:
		HV4DPIPELINE();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DPIPELINE : HV4DPIPELINET<HV4DPIPELINE, implementation::HV4DPIPELINE>
	{

	};

}
