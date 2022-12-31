#include "pch.h"
#include "UserFilterNewMMM.xaml.h"
#if __has_include("UserFilterNewMMM.g.cpp")
#include "UserFilterNewMMM.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserFilterNewMMM::UserFilterNewMMM()
    {
        InitializeComponent();
    }

	winrt::hstring UserFilterNewMMM::Label()
	{
		return label;

	}

	void UserFilterNewMMM::Label(winrt::hstring const& e)
	{
		label = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

		return;

	}

	winrt::hstring UserFilterNewMMM::ValueMIL()
	{
		return value_mil;

	}

	void UserFilterNewMMM::IncreaseMilestone(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	void UserFilterNewMMM::DecreaseMilestone(Windows::Foundation::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	winrt::hstring UserFilterNewMMM::ValueMAJ()
	{
		return value_maj;

	}

	void UserFilterNewMMM::IncreaseMajor(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	void UserFilterNewMMM::DecreaseMajor(Windows::Foundation::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	winrt::hstring UserFilterNewMMM::ValueMIN()
	{
		return value_min;

	}

	void UserFilterNewMMM::IncreaseMinor(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	void UserFilterNewMMM::DecreaseMinor(Windows::Foundation::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	void UserFilterNewMMM::NewMMM(Windows::Foundation::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		return;

	}

	event_token UserFilterNewMMM::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserFilterNewMMM::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
