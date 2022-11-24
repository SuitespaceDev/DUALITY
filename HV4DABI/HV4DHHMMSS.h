#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "HV4DHHMMSS.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DHHMMSS : HV4DHHMMSST<HV4DHHMMSS>
	{
	public:
		HV4DHHMMSS();

	public:
		HV4D::HV4DRETURN HV4DFromHstring(hstring const&);

		HV4D::HV4DRETURN HV4DFromABI(winrt::HV4DABI::HHMMSS const&);

		HV4D::HV4DRETURN HV4DFromWinRT(winrt::HV4DABI::HV4DHHMMSS const&);

		HV4D::HV4DRETURN HV4DToHstring(hstring&);

		HV4D::HV4DRETURN HV4DToABI(winrt::HV4DABI::HHMMSS&);

		HV4D::HV4DRETURN HV4DToWinRT(winrt::HV4DABI::HV4DHHMMSS&);

		HV4D::HV4DRETURN HV4DIsEqualHstring(hstring const&);

		HV4D::HV4DRETURN HV4DIsEqualABI(winrt::HV4DABI::HHMMSS const&);

		HV4D::HV4DRETURN HV4DIsEqualWinRT(winrt::HV4DABI::HV4DHHMMSS const&);

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DHHMMSS : HV4DHHMMSST<HV4DHHMMSS, implementation::HV4DHHMMSS>
	{

	};

}
