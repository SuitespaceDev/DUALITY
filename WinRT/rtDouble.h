#pragma once

#include "winrt/HV4D.h"

#include "HV4DDouble.g.h"

namespace winrt::WinRT::implementation
{
	struct HV4DDouble : HV4DDoubleT<HV4DDouble>
	{
	public:
		HV4DDouble();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::WinRT::factory_implementation
{
	struct HV4DDouble : HV4DDoubleT<HV4DDouble, implementation::HV4DDouble>
	{

	};

}
