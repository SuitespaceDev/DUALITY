#include "pch.h"
#include "UserNumeric.xaml.h"
#if __has_include("UserNumeric.g.cpp")
#include "UserNumeric.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserNumeric::UserNumeric()
    {
        InitializeComponent();

		return;

    }

	winrt::hstring UserNumeric::Label()
	{

		return label;

	}

	void UserNumeric::Label(winrt::hstring const& e)
	{
		label = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

		return;

	}

	winrt::hstring UserNumeric::Value()
	{

		return value;

	}

	void UserNumeric::Value(winrt::hstring const& e)
	{
		value = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

		return;

	}

	winrt::hstring UserNumeric::Placeholder()
	{

		return placeholder;

	}

	bool UserNumeric::ReadOnly()
	{

		return read_only;

	}

	void UserNumeric::ReadOnly(bool const& e)
	{
		read_only = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"ReadOnly" });

		return;

	}

	event_token UserNumeric::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserNumeric::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
