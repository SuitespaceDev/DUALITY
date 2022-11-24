#pragma once

#include "winrt/HV4D.h"

#include "HV4DUInt16.g.h"

namespace winrt::WinRT::implementation
{
	struct HV4DUInt16 : HV4DUInt16T<HV4DUInt16>
	{
	public:
		HV4DUInt16();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::WinRT::factory_implementation
{
	struct HV4DUInt16 : HV4DUInt16T<HV4DUInt16, implementation::HV4DUInt16>
	{

	};

}
