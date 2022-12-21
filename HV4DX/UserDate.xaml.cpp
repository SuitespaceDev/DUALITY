#include "pch.h"
#include "UserDate.xaml.h"
#if __has_include("UserDate.g.cpp")
#include "UserDate.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserDate::UserDate()
    {
        InitializeComponent();

		return;

    }

	winrt::hstring UserDate::Label()
	{

		return label;

	}

	void UserDate::Label(winrt::hstring const& e)
	{
		label = e;

		return;

	}

	winrt::hstring UserDate::Value()
	{

		return winrt::unbox_value<winrt::hstring>(GetValue(value_property));

	}

	void UserDate::Value(winrt::hstring const& e)
	{
		SetValue(value_property, winrt::box_value(e));

		return;

	}

	MUX::DependencyProperty UserDate::ValueProperty()
	{

		return value_property;

	}

	void UserDate::OnValueChanged(MUX::DependencyObject const& obj, MUX::DependencyPropertyChangedEventArgs const& e)
	{
		if (HV4DX::UserDate Control{ obj.try_as<HV4DX::UserDate>() })
		{
			//HV4DX::implementation::UserDate* ptr{ winrt::get_self<HV4DX::implementation::UserDate>(Control) };

		}

		return;

	}

	winrt::hstring UserDate::Placeholder()
	{

		return placeholder;

	}

	void UserDate::Placeholder(winrt::hstring const& e)
	{
		placeholder = e;

		return;

	}

	bool UserDate::ReadOnly()
	{

		return read_only;

	}

	void UserDate::ReadOnly(bool const& e)
	{
		read_only = e;

		return;

	}

	event_token UserDate::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserDate::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

	MUX::DependencyProperty UserDate::value_property =
		MUX::DependencyProperty::Register(
			L"Value",
			winrt::xaml_typename<winrt::hstring>(),
			winrt::xaml_typename<winrt::HV4DX::UserDate>(),
			MUX::PropertyMetadata{ winrt::box_value(L""), MUX::PropertyChangedCallback{&UserDate::OnValueChanged} });

}
