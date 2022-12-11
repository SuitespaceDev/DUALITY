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
        
        return value; 
    
    }

    void UserPassword::Value(winrt::hstring const& e)
    { 
        value = e; 
    
        return;

    }

}
