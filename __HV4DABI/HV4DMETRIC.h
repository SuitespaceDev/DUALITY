#pragma once

#include "winrt/HV4D.h"

#include "HV4DMETRIC.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DMETRIC : HV4DMETRICT<HV4DMETRIC>
	{
	public:
		HV4DMETRIC();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DMETRIC : HV4DMETRICT<HV4DMETRIC, implementation::HV4DMETRIC>
	{

	};

}
