#include "pch.h"
#include "TableProfile.xaml.h"
#if __has_include("TableProfile.g.cpp")
#include "TableProfile.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableProfile::TableProfile()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableProfile::LabelProfileHVID()
    {
        return label_profile_hvid;

    }

    winrt::hstring TableProfile::LabelProfileMMM()
    {
        return label_profile_mmm;

    }

    winrt::hstring TableProfile::LabelProfileMaxPath()
    {
        return label_profile_maxpath;

    }

    winrt::hstring TableProfile::LabelProfileCreated()
    {
        return label_profile_created;

    }

    winrt::hstring TableProfile::LabelProfileSaved()
    {
        return label_profile_saved;

    }

    winrt::hstring TableProfile::LabelProfileOpened()
    {
        return label_profile_opened;

    }

    event_token TableProfile::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void TableProfile::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
