#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\HV4DABI\\HV4DABI.lib")

#include <winrt/Microsoft.UI.Windowing.h>

#include <winrt/Microsoft.UI.Interop.h>
#include <Microsoft.UI.Xaml.Window.h>

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DABI/CHV4DHVID.h"
#include "../HV4DABI/CHV4DMAXPATH.h"
#include "../HV4DABI/CHV4DKEY.h"

#include "DualityWindow.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MU		= winrt::Microsoft::UI;
namespace MUW		= winrt::Microsoft::UI::Windowing;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXI		= winrt::Microsoft::UI::Xaml::Interop;
namespace MUXN      = winrt::Microsoft::UI::Xaml::Navigation;
namespace HV4D      = winrt::HV4D;
namespace HV4DABI   = winrt::HV4DABI;

using RETURN = HV4D::HV4DRETURN;

namespace winrt::Duality23::implementation
{
	struct DualityWindow : DualityWindowT<DualityWindow>
	{
	public:
		DualityWindow();

	public:
		void Window_Activated(WF::IInspectable const& sender, MUX::WindowActivatedEventArgs const& args);

	private:
		void BindToNativeWindow();

		::HWND hWnd{ nullptr };

		MU::WindowId WindowID{ NULL };

		winrt::com_ptr<::IWindowNative> NativeWindow{ nullptr };

	private:
		void BindToWinRTWindow();

		MUW::AppWindow AppWindow{ NULL };

		MUXC::Frame AppFrame{ NULL };

	public:
		void WindowSizeChanged(WF::IInspectable const& sender, MUX::WindowSizeChangedEventArgs const& args);
	};
}

namespace winrt::Duality23::factory_implementation
{
	struct DualityWindow : DualityWindowT<DualityWindow, implementation::DualityWindow>
	{
	};
}
