#pragma once

#include "winrt/HV4D.h"

#include "HV4DOSTREAM.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DOSTREAM : HV4DOSTREAMT<HV4DOSTREAM>
	{
	public:
		HV4DOSTREAM();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DOSTREAM : HV4DOSTREAMT<HV4DOSTREAM, implementation::HV4DOSTREAM>
	{

	};

}
