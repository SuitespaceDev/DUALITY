#include "pch.h"
#include "TableTNode.xaml.h"
#if __has_include("TableTNode.g.cpp")
#include "TableTNode.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
{
    TableTNode::TableTNode()
    {
        InitializeComponent();

        return;

    }

    hstring TableTNode::LabelHVID() 
    { 
        
        return label_hvid; 
    
    }

    void TableTNode::LabelHVID(winrt::hstring const& e) 
    { 
        label_hvid = e; 
        
        return; 
    
    }

    hstring TableTNode::ValueHVID() 
    { 
        
        return value_hvid; 
    
    }

    void TableTNode::ValueHVID(winrt::hstring const& e) 
    { 
        value_hvid = e; 
        
        return; 
    
    }

    hstring TableTNode::LabelMMM() 
    { 
        
        return label_mmm; 
    
    }

    void TableTNode::LabelMMM(winrt::hstring const& e) 
    { 
        label_mmm = e; 
        
        return; 
    
    }

    hstring TableTNode::ValueMMM() 
    { 
        
        return value_mmm; 
    
    }

    void TableTNode::ValueMMM(winrt::hstring const& e) 
    { 
        value_mmm = e; 
        
        return; 
    
    }

    hstring TableTNode::LabelName() 
    { 
        
        return label_name; 
    
    }

    void TableTNode::LabelName(winrt::hstring const& e) 
    { 
        label_name = e; 
        
        return; 
    
    }

    hstring TableTNode::ValueName() 
    { 
        return value_name; 
    
    }

    void TableTNode::ValueName(winrt::hstring const& e) 
    { 
        value_name = e; 
        
        return; 
    
    }

    hstring TableTNode::LabelCreatedDate() 
    { 
        
        return label_created_date; 
    
    }

    void TableTNode::LabelCreatedDate(winrt::hstring const& e) 
    { 
        label_created_date = e; 
        
        return; 
    
    }

    hstring TableTNode::ValueCreatedDate() 
    { 
        
        return value_created_date; 
    
    }

    void TableTNode::ValueCreatedDate(winrt::hstring const& e) 
    { 
        value_created_date = e; 
        
        return; 
    
    }

    hstring TableTNode::LabelCreatedTime() 
    { 
        
        return label_created_time; 
    
    }

    void TableTNode::LabelCreatedTime(winrt::hstring const& e) 
    { 
        label_created_time = e; 
        
        return; 
    
    }

    hstring TableTNode::ValueCreatedTime() 
    { 
        
        return value_created_time; 
    
    }

    void TableTNode::ValueCreatedTime(winrt::hstring const& e) 
    { 
        value_created_time = e; 
        
        return; 
    
    }

    hstring TableTNode::LabelSavedDate() 
    { 
        
        return label_saved_date; 
    
    }

    void TableTNode::LabelSavedDate(winrt::hstring const& e) 
    { 
        label_saved_date = e; 
        
        return; 
    
    }

    hstring TableTNode::ValueSavedDate() 
    { 
        
        return value_saved_date; 
    
    }

    void TableTNode::ValueSavedDate(winrt::hstring const& e) 
    { 
        value_saved_date = e; 
        
        return; 
    
    }

    hstring TableTNode::LabelSavedTime() 
    { 
        
        return label_saved_time; 
    
    }

    void TableTNode::LabelSavedTime(winrt::hstring const& e) 
    { 
        label_saved_time = e; 
        
        return; 
    
    }

    hstring TableTNode::ValueSavedTime() 
    { 
        
        return value_saved_time; 
    
    }

    void TableTNode::ValueSavedTime(winrt::hstring const& e) 
    { 
        value_saved_time = e; 
        
        return; 
    
    }

    hstring TableTNode::LabelOpenedDate() 
    { 
        
        return label_opened_date; 
    
    }

    void TableTNode::LabelOpenedDate(winrt::hstring const& e) 
    { 
        label_opened_date = e; 
        
        return; 
    
    }

    hstring TableTNode::ValueOpenedDate() 
    { 
        
        return value_opened_date; 
    
    }

    void TableTNode::ValueOpenedDate(winrt::hstring const& e) 
    { 
        value_opened_date = e; 
        
        return; 
    
    }

    hstring TableTNode::LabelOpenedTime() 
    { 
        
        return label_opened_time; 
    
    }

    void TableTNode::LabelOpenedTime(winrt::hstring const& e) 
    { 
        label_opened_time = e; 
        
        return; 
    
    }

    hstring TableTNode::ValueOpenedTime() 
    { 
        
        return value_opened_time; 
    
    }

    void TableTNode::ValueOpenedTime(winrt::hstring const& e) 
    { 
        value_opened_time = e; 
        
        return; 
    
    }

}
