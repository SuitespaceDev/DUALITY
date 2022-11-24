#include "pch.h"
#include "UserFilterNew.xaml.h"
#if __has_include("UserFilterNew.g.cpp")
#include "UserFilterNew.g.cpp"
#endif

using namespace winrt;
using namespace winrt::Microsoft::UI::Xaml;

namespace winrt::Duality23::implementation
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

	void UserFilterNew::Label(winrt::hstring e) 
	{ 
		label = e; 
	
		return;
	
	}

	winrt::hstring UserFilterNew::Value() 
	{ 
		
		return value; 
	
	}

	void UserFilterNew::Value(winrt::hstring e) 
	{ 
		value = e; 
	
		return;
	
	}

	winrt::event_token UserFilterNew::FilterChanged(Windows::Foundation::EventHandler<hstring> const& handler)
	{
		return filter_changed_event.add(handler);

	}

	void UserFilterNew::FilterChanged(winrt::event_token const& token) noexcept
	{
		filter_changed_event.remove(token);

		return;

	}

	void UserFilterNew::UserFilterNewUp(Windows::Foundation::IInspectable const& sender, RoutedEventArgs const& e)
	{
		filter_changed_event(*this, L"");

		return;

	}

	void UserFilterNew::UserFilterNewDown(Windows::Foundation::IInspectable const& sender, RoutedEventArgs const& e)
	{
		filter_changed_event(*this, L"");

		return;

	}

}
