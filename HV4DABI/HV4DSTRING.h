#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "HV4DSTRING.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DSTRING : HV4DSTRINGT<HV4DSTRING>
	{
	public:
		HV4DSTRING();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DSTRING : HV4DSTRINGT<HV4DSTRING, implementation::HV4DSTRING>
	{

	};

}
