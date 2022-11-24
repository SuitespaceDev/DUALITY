#pragma once

#include "winrt/HV4D.h"

#include "HV4DChar.g.h"

namespace winrt::WinRT::implementation
{
	struct HV4DChar : HV4DCharT<HV4DChar>
	{
	public:
		HV4DChar();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::WinRT::factory_implementation
{
	struct HV4DChar : HV4DCharT<HV4DChar, implementation::HV4DChar>
	{

	};

}
