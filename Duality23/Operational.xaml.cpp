#include "pch.h"
#include "Operational.xaml.h"
#if __has_include("Operational.g.cpp")
#include "Operational.g.cpp"
#endif

namespace winrt::Duality23::implementation
{
	Operational::Operational()
	{
		InitializeComponent();

		return;

	}

	void Operational::Loading(MUX::FrameworkElement const& sender, WF::IInspectable const& args)
	{

		return;

	}

	void Operational::Loaded(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		raster_scale = (float)HV4DPortal().XamlRoot().RasterizationScale();

		width = HV4DPortal().XamlRoot().Size().Width;

		height = HV4DPortal().XamlRoot().Size().Height;

		HV4DELVC().Translation({ float(width - 655), 26.0f, 1.0f });

		OperationalMenu().Translation({ float(width - 420), 80.0f, 1.0f });

		return;

	}

	void Operational::HV4DTerminate()
	{
		HWND hWnd = GetActiveWindow();

		WUPOP::MessageDialog RuntimeFailure{ L"Error." };

		WUPOP::UICommand ReturnToCoreUI{ L"CoreUI", {this, &Operational::HV4DNavCoreUI} };

		RuntimeFailure.Commands().Append(ReturnToCoreUI);

		RuntimeFailure.DefaultCommandIndex(0);

		auto bound001{ RuntimeFailure.as<::IInitializeWithWindow>() };

		bound001->Initialize(hWnd);

		RuntimeFailure.ShowAsync();

		WUPOP::MessageDialog Terminate{ L"TERMINATE" };

		WUPOP::UICommand Kill{ L"KILL", [](WUPOP::IUICommand const& command) { MUX::Application().Exit(); } };

		Terminate.Commands().Append(Kill);

		Terminate.DefaultCommandIndex(0);

		auto bound002{ Terminate.as<::IInitializeWithWindow>() };

		bound002->Initialize(hWnd);

		Terminate.ShowAsync();

	}

	void Operational::HV4DNavCoreUI(WUPOP::IUICommand const& command)
	{
		if (!Frame().Navigate(xaml_typename<Duality23::RecentProject>()))
		{
			return;

		}

	}

}