#include "pch.h"
#include "UserIPv6.xaml.h"
#if __has_include("UserIPv6.g.cpp")
#include "UserIPv6.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
	UserIPv6::UserIPv6()
	{
		InitializeComponent();

		return;

	}

	winrt::hstring UserIPv6::Label()
	{

		return label;

	}

	winrt::hstring UserIPv6::Value()
	{

		return value;

	}

	void UserIPv6::Value(winrt::hstring const& e)
	{
		value = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

		return;

	}

	winrt::hstring UserIPv6::Placeholder()
	{

		return placeholder;

	}

	bool UserIPv6::ReadOnly()
	{

		return read_only;

	}

	void UserIPv6::ReadOnly(bool const& e)
	{
		read_only = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"ReadOnly" });

		return;

	}

	event_token UserIPv6::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserIPv6::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
