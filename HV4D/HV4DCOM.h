#pragma once

#include "HV4DCOM.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;

namespace winrt::HV4D::implementation
{
	struct HV4DCOM : HV4DCOMT<HV4DCOM>
	{
	public:
		HV4DCOM() = default;



	}

}

namespace winrt::HV4D::factory_implementation
{
	struct HV4DCOM : HV4DCOMT<HV4DCOM, implementation::HV4DCOM>
	{

	};

}
