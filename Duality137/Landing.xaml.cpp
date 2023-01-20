#include "pch.h"
#include "Landing.xaml.h"
#if __has_include("Landing.g.cpp")
#include "Landing.g.cpp"
#endif

namespace winrt::Duality137::implementation
{
	Landing::Landing()
	{
		InitializeComponent();


		return;

	}

	void Landing::Loading(MUX::FrameworkElement const& sender, WF::IInspectable const& args)
	{



		return;

	}

	void Landing::Loaded(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		IndexProjects();

		return;

	}

	void Landing::IndexProjects()
	{
		Projects.HV4DConnect();


		return;

	}

	void Landing::Landing001(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		OpenLanding(0);

		return;

	}

	void Landing::Landing002(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		OpenLanding(1);

		return;

	}

	void Landing::Landing003(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		OpenLanding(2);

		return;

	}

	void Landing::Landing004(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		OpenLanding(3);

		return;

	}

	void Landing::Landing005(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		OpenLanding(4);

		return;

	}

	void Landing::Landing006(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		OpenLanding(5);

		return;

	}

	void Landing::OpenLanding(uint32_t i)
	{



		if (!Frame().Navigate(winrt::xaml_typename<winrt::Duality137::Operational>()))
		{
			HV4DThrowCouldNotNavigate();

		}

		return;

	}

	void Landing::OpenProject001(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		Frame().Navigate(xaml_typename<Duality137::OpenProject>());

		return;

	}

	void Landing::OpenProject002(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		Frame().Navigate(xaml_typename<Duality137::CloudProject>());

		return;

	}

	void Landing::OpenProject003(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		Frame().Navigate(xaml_typename<Duality137::TemplateProject>());

		return;

	}

	void Landing::OpenProject004(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		Frame().Navigate(xaml_typename<Duality137::BlankProject>());

		return;

	}

	void Landing::OpenProject005(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		Frame().Navigate(xaml_typename<Duality137::GitProject>());

		return;

	}

	void Landing::OpenProject006(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		MUX::Application().Exit();

		return;

	}

	void Landing::GoToLoaderSettings(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		bool ret = Frame().Navigate(winrt::xaml_typename<winrt::Duality137::Machine>());

		if (!ret) HV4DThrowCouldNotNavigate();

		return;

	}

	void Landing::HV4DThrowFailed()
	{
		WUPOP::MessageDialog Msg{ L"Error." };

		WUPOP::UICommand Failed{ L"Fail", [](WUPOP::IUICommand const& command) { return; } };

		Msg.Commands().Append(Failed);

		Msg.DefaultCommandIndex(0);

		auto bound{ Msg.as<::IInitializeWithWindow>() };

		HWND hWnd = GetActiveWindow();

		bound->Initialize(hWnd);

		Msg.ShowAsync();

		return;

	}

	void Landing::HV4DThrowInvalidProject()
	{
		WUPOP::MessageDialog Msg{ L"Error." };

		WUPOP::UICommand debProject{ L"Debug Project", [](WUPOP::IUICommand const& command)
			{


				return;

			}

		};

		Msg.Commands().Append(debProject);

		Msg.DefaultCommandIndex(0);

		auto bound{ Msg.as<::IInitializeWithWindow>() };

		HWND hWnd = GetActiveWindow();

		bound->Initialize(hWnd);

		Msg.ShowAsync();

		return;

	}

	void Landing::HV4DThrowCouldNotNavigate()
	{
		WUPOP::MessageDialog Msg{ L"Error." };

		WUPOP::UICommand CoreUI{ L"Pass", [](WUPOP::IUICommand const& command) { return; } };

		Msg.Commands().Append(CoreUI);

		Msg.DefaultCommandIndex(0);

		auto bound{ Msg.as<::IInitializeWithWindow>() };

		HWND hWnd = GetActiveWindow();

		bound->Initialize(hWnd);

		Msg.ShowAsync();

		return;

	}

}
