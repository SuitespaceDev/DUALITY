#pragma once

#include "winrt/HV4D.h"

#include "HV4DSingle.g.h"

namespace winrt::WinRT::implementation
{
	struct HV4DSingle : HV4DSingleT<HV4DSingle>
	{
	public:
		HV4DSingle();

	public:
		HV4D::HV4DRETURN HV4D();

	};

}

namespace winrt::WinRT::factory_implementation
{
	struct HV4DSingle : HV4DSingleT<HV4DSingle, implementation::HV4DSingle>
	{

	};

}
