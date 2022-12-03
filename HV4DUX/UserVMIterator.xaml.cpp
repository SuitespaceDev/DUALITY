#include "pch.h"
#include "UserVMIterator.xaml.h"
#if __has_include("UserVMIterator.g.cpp")
#include "UserVMIterator.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
{
    UserVMIterator::UserVMIterator()
    {
        InitializeComponent();

        return;

    }

    hstring UserVMIterator::LabelHVID()
    { 
        
        return label_hvid; 
    
    }

    void UserVMIterator::LabelHVID(winrt::hstring const& e)
    { 
        label_hvid = e; 
    
        return;

    }

    hstring UserVMIterator::ValueHVID()
    { 
        
        return value_hvid; 
    
    }

    void UserVMIterator::ValueHVID(winrt::hstring const& e)
    { 
        value_hvid = e; 

        return;

    }

    hstring UserVMIterator::LabelType()
    { 
        
        return label_type; 
    
    }

    void UserVMIterator::LabelType(winrt::hstring const& e)
    { 
        label_type = e; 

        return;

    }

    hstring UserVMIterator::ValueType()
    { 
        
        return value_type; 
    
    }

    void UserVMIterator::ValueType(winrt::hstring const& e)
    { 
        value_type = e; 

        return;

    }

}
