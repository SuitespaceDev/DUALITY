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

	void UserIPv6::Label(winrt::hstring const& e)
	{
		label = e;

		return;

	}

	winrt::hstring UserIPv6::Value()
	{

		return winrt::unbox_value<winrt::hstring>(GetValue(value_property));

	}

	void UserIPv6::Value(winrt::hstring const& e)
	{
		SetValue(value_property, winrt::box_value(e));

		return;

	}

	MUX::DependencyProperty UserIPv6::ValueProperty()
	{

		return value_property;

	}

	void UserIPv6::OnValueChanged(MUX::DependencyObject const& obj, MUX::DependencyPropertyChangedEventArgs const& e)
	{
		if (HV4DX::UserIPv6 Control{ obj.try_as<HV4DX::UserIPv6>() })
		{
			//HV4DX::implementation::UserIPv6* ptr{ winrt::get_self<HV4DX::implementation::UserIPv6>(Control) };

		}

		return;

	}

	MUX::DependencyProperty UserIPv6::value_property =
		MUX::DependencyProperty::Register(
			L"Value",
			winrt::xaml_typename<winrt::hstring>(),
			winrt::xaml_typename<winrt::HV4DX::UserIPv6>(),
			MUX::PropertyMetadata{ winrt::box_value(L""), MUX::PropertyChangedCallback{&UserIPv6::OnValueChanged} });

	winrt::hstring UserIPv6::Placeholder()
	{

		return placeholder;

	}

	void UserIPv6::Placeholder(winrt::hstring const& e)
	{
		placeholder = e;

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
