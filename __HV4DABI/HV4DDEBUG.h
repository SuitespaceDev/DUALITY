#pragma once

#include "winrt/HV4D.h"

#include "HV4DDEBUG.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DDEBUG : HV4DDEBUGT<HV4DDEBUG>
	{
	public:
		HV4DDEBUG();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DDEBUG : HV4DDEBUGT<HV4DDEBUG, implementation::HV4DDEBUG>
	{

	};

}
