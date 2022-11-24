#include "pch.h"
#include "DualityWindow.xaml.h"
#if __has_include("DualityWindow.g.cpp")
#include "DualityWindow.g.cpp"
#endif

namespace winrt::Duality23::implementation
{
    DualityWindow::DualityWindow()
    {
        InitializeComponent();

        return;

    }

    void DualityWindow::Window_Activated(WF::IInspectable const& sender, MUX::WindowActivatedEventArgs const& args)
    {
		BindToNativeWindow();

		BindToWinRTWindow();

    }

	void DualityWindow::BindToNativeWindow()
	{
		NativeWindow.attach(this->try_as<IWindowNative>().get());

		if (!NativeWindow) MUX::Application().Exit();

		winrt::check_hresult(NativeWindow->get_WindowHandle(&hWnd));

		if (!hWnd) MUX::Application().Exit();

		WindowID = MU::GetWindowIdFromWindow(hWnd);

		if (WindowID.Value == NULL) MUX::Application().Exit();

	}

	void DualityWindow::BindToWinRTWindow()
	{
		AppWindow = MUW::AppWindow::GetFromWindowId(WindowID);

		if (!AppWindow) MUX::Application().Exit();

		AppWindow.SetPresenter(MUW::AppWindowPresenterKind::FullScreen);

		AppFrame = RootFrame();

		bool ret = AppFrame.Navigate(xaml_typename<Duality23::RecentProject>());

		if (!ret) MUX::Application().Exit();

		this->Content(AppFrame);

	}

	void DualityWindow::WindowSizeChanged(WF::IInspectable const& sender, MUX::WindowSizeChangedEventArgs const& args)
	{




	}

}



