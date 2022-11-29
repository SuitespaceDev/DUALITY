#pragma once

#include "winrt/HV4D.h"

#include "HV4DVIEW.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DVIEW : HV4DVIEWT<HV4DVIEW>
	{
	public:
		HV4DVIEW();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DVIEW : HV4DVIEWT<HV4DVIEW, implementation::HV4DVIEW>
	{

	};

}
