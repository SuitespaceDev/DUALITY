#pragma once

#include "winrt/HV4D.h"

#include "HV4DOBJECT.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DOBJECT : HV4DOBJECTT<HV4DOBJECT>
	{
	public:
		HV4DOBJECT();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DOBJECT : HV4DOBJECTT<HV4DOBJECT, implementation::HV4DOBJECT>
	{

	};

}
