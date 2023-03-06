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

		PopulateProjectIndex();

		return;

	}

	void Landing::IndexProjects()
	{
		auto ret = ProjectIndex.HV4DIndexProjects();

		if (ret.HV4DReturnTypeID() != HV4D::HV4D_OPERATION_SUCCEEDED{}.HV4DReturnTypeID())
		{
			throw HV4D::HV4D_OPERATION_FAILED{};

		}

		return;

	}

	void Landing::PopulateProjectIndex()
	{
		uint32_t num{};
		
		HV4D::IHV4DRETURN ret = ProjectIndex.HV4DGetProjectIndexSize(num);

		if (ret.HV4DReturnTypeID() != HV4D::HV4D_OPERATION_SUCCEEDED{}.HV4DReturnTypeID())
		{
			throw HV4D::HV4D_OPERATION_FAILED{};

		}

		for (uint32_t i = 0; i < num; i++)
		{
			Duality137::IndexedProject** Project = new Duality137::IndexedProject*;

			ret = ProjectIndex.HV4DGetProjectIndex(i, Project);

			ListedProjects().Children().Append(**Project);

		}

		return;

	}

	void Landing::OpenIndexedProject(HV4DX::TableProjectIndex const& e)
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
