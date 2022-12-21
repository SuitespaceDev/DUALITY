#include "pch.h"
#include "UserDateTime.xaml.h"
#if __has_include("UserDateTime.g.cpp")
#include "UserDateTime.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserDateTime::UserDateTime()
    {
        InitializeComponent();

		return;

    }

	winrt::hstring UserDateTime::Label()
	{

		return label;

	}

	void UserDateTime::Label(winrt::hstring const& e)
	{
		label = e;

		return;

	}

	winrt::hstring UserDateTime::Value()
	{

		return winrt::unbox_value<winrt::hstring>(GetValue(value_property));

	}

	void UserDateTime::Value(winrt::hstring const& e)
	{
		SetValue(value_property, winrt::box_value(e));

		return;

	}

	MUX::DependencyProperty UserDateTime::ValueProperty()
	{

		return value_property;

	}

	void UserDateTime::OnValueChanged(MUX::DependencyObject const& obj, MUX::DependencyPropertyChangedEventArgs const& e)
	{
		if (HV4DX::UserDateTime Control{ obj.try_as<HV4DX::UserDateTime>() })
		{
			//HV4DX::implementation::UserDateTime* ptr{ winrt::get_self<HV4DX::implementation::UserDateTime>(Control) };

		}

		return;

	}

	winrt::hstring UserDateTime::Placeholder()
	{

		return placeholder;

	}

	void UserDateTime::Placeholder(winrt::hstring const& e)
	{
		placeholder = e;

		return;

	}

	bool UserDateTime::ReadOnly()
	{

		return read_only;

	}

	void UserDateTime::ReadOnly(bool const& e)
	{
		read_only = e;

		return;

	}

	event_token UserDateTime::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserDateTime::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

	MUX::DependencyProperty UserDateTime::value_property =
		MUX::DependencyProperty::Register(
			L"Value",
			winrt::xaml_typename<winrt::hstring>(),
			winrt::xaml_typename<winrt::HV4DX::UserDateTime>(),
			MUX::PropertyMetadata{ winrt::box_value(L""), MUX::PropertyChangedCallback{&UserDateTime::OnValueChanged} });

}
