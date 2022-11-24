#pragma once

#include "winrt/HV4D.h"

#include "HV4DString.g.h"

namespace winrt::WinRT::implementation
{
	struct HV4DString : HV4DStringT<HV4DString>
	{
	public:
		HV4DString();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::WinRT::factory_implementation
{
	struct HV4DString : HV4DStringT<HV4DString, implementation::HV4DString>
	{

	};

}
