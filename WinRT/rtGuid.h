#pragma once

#include "winrt/HV4D.h"

#include "HV4DGuid.g.h"

namespace winrt::WinRT::implementation
{
	struct HV4DGuid : HV4DGuidT<HV4DGuid>
	{
	public:
		HV4DGuid();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::WinRT::factory_implementation
{
	struct HV4DGuid : HV4DGuidT<HV4DGuid, implementation::HV4DGuid>
	{

	};

}
