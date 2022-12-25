#include "pch.h"
#include "UserIPv4.xaml.h"
#if __has_include("UserIPv4.g.cpp")
#include "UserIPv4.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserIPv4::UserIPv4()
    {
        InitializeComponent();

        return;

    }

	winrt::hstring UserIPv4::Label()
	{

		return label;

	}

	void UserIPv4::Label(winrt::hstring const& e)
	{
		label = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

		return;

	}

	winrt::hstring UserIPv4::Value()
	{

		return value;

	}

	void UserIPv4::Value(winrt::hstring const& e)
	{
		value = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

		return;

	}

	winrt::hstring UserIPv4::Placeholder()
	{

		return placeholder;

	}

	bool UserIPv4::ReadOnly()
	{

		return read_only;

	}

	void UserIPv4::ReadOnly(bool const& e)
	{
		read_only = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"ReadOnly" });

		return;

	}

	event_token UserIPv4::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserIPv4::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
