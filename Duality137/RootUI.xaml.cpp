#include "pch.h"
#include "RootUI.xaml.h"
#if __has_include("RootUI.g.cpp")
#include "RootUI.g.cpp"
#endif

namespace winrt::Duality137::implementation
{
    RootUI::RootUI()
    {
        InitializeComponent();

        return;

    }

    void RootUI::WindowActivated(WF::IInspectable const& sender, MUX::WindowActivatedEventArgs const& args)
    {
		BindToNativeWindow();

		BindToWinRTWindow();

		NavigateLandingPage();

    }

	void RootUI::BindToNativeWindow()
	{
		NativeWindow.attach(this->try_as<IWindowNative>().get());

		if (!NativeWindow) MUX::Application().Exit();

		winrt::check_hresult(NativeWindow->get_WindowHandle(&hWnd));

		if (!hWnd) MUX::Application().Exit();

		WindowID = MU::GetWindowIdFromWindow(hWnd);

		if (WindowID.Value == NULL) MUX::Application().Exit();

	}

	void RootUI::BindToWinRTWindow()
	{
		AppWindow = MUW::AppWindow::GetFromWindowId(WindowID);

		if (!AppWindow) MUX::Application().Exit();

		AppWindow.SetPresenter(MUW::AppWindowPresenterKind::FullScreen);

	}

	void RootUI::NavigateLandingPage()
	{
		AppFrame = RootFrame();

		bool ret = AppFrame.Navigate(winrt::xaml_typename<winrt::Duality137::Landing>());

		if (!ret) MUX::Application().Exit();

		this->Content(AppFrame);
	
	}

	void RootUI::WindowSizeChanged(WF::IInspectable const& sender, MUX::WindowSizeChangedEventArgs const& args)
	{




	}

}



