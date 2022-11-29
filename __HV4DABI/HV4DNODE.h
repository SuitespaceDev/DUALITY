#pragma once

#include "winrt/HV4D.h"

#include "HV4DNODE.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DNODE : HV4DNODET<HV4DNODE>
	{
	public:
		HV4DNODE();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DNODE : HV4DNODET<HV4DNODE, implementation::HV4DNODE>
	{

	};

}
