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

    void UserFile::FilePicker(WF::IInspectable const&, MUX::RoutedEventArgs const&)
    {


        return;

    }

    event_token UserFile::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void UserFile::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
