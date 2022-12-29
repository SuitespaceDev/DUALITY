#include "pch.h"
#include "UserFilterGoTo.xaml.h"
#if __has_include("UserFilterGoTo.g.cpp")
#include "UserFilterGoTo.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserFilterGoTo::UserFilterGoTo()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring UserFilterGoTo::Label()
    {

        return label;

    }

    void UserFilterGoTo::Label(winrt::hstring const& e)
    {
        label = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

        return;

    }

    void UserFilterGoTo::IncrementIndex(WF::IInspectable const&, MUX::RoutedEventArgs const&)
    {
        if ((uint32_t)selected_item < (item_list.Size() - 1))
        {
            selected_item++;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

        }

        return;

    }

    void UserFilterGoTo::DecrementIndex(WF::IInspectable const&, MUX::RoutedEventArgs const&)
    {
        if (selected_item > 0)
        {
            selected_item--;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

        }

    }

    int32_t UserFilterGoTo::SelectedItem()
    {

        return selected_item;

    }

    void UserFilterGoTo::SelectedItem(int32_t const& e)
    {
        selected_item = e;

        property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

        return;

    }

    void UserFilterGoTo::GoTo(WF::IInspectable const&, MUX::RoutedEventArgs const&)
    {


        return;

    }

    WFITT::IObservableVector<winrt::hstring> UserFilterGoTo::ItemList()
    {
        if (item_list.Size() == 0)
        {
            item_list.Append(L"Empty");

            selected_item = 0;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

        }

        return item_list;

    }

    bool UserFilterGoTo::IsEditable()
    {

        return is_editable;

    }

    void UserFilterGoTo::IsEditable(bool const& e)
    {
        is_editable = e;

        return;

    }

    event_token UserFilterGoTo::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void UserFilterGoTo::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
