#pragma once

#include "winrt/HV4D.h"

#include "HV4DInt16.g.h"

namespace winrt::WinRT::implementation
{
	struct HV4DInt16 : HV4DInt16T<HV4DInt16>
	{
	public:
		HV4DInt16();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::WinRT::factory_implementation
{
	struct HV4DInt16 : HV4DInt16T<HV4DInt16, implementation::HV4DInt16>
	{

	};

}
