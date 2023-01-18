#include "pch.h"
#include "UserFilterHVID.xaml.h"
#if __has_include("UserFilterHVID.g.cpp")
#include "UserFilterHVID.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserFilterHVID::UserFilterHVID()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring UserFilterHVID::Label()
    {

        return label;

    }

    void UserFilterHVID::Label(winrt::hstring const& e)
    {
        label = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

        return;

    }

    winrt::hstring UserFilterHVID::Value()
    {

        return value;

    }

    void UserFilterHVID::Value(winrt::hstring const& e)
    {
        value = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

        return;

    }

    void UserFilterHVID::IncrementIndex(WF::IInspectable const&, MUX::RoutedEventArgs const&)
    {
        if (index < (item_list.Size() - 1))
        {
            index++;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

        }

        return;

    }

    void UserFilterHVID::DecrementIndex(WF::IInspectable const&, MUX::RoutedEventArgs const&)
    {
        if (index > 0)
        {
            index--;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

        }

    }

    WFITT::IObservableVector<winrt::hstring> UserFilterHVID::ItemList()
    {
        if (item_list.Size() == 0)
        {
            item_list.Append(L"Empty");

            index = 0;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"index" });

        }

        return item_list;

    }

    event_token UserFilterHVID::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void UserFilterHVID::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
