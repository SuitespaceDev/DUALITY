#include "pch.h"
#include "TableIterator.xaml.h"
#if __has_include("TableIterator.g.cpp")
#include "TableIterator.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
{
    TableIterator::TableIterator()
    {
        InitializeComponent();

        return;

    }

    hstring TableIterator::LabelHVID()
    { 
        
        return label_hvid; 
    
    }

    void TableIterator::LabelHVID(winrt::hstring const& e)
    { 
        label_hvid = e; 
    
        return;

    }

    hstring TableIterator::ValueHVID()
    { 
        
        return value_hvid; 
    
    }

    void TableIterator::ValueHVID(winrt::hstring const& e)
    { 
        value_hvid = e; 

        return;

    }

    hstring TableIterator::LabelType()
    { 
        
        return label_type; 
    
    }

    void TableIterator::LabelType(winrt::hstring const& e)
    { 
        label_type = e; 

        return;

    }

    hstring TableIterator::ValueType()
    { 
        
        return value_type; 
    
    }

    void TableIterator::ValueType(winrt::hstring const& e)
    { 
        value_type = e; 

        return;

    }

}
