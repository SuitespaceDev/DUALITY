#pragma once

#include "winrt/HV4D.h"

#include "HV4DWINRT.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DWINRT : HV4DWINRTT<HV4DWINRT>
	{
	public:
		HV4DWINRT();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DWINRT : HV4DWINRTT<HV4DWINRT, implementation::HV4DWINRT>
	{

	};

}
