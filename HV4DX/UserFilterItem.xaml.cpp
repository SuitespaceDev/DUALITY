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

    hstring UserFilterItem::Value()
    {
        return value;

    }

    void UserFilterItem::Value(winrt::hstring const& e)
    {
        value = e;

        return;

    }

    winrt::hstring UserFilterItem::Item()
    { 
        
        return item;
    
    }

    WFITT::IObservableVector<winrt::hstring> UserFilterItem::ItemList()
    {
        if (item_list.Size() == 0)
        {
            item_list.Append(L". . .");

        }

        return item_list;

    }

    void UserFilterItem::ItemList(WFITT::IObservableVector<winrt::hstring> const& e)
    {
        item_list.Clear();

        if (e.Size() > 0)
        {
            item_list = e;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"ItemList" });

            item = *item_list.begin();

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Item" });

        }

        return;

    }

    bool UserFilterItem::Editable()
    {

        return editable;

    }

    void UserFilterItem::Editable(bool const& e)
    {
        editable = e;

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
