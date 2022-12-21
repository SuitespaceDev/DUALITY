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

		return;

	}

	winrt::hstring UserNumeric::Value()
	{

		return winrt::unbox_value<winrt::hstring>(GetValue(value_property));

	}

	void UserNumeric::Value(winrt::hstring const& e)
	{
		SetValue(value_property, winrt::box_value(e));

		return;

	}

	MUX::DependencyProperty UserNumeric::ValueProperty()
	{

		return value_property;

	}

	void UserNumeric::OnValueChanged(MUX::DependencyObject const& obj, MUX::DependencyPropertyChangedEventArgs const& e)
	{
		if (HV4DX::UserNumeric Control{ obj.try_as<HV4DX::UserNumeric>() })
		{
			//HV4DX::implementation::UserNumeric* ptr{ winrt::get_self<HV4DX::implementation::UserNumeric>(Control) };

		}

		return;

	}

	winrt::hstring UserNumeric::Placeholder()
	{

		return placeholder;

	}

	void UserNumeric::Placeholder(winrt::hstring const& e)
	{
		placeholder = e;

		return;

	}

	bool UserNumeric::ReadOnly()
	{

		return read_only;

	}

	void UserNumeric::ReadOnly(bool const& e)
	{
		read_only = e;

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

	MUX::DependencyProperty UserNumeric::value_property =
		MUX::DependencyProperty::Register(
			L"Value",
			winrt::xaml_typename<winrt::hstring>(),
			winrt::xaml_typename<winrt::HV4DX::UserNumeric>(),
			MUX::PropertyMetadata{ winrt::box_value(L""), MUX::PropertyChangedCallback{&UserNumeric::OnValueChanged} });

}
