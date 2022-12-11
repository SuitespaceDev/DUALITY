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
    
        return;
    
    }

    winrt::hstring UserBlock::Value() 
    { 
        
        return value; 
    
    }

    void UserBlock::Value(winrt::hstring const& e)
    { 
        
        value = e; 
    
        return;
    
    }

}
