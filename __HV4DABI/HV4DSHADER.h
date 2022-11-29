#pragma once

#include "winrt/HV4D.h"

#include "HV4DSHADER.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DSHADER : HV4DSHADERT<HV4DSHADER>
	{
	public:
		HV4DSHADER();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DSHADER : HV4DSHADERT<HV4DSHADER, implementation::HV4DSHADER>
	{

	};

}
