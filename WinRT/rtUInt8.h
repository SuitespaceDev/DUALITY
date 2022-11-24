#pragma once

#include "winrt/HV4D.h"

#include "HV4DUInt8.g.h"

namespace winrt::WinRT::implementation
{
	struct HV4DUInt8 : HV4DUInt8T<HV4DUInt8>
	{
	public:
		HV4DUInt8();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::WinRT::factory_implementation
{
	struct HV4DUInt8 : HV4DUInt8T<HV4DUInt8, implementation::HV4DUInt8>
	{

	};

}
