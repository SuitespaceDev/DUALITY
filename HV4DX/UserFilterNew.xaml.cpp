#include "pch.h"
#include "UserFilterNew.xaml.h"
#if __has_include("UserFilterNew.g.cpp")
#include "UserFilterNew.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserFilterNew::UserFilterNew()
    {
        InitializeComponent();

        return;

    }

	winrt::hstring UserFilterNew::Label() 
	{ 
		
		return label; 
	
	}

	void UserFilterNew::Label(winrt::hstring const& e)
	{ 
		label = e; 
	
		return;
	
	}

	winrt::hstring UserFilterNew::Value() 
	{ 
		
		return value; 
	
	}

	void UserFilterNew::Value(winrt::hstring const& e)
	{ 
		value = e; 
	
		return;
	
	}

	winrt::event_token UserFilterNew::FilterChanged(WF::EventHandler<winrt::hstring> const& handler)
	{
		return filter_changed_event.add(handler);

	}

	void UserFilterNew::FilterChanged(winrt::event_token const& token) noexcept
	{
		filter_changed_event.remove(token);

		return;

	}

	void UserFilterNew::UserFilterNewUp(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		filter_changed_event(*this, L"");

		return;

	}

	void UserFilterNew::UserFilterNewDown(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		filter_changed_event(*this, L"");

		return;

	}

}
