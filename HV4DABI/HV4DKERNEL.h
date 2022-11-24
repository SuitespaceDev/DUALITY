#pragma once

#include "winrt/HV4D.h"

#include "HV4DKERNEL.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DKERNEL : HV4DKERNELT<HV4DKERNEL>
	{
	public:
		HV4DKERNEL();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DKERNEL : HV4DKERNELT<HV4DKERNEL, implementation::HV4DKERNEL>
	{

	};

}
