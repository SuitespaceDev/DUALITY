#pragma once

#include "winrt/HV4D.h"

#include "HV4DGLOBAL.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DGLOBAL : HV4DGLOBALT<HV4DGLOBAL>
	{
	public:
		HV4DGLOBAL();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DGLOBAL : HV4DGLOBALT<HV4DGLOBAL, implementation::HV4DGLOBAL>
	{

	};

}
