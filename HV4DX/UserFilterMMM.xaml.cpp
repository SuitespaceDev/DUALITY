#include "pch.h"
#include "UserFilterMMM.xaml.h"
#if __has_include("UserFilterMMM.g.cpp")
#include "UserFilterMMM.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserFilterMMM::UserFilterMMM()
    {
        InitializeComponent();
    }

	winrt::hstring UserFilterMMM::Label()
	{
		return label;

	}

	void UserFilterMMM::Label(winrt::hstring const& e)
	{
		label = e;

		return;

	}

	winrt::hstring UserFilterMMM::ValueMIL()
	{
		return value_mil;

	}

	void UserFilterMMM::ValueMIL(winrt::hstring const& e)
	{
		value_mil = e;

		return;

	}

	void UserFilterMMM::IncreaseMilestone(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	void UserFilterMMM::DecreaseMilestone(Windows::Foundation::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	winrt::hstring UserFilterMMM::ValueMAJ()
	{
		return value_maj;

	}

	void UserFilterMMM::ValueMAJ(winrt::hstring const& e)
	{
		value_maj = e;

		return;

	}

	void UserFilterMMM::IncreaseMajor(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	void UserFilterMMM::DecreaseMajor(Windows::Foundation::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	winrt::hstring UserFilterMMM::ValueMIN()
	{
		return value_min;

	}

	void UserFilterMMM::ValueMIN(winrt::hstring const& e)
	{
		value_min = e;

		return;

	}

	void UserFilterMMM::IncreaseMinor(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	void UserFilterMMM::DecreaseMinor(Windows::Foundation::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

}
