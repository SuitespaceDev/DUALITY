#include "pch.h"
#include "TableKey.xaml.h"
#if __has_include("TableKey.g.cpp")
#include "TableKey.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableKey::TableKey()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableKey::ValueKey()
    {
        return value_key;

    }

    void TableKey::ValueKey(winrt::hstring const& e)
    {
        value_key = e;

        return;

    }

    winrt::hstring TableKey::LabelProfileHVID()
    {
        return label_profile_hvid;

    }

    winrt::hstring TableKey::LabelProfileMMM()
    {
        return label_profile_mmm;

    }

    winrt::hstring TableKey::LabelProfileMaxPath()
    {
        return label_profile_maxpath;

    }

    winrt::hstring TableKey::LabelProfileCreated()
    {
        return label_profile_created;

    }

    winrt::hstring TableKey::LabelProfileSaved()
    {
        return label_profile_saved;

    }

    winrt::hstring TableKey::LabelProfileOpened()
    {
        return label_profile_opened;

    }

    event_token TableKey::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void TableKey::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
