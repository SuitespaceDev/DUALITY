#pragma once

#include "winrt/HV4D.h"

#include "HV4DASYNC.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DASYNC : HV4DASYNCT<HV4DASYNC>
	{
	public:
		HV4DASYNC();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DASYNC : HV4DASYNCT<HV4DASYNC, implementation::HV4DASYNC>
	{

	};

}
