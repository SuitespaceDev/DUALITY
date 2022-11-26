#pragma once

#include <winrt/Microsoft.UI.Windowing.h>

#include <winrt/Microsoft.UI.Interop.h>
#include <Microsoft.UI.Xaml.Window.h>

#include "Landing.xaml.h"

#include "RootUI.g.h"

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
	struct RootUI : RootUIT<RootUI>
	{
	public:
		RootUI();

	public:
		void WindowActivated(WF::IInspectable const& sender, MUX::WindowActivatedEventArgs const& args);

	private:
		void BindToNativeWindow();

		::HWND hWnd{ nullptr };

		MU::WindowId WindowID{ NULL };

		winrt::com_ptr<::IWindowNative> NativeWindow{ nullptr };

	private:
		void BindToWinRTWindow();

		MUW::AppWindow AppWindow{ NULL };

	private:
		void NavigateLandingPage();

		MUXC::Page CurrentPage{};

		MUXC::Frame AppFrame{ NULL };

	public:
		void WindowSizeChanged(WF::IInspectable const&, MUX::WindowSizeChangedEventArgs const&);
	};
}

namespace winrt::Duality137::factory_implementation
{
	struct RootUI : RootUIT<RootUI, implementation::RootUI>
	{
	};
}
