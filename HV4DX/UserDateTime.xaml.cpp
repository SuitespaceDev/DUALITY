#include "pch.h"
#include "UserDateTime.xaml.h"
#if __has_include("UserDateTime.g.cpp")
#include "UserDateTime.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserDateTime::UserDateTime()
    {
        InitializeComponent();

		return;

    }

	winrt::hstring UserDateTime::Label()
	{

		return label;

	}

	void UserDateTime::Label(winrt::hstring const& e)
	{
		label = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

		return;

	}

	winrt::hstring UserDateTime::Value()
	{

		return value;

	}

	void UserDateTime::Value(winrt::hstring const& e)
	{
		value = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

		return;

	}

	event_token UserDateTime::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserDateTime::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
