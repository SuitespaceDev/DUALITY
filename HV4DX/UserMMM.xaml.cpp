#include "pch.h"
#include "UserMMM.xaml.h"
#if __has_include("UserMMM.g.cpp")
#include "UserMMM.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserMMM::UserMMM()
    {
        InitializeComponent();

        return;

    }

	winrt::hstring UserMMM::Label()
	{

		return label;

	}

	void UserMMM::Label(winrt::hstring const& e)
	{
		label = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

		return;

	}

	winrt::hstring UserMMM::Value()
	{

		return value;

	}

	void UserMMM::Value(winrt::hstring const& e)
	{
		value = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

		return;

	}

	winrt::hstring UserMMM::Placeholder()
	{

		return placeholder;

	}

	bool UserMMM::ReadOnly()
	{

		return read_only;

	}

	void UserMMM::ReadOnly(bool const& e)
	{
		read_only = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"ReadOnly" });

		return;

	}

	event_token UserMMM::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserMMM::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
