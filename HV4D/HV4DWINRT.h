#pragma once

#include "HV4DWINRT.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;

namespace winrt::HV4D::implementation
{
	struct HV4DWINRT : HV4DWINRTT<HV4DWINRT>
	{
	public:
		HV4DWINRT() = default;



	}

}

namespace winrt::HV4D::factory_implementation
{
	struct HV4DWINRT : HV4DWINRTT<HV4DWINRT, implementation::HV4DWINRT>
	{

	};

}
