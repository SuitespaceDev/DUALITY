#include "pch.h"
#include "RecentProject.xaml.h"
#if __has_include("RecentProject.g.cpp")
#include "RecentProject.g.cpp"
#endif

namespace winrt::Duality23::implementation
{
	RecentProject::RecentProject()
	{
		InitializeComponent();


		return;

	}

	void RecentProject::Loading(MUX::FrameworkElement const& sender, WF::IInspectable const& args)
	{



		return;

	}

	void RecentProject::Loaded(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		PopulateRecent();
		
		
		return;

	}

	void RecentProject::PopulateRecent()
	{



		return;

	}

	void RecentProject::RecentProject001(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		OpenRecentProject(0);

		return;

	}

	void RecentProject::RecentProject002(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		OpenRecentProject(1);

		return;

	}

	void RecentProject::RecentProject003(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		OpenRecentProject(2);

		return;

	}

	void RecentProject::RecentProject004(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		OpenRecentProject(3);

		return;

	}

	void RecentProject::RecentProject005(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		OpenRecentProject(4);

		return;

	}

	void RecentProject::RecentProject006(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		OpenRecentProject(5);

		return;

	}

	void RecentProject::OpenRecentProject(uint32_t i)
	{



		if (!Frame().Navigate(xaml_typename<Duality23::Operational>()))
		{
			HV4DThrowCouldNotNavigate();

		}

		return;

	}

	void RecentProject::OpenProject001(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		Frame().Navigate(xaml_typename<Duality23::OpenProject>());

		return;

	}

	void RecentProject::OpenProject002(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		Frame().Navigate(xaml_typename<Duality23::CloudProject>());

		return;

	}

	void RecentProject::OpenProject003(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		Frame().Navigate(xaml_typename<Duality23::TemplateProject>());

		return;

	}

	void RecentProject::OpenProject004(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		Frame().Navigate(xaml_typename<Duality23::BlankProject>());

		return;

	}

	void RecentProject::OpenProject005(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		Frame().Navigate(xaml_typename<Duality23::GitProject>());

		return;

	}

	void RecentProject::OpenProject006(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		MUX::Application().Exit();

		return;

	}

	void RecentProject::GoToLoaderSettings(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		bool ret = Frame().Navigate(winrt::xaml_typename<Duality23::BuildMetadata>());

		if (!ret) HV4DThrowCouldNotNavigate();

		return;

	}

	void RecentProject::HV4DThrowFailed()
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

	void RecentProject::HV4DThrowInvalidProject()
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

	void RecentProject::HV4DThrowCouldNotNavigate()
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
