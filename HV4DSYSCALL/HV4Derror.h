#pragma once

#include "winrt/HV4D.h"

#include "HV4Derror.g.h"

namespace winrt::HV4DSYSCALL::implementation
{
	struct HV4Derror : HV4DerrorT<HV4Derror>
	{
	public:
		HV4Derror();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DSYSCALL::factory_implementation
{
	struct HV4Derror : HV4DerrorT<HV4Derror, implementation::HV4Derror>
	{

	};

}
