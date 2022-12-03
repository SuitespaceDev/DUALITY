#include "pch.h"
#include "UserVMTNode.xaml.h"
#if __has_include("UserVMTNode.g.cpp")
#include "UserVMTNode.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
{
    UserVMTNode::UserVMTNode()
    {
        InitializeComponent();

        return;

    }

    hstring UserVMTNode::LabelHVID() 
    { 
        
        return label_hvid; 
    
    }

    void UserVMTNode::LabelHVID(winrt::hstring const& e) 
    { 
        label_hvid = e; 
        
        return; 
    
    }

    hstring UserVMTNode::ValueHVID() 
    { 
        
        return value_hvid; 
    
    }

    void UserVMTNode::ValueHVID(winrt::hstring const& e) 
    { 
        value_hvid = e; 
        
        return; 
    
    }

    hstring UserVMTNode::LabelMMM() 
    { 
        
        return label_mmm; 
    
    }

    void UserVMTNode::LabelMMM(winrt::hstring const& e) 
    { 
        label_mmm = e; 
        
        return; 
    
    }

    hstring UserVMTNode::ValueMMM() 
    { 
        
        return value_mmm; 
    
    }

    void UserVMTNode::ValueMMM(winrt::hstring const& e) 
    { 
        value_mmm = e; 
        
        return; 
    
    }

    hstring UserVMTNode::LabelName() 
    { 
        
        return label_name; 
    
    }

    void UserVMTNode::LabelName(winrt::hstring const& e) 
    { 
        label_name = e; 
        
        return; 
    
    }

    hstring UserVMTNode::ValueName() 
    { 
        return value_name; 
    
    }

    void UserVMTNode::ValueName(winrt::hstring const& e) 
    { 
        value_name = e; 
        
        return; 
    
    }

    hstring UserVMTNode::LabelCreatedDate() 
    { 
        
        return label_created_date; 
    
    }

    void UserVMTNode::LabelCreatedDate(winrt::hstring const& e) 
    { 
        label_created_date = e; 
        
        return; 
    
    }

    hstring UserVMTNode::ValueCreatedDate() 
    { 
        
        return value_created_date; 
    
    }

    void UserVMTNode::ValueCreatedDate(winrt::hstring const& e) 
    { 
        value_created_date = e; 
        
        return; 
    
    }

    hstring UserVMTNode::LabelCreatedTime() 
    { 
        
        return label_created_time; 
    
    }

    void UserVMTNode::LabelCreatedTime(winrt::hstring const& e) 
    { 
        label_created_time = e; 
        
        return; 
    
    }

    hstring UserVMTNode::ValueCreatedTime() 
    { 
        
        return value_created_time; 
    
    }

    void UserVMTNode::ValueCreatedTime(winrt::hstring const& e) 
    { 
        value_created_time = e; 
        
        return; 
    
    }

    hstring UserVMTNode::LabelSavedDate() 
    { 
        
        return label_saved_date; 
    
    }

    void UserVMTNode::LabelSavedDate(winrt::hstring const& e) 
    { 
        label_saved_date = e; 
        
        return; 
    
    }

    hstring UserVMTNode::ValueSavedDate() 
    { 
        
        return value_saved_date; 
    
    }

    void UserVMTNode::ValueSavedDate(winrt::hstring const& e) 
    { 
        value_saved_date = e; 
        
        return; 
    
    }

    hstring UserVMTNode::LabelSavedTime() 
    { 
        
        return label_saved_time; 
    
    }

    void UserVMTNode::LabelSavedTime(winrt::hstring const& e) 
    { 
        label_saved_time = e; 
        
        return; 
    
    }

    hstring UserVMTNode::ValueSavedTime() 
    { 
        
        return value_saved_time; 
    
    }

    void UserVMTNode::ValueSavedTime(winrt::hstring const& e) 
    { 
        value_saved_time = e; 
        
        return; 
    
    }

    hstring UserVMTNode::LabelOpenedDate() 
    { 
        
        return label_opened_date; 
    
    }

    void UserVMTNode::LabelOpenedDate(winrt::hstring const& e) 
    { 
        label_opened_date = e; 
        
        return; 
    
    }

    hstring UserVMTNode::ValueOpenedDate() 
    { 
        
        return value_opened_date; 
    
    }

    void UserVMTNode::ValueOpenedDate(winrt::hstring const& e) 
    { 
        value_opened_date = e; 
        
        return; 
    
    }

    hstring UserVMTNode::LabelOpenedTime() 
    { 
        
        return label_opened_time; 
    
    }

    void UserVMTNode::LabelOpenedTime(winrt::hstring const& e) 
    { 
        label_opened_time = e; 
        
        return; 
    
    }

    hstring UserVMTNode::ValueOpenedTime() 
    { 
        
        return value_opened_time; 
    
    }

    void UserVMTNode::ValueOpenedTime(winrt::hstring const& e) 
    { 
        value_opened_time = e; 
        
        return; 
    
    }

}
