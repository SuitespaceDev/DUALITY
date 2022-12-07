#include "pch.h"
#include "UserMMM.xaml.h"
#if __has_include("UserMMM.g.cpp")
#include "UserMMM.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
{
    UserMMM::UserMMM()
    {
        InitializeComponent();
    }

	winrt::hstring UserMMM::Label()
	{
		return label;

	}

	void UserMMM::Label(winrt::hstring const& e)
	{
		label = e;

		return;

	}

	winrt::hstring UserMMM::ValueMIL()
	{
		return value_mil;

	}

	void UserMMM::ValueMIL(winrt::hstring const& e)
	{
		value_mil = e;

		return;

	}

	void UserMMM::IncreaseMilestone(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	void UserMMM::DecreaseMilestone(Windows::Foundation::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	winrt::hstring UserMMM::ValueMAJ()
	{
		return value_maj;

	}

	void UserMMM::ValueMAJ(winrt::hstring const& e)
	{
		value_maj = e;

		return;

	}

	void UserMMM::IncreaseMajor(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	void UserMMM::DecreaseMajor(Windows::Foundation::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	winrt::hstring UserMMM::ValueMIN()
	{
		return value_min;

	}

	void UserMMM::ValueMIN(winrt::hstring const& e)
	{
		value_min = e;

		return;

	}

	void UserMMM::IncreaseMinor(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	void UserMMM::DecreaseMinor(Windows::Foundation::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

}
