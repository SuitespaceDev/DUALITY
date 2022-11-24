#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "HV4DKEY.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DKEY : HV4DKEYT<HV4DKEY>
	{
	public:
		HV4DKEY();

	public:        
		HV4D::HV4DRETURN HV4DFromHstring(hstring const&, hstring const&);

		HV4D::HV4DRETURN HV4DFromKEY(winrt::HV4DABI::KEY const&);

		HV4D::HV4DRETURN HV4DFromWinRT(winrt::HV4DABI::HV4DKEY const&);

		HV4D::HV4DRETURN HV4DToHstring(hstring&, hstring&);

		HV4D::HV4DRETURN HV4DToKEY(winrt::HV4DABI::KEY&);

		HV4D::HV4DRETURN HV4DToWinRT(winrt::HV4DABI::HV4DKEY&);

		HV4D::HV4DRETURN HV4DIsEqualHstring(hstring const&, hstring const&);

		HV4D::HV4DRETURN HV4DIsEqualKEY(winrt::HV4DABI::KEY const&);

		HV4D::HV4DRETURN HV4DIsEqualWinRT(winrt::HV4DABI::HV4DKEY const&);

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DKEY : HV4DKEYT<HV4DKEY, implementation::HV4DKEY>
	{

	};

}
