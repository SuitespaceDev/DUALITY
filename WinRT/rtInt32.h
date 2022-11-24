#pragma once

#include "winrt/HV4D.h"

#include "HV4DInt32.g.h"

namespace winrt::WinRT::implementation
{
	struct HV4DInt32 : HV4DInt32T<HV4DInt32>
	{
	public:
		HV4DInt32();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::WinRT::factory_implementation
{
	struct HV4DInt32 : HV4DInt32T<HV4DInt32, implementation::HV4DInt32>
	{

	};

}
