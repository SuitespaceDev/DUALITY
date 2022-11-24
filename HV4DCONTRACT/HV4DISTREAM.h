#pragma once

#include "winrt/HV4D.h"

#include "HV4DISTREAM.g.h"

namespace winrt::HV4DCONTRACT::implementation
{
	struct HV4DISTREAM : HV4DISTREAMT<HV4DISTREAM>
	{
	public:
		HV4DISTREAM();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DCONTRACT::factory_implementation
{
	struct HV4DISTREAM : HV4DISTREAMT<HV4DISTREAM, implementation::HV4DISTREAM>
	{

	};

}
