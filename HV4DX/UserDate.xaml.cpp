#include "pch.h"
#include "UserDate.xaml.h"
#if __has_include("UserDate.g.cpp")
#include "UserDate.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserDate::UserDate()
    {
        InitializeComponent();

		return;

    }

	winrt::hstring UserDate::Label()
	{

		return label;

	}

	winrt::hstring UserDate::Value()
	{

		return value;

	}

	void UserDate::Value(winrt::hstring const& e)
	{
		value = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

		return;

	}

	winrt::hstring UserDate::Placeholder()
	{

		return placeholder;

	}

	bool UserDate::ReadOnly()
	{

		return read_only;

	}

	void UserDate::ReadOnly(bool const& e)
	{
		read_only = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"ReadOnly" });

		return;

	}

	event_token UserDate::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserDate::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
