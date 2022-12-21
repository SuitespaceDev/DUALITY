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

		return;

	}

	winrt::hstring UserMMM::Value()
	{

		return winrt::unbox_value<winrt::hstring>(GetValue(value_property));

	}

	void UserMMM::Value(winrt::hstring const& e)
	{
		SetValue(value_property, winrt::box_value(e));

		return;

	}

	MUX::DependencyProperty UserMMM::ValueProperty()
	{

		return value_property;

	}

	void UserMMM::OnValueChanged(MUX::DependencyObject const& obj, MUX::DependencyPropertyChangedEventArgs const& e)
	{
		if (HV4DX::UserMMM Control{ obj.try_as<HV4DX::UserMMM>() })
		{
			//HV4DX::implementation::UserMMM* ptr{ winrt::get_self<HV4DX::implementation::UserMMM>(Control) };

		}

		return;

	}

	winrt::hstring UserMMM::Placeholder()
	{

		return placeholder;

	}

	void UserMMM::Placeholder(winrt::hstring const& e)
	{
		placeholder = e;

		return;

	}

	bool UserMMM::ReadOnly()
	{

		return read_only;

	}

	void UserMMM::ReadOnly(bool const& e)
	{
		read_only = e;

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

	MUX::DependencyProperty UserMMM::value_property =
		MUX::DependencyProperty::Register(
			L"Value",
			winrt::xaml_typename<winrt::hstring>(),
			winrt::xaml_typename<winrt::HV4DX::UserMMM>(),
			MUX::PropertyMetadata{ winrt::box_value(L""), MUX::PropertyChangedCallback{&UserMMM::OnValueChanged} });

}
