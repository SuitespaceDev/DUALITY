#pragma once

#include "winrt/HV4D.h"

#include "HV4DUInt64.g.h"

namespace winrt::WinRT::implementation
{
	struct HV4DUInt64 : HV4DUInt64T<HV4DUInt64>
	{
	public:
		HV4DUInt64();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::WinRT::factory_implementation
{
	struct HV4DUInt64 : HV4DUInt64T<HV4DUInt64, implementation::HV4DUInt64>
	{

	};

}
