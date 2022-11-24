#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "HV4DABS.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DABS : HV4DABST<HV4DABS>
	{
	public:
		HV4DABS();

	public:
		HV4D::HV4DRETURN HV4D();

	public:
		virtual HV4D::HV4DRETURN HV4DFromHstring(hstring const&, hstring const&);

		virtual HV4D::HV4DRETURN HV4DFromABI(winrt::HV4DABI::ABS const&);

		virtual HV4D::HV4DRETURN HV4DFromWinRT(winrt::HV4DABI::HV4DABS const&);

		virtual HV4D::HV4DRETURN HV4DToHstring(hstring&, hstring&);

		virtual HV4D::HV4DRETURN HV4DToABI(winrt::HV4DABI::ABS&);

		virtual HV4D::HV4DRETURN HV4DToWinRT(winrt::HV4DABI::HV4DABS);

		virtual HV4D::HV4DRETURN HV4DIsEqualHstring(hstring const&, hstring const&);

		virtual HV4D::HV4DRETURN HV4DIsEqualABI(winrt::HV4DABI::ABS const&);

		virtual HV4D::HV4DRETURN HV4DIsEqualWinRT(winrt::HV4DABI::HV4DABS const&);

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DABS : HV4DABST<HV4DABS, implementation::HV4DABS>
	{

	};

}
