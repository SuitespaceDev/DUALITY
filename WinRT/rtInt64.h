#pragma once

#include "winrt/HV4D.h"

#include "HV4DInt64.g.h"

namespace winrt::WinRT::implementation
{
	struct HV4DInt64 : HV4DInt64T<HV4DInt64>
	{
	public:
		HV4DInt64();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::WinRT::factory_implementation
{
	struct HV4DInt64 : HV4DInt64T<HV4DInt64, implementation::HV4DInt64>
	{

	};

}
