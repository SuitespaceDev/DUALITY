#include "pch.h"
#include "UserTime.xaml.h"
#if __has_include("UserTime.g.cpp")
#include "UserTime.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserTime::UserTime()
    {
        InitializeComponent();
    }

	winrt::hstring UserTime::Label()
	{

		return label;

	}

	void UserTime::Label(winrt::hstring const& e)
	{
		label = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

		return;

	}

	winrt::hstring UserTime::Value()
	{

		return value;

	}

	void UserTime::Value(winrt::hstring const& e)
	{
		value = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

		return;

	}

	winrt::hstring UserTime::Placeholder()
	{

		return placeholder;

	}

	bool UserTime::ReadOnly()
	{

		return read_only;

	}

	void UserTime::ReadOnly(bool const& e)
	{
		read_only = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"ReadOnly" });

		return;

	}

	event_token UserTime::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserTime::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
