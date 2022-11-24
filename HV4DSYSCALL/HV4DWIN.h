#pragma once

#include "winrt/HV4D.h"

#include "HV4DWIN.g.h"

namespace winrt::HV4DSYSCALL::implementation
{
	struct HV4DWIN : HV4DWINT<HV4DWIN>
	{
	public:
		HV4DWIN();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DSYSCALL::factory_implementation
{
	struct HV4DWIN : HV4DWINT<HV4DWIN, implementation::HV4DWIN>
	{

	};

}
