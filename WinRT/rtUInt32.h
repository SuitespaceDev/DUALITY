#pragma once

#include "winrt/HV4D.h"

#include "HV4DUInt32.g.h"

namespace winrt::WinRT::implementation
{
	struct HV4DUInt32 : HV4DUInt32T<HV4DUInt32>
	{
	public:
		HV4DUInt32();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::WinRT::factory_implementation
{
	struct HV4DUInt32 : HV4DUInt32T<HV4DUInt32, implementation::HV4DUInt32>
	{

	};

}
