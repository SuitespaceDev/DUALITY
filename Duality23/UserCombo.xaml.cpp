#include "pch.h"
#include "UserCombo.xaml.h"
#if __has_include("UserCombo.g.cpp")
#include "UserCombo.g.cpp"
#endif

namespace winrt::Duality23::implementation
{
	UserCombo::UserCombo()
	{
		InitializeComponent();

		return;

	}

    winrt::hstring UserCombo::Label()
    {

        return label;

    }

    void UserCombo::Label(winrt::hstring const& e) 
    { 
        label = e; 
    
        return;

    }

    winrt::hstring UserCombo::Item()
    { 
        
        return item;
    
    }

    WFITT::IObservableVector<winrt::hstring> UserCombo::ItemList()
    {
        if (item_list.Size() == 0)
        {
            item_list.Append(L". . .");

        }

        return item_list;

    }

    void UserCombo::ItemList(WFITT::IObservableVector<winrt::hstring> const& e)
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

    bool UserCombo::Editable()
    {

        return editable;

    }

    void UserCombo::Editable(bool const& e)
    {
        editable = e;

        return;

    }

    event_token UserCombo::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void UserCombo::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
