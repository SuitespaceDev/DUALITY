#include "pch.h"
#include "UserPassword.xaml.h"
#if __has_include("UserPassword.g.cpp")
#include "UserPassword.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserPassword::UserPassword()
    {
        InitializeComponent();

        return;

    }

	winrt::hstring UserPassword::Label()
	{

		return label;

	}

	void UserPassword::Label(winrt::hstring const& e)
	{
		label = e;

		return;

	}

	winrt::hstring UserPassword::Value()
	{

		return winrt::unbox_value<winrt::hstring>(GetValue(value_property));

	}

	void UserPassword::Value(winrt::hstring const& e)
	{
		SetValue(value_property, winrt::box_value(e));

		return;

	}

	MUX::DependencyProperty UserPassword::ValueProperty()
	{

		return value_property;

	}

	void UserPassword::OnValueChanged(MUX::DependencyObject const& obj, MUX::DependencyPropertyChangedEventArgs const& e)
	{
		if (HV4DX::UserPassword Control{ obj.try_as<HV4DX::UserPassword>() })
		{
			//HV4DX::implementation::UserPassword* ptr{ winrt::get_self<HV4DX::implementation::UserPassword>(Control) };

		}

		return;

	}

	winrt::hstring UserPassword::Placeholder()
	{

		return placeholder;

	}

	void UserPassword::Placeholder(winrt::hstring const& e)
	{
		placeholder = e;

		return;

	}

	bool UserPassword::ReadOnly()
	{

		return read_only;

	}

	void UserPassword::ReadOnly(bool const& e)
	{
		read_only = e;

		return;

	}

	event_token UserPassword::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserPassword::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

	MUX::DependencyProperty UserPassword::value_property =
		MUX::DependencyProperty::Register(
			L"Value",
			winrt::xaml_typename<winrt::hstring>(),
			winrt::xaml_typename<winrt::HV4DX::UserPassword>(),
			MUX::PropertyMetadata{ winrt::box_value(L""), MUX::PropertyChangedCallback{&UserPassword::OnValueChanged} });

}
