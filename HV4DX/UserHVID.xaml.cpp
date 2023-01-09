#include "pch.h"
#include "UserHVID.xaml.h"
#if __has_include("UserHVID.g.cpp")
#include "UserHVID.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserHVID::UserHVID()
    {
        InitializeComponent();

		return;

	}

	winrt::hstring UserHVID::Label()
	{

		return label;

	}

	void UserHVID::Label(winrt::hstring const& e)
	{
		label = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

		return;

	}

	winrt::hstring UserHVID::Value()
	{

		return value;

	}

	void UserHVID::Value(winrt::hstring const& e)
	{
		value = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

		return;

	}

	winrt::hstring UserHVID::Placeholder()
	{

		return placeholder;

	}

	bool UserHVID::ReadOnly()
	{

		return read_only;

	}

	void UserHVID::ReadOnly(bool const& e)
	{
		read_only = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"ReadOnly" });

		return;

	}

	event_token UserHVID::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserHVID::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
