#pragma once

#include "Machine.g.h"

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
	struct Machine : MachineT<Machine>
	{
	public:
		Machine();


	};

}

namespace winrt::Duality137::factory_implementation
{
	struct Machine : MachineT<Machine, implementation::Machine>
	{

	};

}
