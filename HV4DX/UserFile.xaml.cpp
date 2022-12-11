#include "pch.h"
#include "UserFile.xaml.h"
#if __has_include("UserFile.g.cpp")
#include "UserFile.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserFile::UserFile()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring UserFile::Label()
    { 
        
        return label; 
    
    }

    void UserFile::Label(winrt::hstring const& e)
    { 
        label = e; 
    
        return;
    
    }

    winrt::hstring UserFile::Value()
    { 
        
        return value; 
    
    }

    void UserFile::Value(winrt::hstring const& e)
    { 
        value = e; 
    
        return;
    
    }

    winrt::hstring UserFile::Placeholder()
    { 
        
        return placeholder; 
    
    }

    void UserFile::Placeholder(winrt::hstring const& e)
    { 
        placeholder = e; 
    
        return;
    
    }

}
