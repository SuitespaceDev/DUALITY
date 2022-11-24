#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "HV4DCLASST.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DCLASST : HV4DCLASSTT<HV4DCLASST>
	{
	public:
		HV4DCLASST();

	public:
		HV4D::HV4DRETURN HV4DFromHstring(hstring const&, hstring const&);

		HV4D::HV4DRETURN HV4DFromABI(winrt::HV4DABI::CLASST const&);

		HV4D::HV4DRETURN HV4DFromWinRT(winrt::HV4DABI::HV4DCLASST const&);

		HV4D::HV4DRETURN HV4DToHstring(hstring&, hstring&);

		HV4D::HV4DRETURN HV4DToABI(winrt::HV4DABI::CLASST&);

		HV4D::HV4DRETURN HV4DToWinRT(winrt::HV4DABI::HV4DCLASST&);

		HV4D::HV4DRETURN HV4DIsEqualHstring(hstring const&, hstring const&);

		HV4D::HV4DRETURN HV4DIsEqualABI(winrt::HV4DABI::CLASST const&);

		HV4D::HV4DRETURN HV4DIsEqualWinRT(winrt::HV4DABI::HV4DCLASST const&);

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DCLASST : HV4DCLASSTT<HV4DCLASST, implementation::HV4DCLASST>
	{

	};

}
