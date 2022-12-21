#include "pch.h"
#include "UserFilterItem.xaml.h"
#if __has_include("UserFilterItem.g.cpp")
#include "UserFilterItem.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
	UserFilterItem::UserFilterItem()
	{
		InitializeComponent();

		return;

	}

    winrt::hstring UserFilterItem::Label()
    {

        return label;

    }

    void UserFilterItem::Label(winrt::hstring const& e) 
    { 
        label = e; 
    
        return;

    }

    void UserFilterItem::IncrementIndex(WF::IInspectable const&, MUX::RoutedEventArgs const&)
    {
        if (selected_item < (item_list.Size() - 1))
        {
            selected_item++;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

        }

        return;

    }

    void UserFilterItem::DecrementIndex(WF::IInspectable const&, MUX::RoutedEventArgs const&)
    {
        if (selected_item > 0)
        {
            selected_item--;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

        }

    }

    uint32_t UserFilterItem::SelectedItem()
    { 
        
        return selected_item;
    
    }

    void UserFilterItem::SelectedItem(uint32_t const& e)
    {
        selected_item = e;

        return;

    }

    WFITT::IObservableVector<winrt::hstring> UserFilterItem::ItemList()
    {
        if (item_list.Size() == 0)
        {
            item_list.Append(L"Empty");

            selected_item = 0;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

        }

        return item_list;

    }

    void UserFilterItem::ItemList(WFITT::IObservableVector<winrt::hstring> const& e)
    {
        if (e.Size() > 0)
        {
            item_list.Clear();

            item_list = e;

            selected_item = 0;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

        }

        return;

    }

    bool UserFilterItem::IsEditable()
    {

        return is_editable;

    }

    void UserFilterItem::IsEditable(bool const& e)
    {
        is_editable = e;

        return;

    }

    event_token UserFilterItem::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void UserFilterItem::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
