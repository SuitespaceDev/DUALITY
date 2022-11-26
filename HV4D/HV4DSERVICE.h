#pragma once

namespace WF = winrt::Windows::Foundation;

namespace MUX = winrt::Microsoft::UI::Xaml;

#include "HV4DSERVICE.g.h"

namespace winrt::HV4D::implementation
{
	struct HV4DSERVICE : HV4DSERVICET<HV4DSERVICE>
	{
	public:
		HV4DSERVICE();


	};

}

namespace winrt::HV4D::factory_implementation
{
	struct HV4DSERVICE : HV4DSERVICET<HV4DSERVICE, implementation::HV4DSERVICE>
	{

	};

}
