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

		return;

	}

	winrt::hstring UserTime::Value()
	{

		return winrt::unbox_value<winrt::hstring>(GetValue(value_property));

	}

	void UserTime::Value(winrt::hstring const& e)
	{
		SetValue(value_property, winrt::box_value(e));

		return;

	}

	MUX::DependencyProperty UserTime::ValueProperty()
	{

		return value_property;

	}

	void UserTime::OnValueChanged(MUX::DependencyObject const& obj, MUX::DependencyPropertyChangedEventArgs const& e)
	{
		if (HV4DX::UserTime Control{ obj.try_as<HV4DX::UserTime>() })
		{
			//HV4DX::implementation::UserTime* ptr{ winrt::get_self<HV4DX::implementation::UserTime>(Control) };

		}

		return;

	}

	winrt::hstring UserTime::Placeholder()
	{

		return placeholder;

	}

	void UserTime::Placeholder(winrt::hstring const& e)
	{
		placeholder = e;

		return;

	}

	bool UserTime::ReadOnly()
	{

		return read_only;

	}

	void UserTime::ReadOnly(bool const& e)
	{
		read_only = e;

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

	MUX::DependencyProperty UserTime::value_property =
		MUX::DependencyProperty::Register(
			L"Value",
			winrt::xaml_typename<winrt::hstring>(),
			winrt::xaml_typename<winrt::HV4DX::UserTime>(),
			MUX::PropertyMetadata{ winrt::box_value(L""), MUX::PropertyChangedCallback{&UserTime::OnValueChanged} });

}
