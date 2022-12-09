#include "pch.h"
#include "UserIPv4.xaml.h"
#if __has_include("UserIPv4.g.cpp")
#include "UserIPv4.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
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

		return;

	}

	winrt::hstring UserIPv4::Value()
	{

		return winrt::unbox_value<winrt::hstring>(GetValue(value_property));

	}

	void UserIPv4::Value(winrt::hstring const& e)
	{
		SetValue(value_property, winrt::box_value(e));

		return;

	}

	MUX::DependencyProperty UserIPv4::ValueProperty()
	{

		return value_property;

	}

	void UserIPv4::OnValueChanged(MUX::DependencyObject const& obj, MUX::DependencyPropertyChangedEventArgs const& e)
	{
		if (HV4DUX::UserIPv4 Control{ obj.try_as<HV4DUX::UserIPv4>() })
		{
			//HV4DUX::implementation::UserIPv4* ptr{ winrt::get_self<HV4DUX::implementation::UserIPv4>(Control) };

		}

		return;

	}

	MUX::DependencyProperty UserIPv4::value_property =
		MUX::DependencyProperty::Register(
			L"Value",
			winrt::xaml_typename<winrt::hstring>(),
			winrt::xaml_typename<winrt::HV4DUX::UserIPv4>(),
			MUX::PropertyMetadata{ winrt::box_value(L""), MUX::PropertyChangedCallback{&UserIPv4::OnValueChanged} });

	winrt::hstring UserIPv4::Placeholder()
	{

		return placeholder;

	}

	void UserIPv4::Placeholder(winrt::hstring const& e)
	{
		placeholder = e;

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
