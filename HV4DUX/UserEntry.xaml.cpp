#include "pch.h"
#include "UserEntry.xaml.h"
#if __has_include("UserEntry.g.cpp")
#include "UserEntry.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
{
    UserEntry::UserEntry()
	{
		InitializeComponent();

		return;

	}

	winrt::hstring UserEntry::Label() 
	{ 
		
		return label; 
	
	}

	void UserEntry::Label(winrt::hstring const& e)
	{ 
		label = e; 

		return;

	}

	winrt::hstring UserEntry::Value() 
	{ 
		
		return winrt::unbox_value<winrt::hstring>(GetValue(value_property));
	
	}

	void UserEntry::Value(winrt::hstring const& e)
	{ 
		SetValue(value_property, winrt::box_value(e));

		return;

	}
	
	MUX::DependencyProperty UserEntry::ValueProperty()
	{ 
		
		return value_property;
	
	}

	void UserEntry::OnValueChanged(MUX::DependencyObject const& obj, MUX::DependencyPropertyChangedEventArgs const& e)
	{
		if (HV4DUX::UserEntry Control{ obj.try_as<HV4DUX::UserEntry>() })
		{
			//HV4DUX::implementation::UserEntry* ptr{ winrt::get_self<HV4DUX::implementation::UserEntry>(Control) };
		
		}
		
		return;

	}

	MUX::DependencyProperty UserEntry::value_property =
		MUX::DependencyProperty::Register(
			L"Value",
			winrt::xaml_typename<winrt::hstring>(),
			winrt::xaml_typename<winrt::HV4DUX::UserEntry>(),
			MUX::PropertyMetadata{ winrt::box_value(L""), MUX::PropertyChangedCallback{&UserEntry::OnValueChanged} });
	
	winrt::hstring UserEntry::Placeholder() 
	{ 
		
		return placeholder; 
	
	}

	void UserEntry::Placeholder(winrt::hstring const& e)
	{ 
		placeholder = e; 

		return;

	}

	event_token UserEntry::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserEntry::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
