#include "pch.h"
#include "UserFilterGoToHVID.xaml.h"
#if __has_include("UserFilterGoToHVID.g.cpp")
#include "UserFilterGoToHVID.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserFilterGoToHVID::UserFilterGoToHVID()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring UserFilterGoToHVID::Label()
    {

        return label;

    }

    void UserFilterGoToHVID::Label(winrt::hstring const& e)
    {
        label = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

        return;

    }

    void UserFilterGoToHVID::IncrementIndex(WF::IInspectable const&, MUX::RoutedEventArgs const&)
    {
        if ((uint32_t)selected_item < (item_list.Size() - 1))
        {
            selected_item++;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

        }

        return;

    }

    void UserFilterGoToHVID::DecrementIndex(WF::IInspectable const&, MUX::RoutedEventArgs const&)
    {
        if (selected_item > 0)
        {
            selected_item--;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

        }

    }

    int32_t UserFilterGoToHVID::SelectedItem()
    {

        return selected_item;

    }

    void UserFilterGoToHVID::SelectedItem(int32_t const& e)
    {
        selected_item = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

        return;

    }

    void UserFilterGoToHVID::GoTo(WF::IInspectable const&, MUX::RoutedEventArgs const&)
    {


        return;

    }

    WFITT::IObservableVector<winrt::hstring> UserFilterGoToHVID::ItemList()
    {
        if (item_list.Size() == 0)
        {
            item_list.Append(L"Empty");

            selected_item = 0;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

        }

        return item_list;

    }

    bool UserFilterGoToHVID::IsEditable()
    {

        return is_editable;

    }

    void UserFilterGoToHVID::IsEditable(bool const& e)
    {
        is_editable = e;

        return;

    }

    event_token UserFilterGoToHVID::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void UserFilterGoToHVID::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
