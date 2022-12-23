#include "pch.h"
#include "UserPassword.xaml.h"
#if __has_include("UserPassword.g.cpp")
#include "UserPassword.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserPassword::UserPassword()
    {
        InitializeComponent();

        return;

    }

	winrt::hstring UserPassword::Label()
	{

		return label;

	}

	winrt::hstring UserPassword::Value()
	{

		return value;

	}

	void UserPassword::Value(winrt::hstring const& e)
	{
		value = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

		return;

	}

	void UserPassword::ViewPassword(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{


		return;

	}

	winrt::hstring UserPassword::Placeholder()
	{

		return placeholder;

	}

	bool UserPassword::ReadOnly()
	{

		return read_only;

	}

	void UserPassword::ReadOnly(bool const& e)
	{
		read_only = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"ReadOnly" });

		return;

	}

	event_token UserPassword::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserPassword::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
