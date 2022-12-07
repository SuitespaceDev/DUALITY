#include "pch.h"
#include "UserIterableList.xaml.h"
#if __has_include("UserIterableList.g.cpp")
#include "UserIterableList.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
{
	UserIterableList::UserIterableList()
	{
		InitializeComponent();

		return;

	}

    winrt::hstring UserIterableList::Label()
    {

        return label;

    }

    void UserIterableList::Label(winrt::hstring const& e) 
    { 
        label = e; 
    
        return;

    }

    winrt::hstring UserIterableList::Item()
    { 
        
        return item;
    
    }

    WFITT::IObservableVector<winrt::hstring> UserIterableList::ItemList()
    {
        if (item_list.Size() == 0)
        {
            item_list.Append(L". . .");

        }

        return item_list;

    }

    void UserIterableList::ItemList(WFITT::IObservableVector<winrt::hstring> const& e)
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

    bool UserIterableList::Editable()
    {

        return editable;

    }

    void UserIterableList::Editable(bool const& e)
    {
        editable = e;

        return;

    }

    event_token UserIterableList::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void UserIterableList::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
