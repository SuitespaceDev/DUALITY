#pragma once

#include "winrt/HV4D.h"

#include "HV4DBoolean.g.h"

namespace winrt::WinRT::implementation
{
	struct HV4DBoolean : HV4DBooleanT<HV4DBoolean>
	{
	public:
		HV4DBoolean();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::WinRT::factory_implementation
{
	struct HV4DBoolean : HV4DBooleanT<HV4DBoolean, implementation::HV4DBoolean>
	{

	};

}
