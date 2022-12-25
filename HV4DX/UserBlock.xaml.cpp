#include "pch.h"
#include "UserBlock.xaml.h"
#if __has_include("UserBlock.g.cpp")
#include "UserBlock.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserBlock::UserBlock()
	{
		InitializeComponent();

		return;

	}

    winrt::hstring UserBlock::Label() 
    { 
        
        return label; 
    
    }

    void UserBlock::Label(winrt::hstring const& e)
    {
        label = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

        return;

    }

    winrt::hstring UserBlock::Value() 
    { 
        
        return value; 
    
    }

    void UserBlock::Value(winrt::hstring const& e)
    {         
        value = e; 

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

        return;
    
    }

    event_token UserBlock::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void UserBlock::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
