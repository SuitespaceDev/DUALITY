#pragma once

#include "Landing.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MU		= winrt::Microsoft::UI;
namespace MUW		= winrt::Microsoft::UI::Windowing;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXI		= winrt::Microsoft::UI::Xaml::Interop;
namespace MUXN      = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::Duality137::implementation
{
	struct Landing : LandingT<Landing>
	{
	public:
		Landing();


	};

}

namespace winrt::Duality137::factory_implementation
{
	struct Landing : LandingT<Landing, implementation::Landing>
	{

	};

}
