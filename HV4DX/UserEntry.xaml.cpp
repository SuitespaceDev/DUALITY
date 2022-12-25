#include "pch.h"
#include "UserEntry.xaml.h"
#if __has_include("UserEntry.g.cpp")
#include "UserEntry.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserEntry::UserEntry()
	{
		InitializeComponent();

		return;

	}

	winrt::hstring UserEntry::Label()
	{

		return label;

	}

	void UserEntry::Label(winrt::hstring const& e)
	{
		label = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

		return;

	}

	winrt::hstring UserEntry::Value()
	{

		return value;

	}

	void UserEntry::Value(winrt::hstring const& e)
	{
		value = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

		return;

	}

	winrt::hstring UserEntry::Placeholder()
	{

		return placeholder;

	}

	bool UserEntry::ReadOnly()
	{

		return read_only;

	}

	void UserEntry::ReadOnly(bool const& e)
	{
		read_only = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"ReadOnly" });

		return;

	}

	event_token UserEntry::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserEntry::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
