#include "pch.h"
#include "UserFilterNew.xaml.h"
#if __has_include("UserFilterNew.g.cpp")
#include "UserFilterNew.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserFilterNew::UserFilterNew()
    {
        InitializeComponent();

        return;

    }

	winrt::hstring UserFilterNew::Label() 
	{ 
		
		return label; 
	
	}

	void UserFilterNew::Label(winrt::hstring const& e)
	{ 
		label = e; 
	
		return;
	
	}

	uint32_t UserFilterNew::SelectedItem()
	{ 
		
		return selected_item;
	
	}

	void UserFilterNew::SelectedItem(uint32_t const& e)
	{ 
		selected_item = e;
	
		return;
	
	}

	void UserFilterNew::NextItem(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		if (selected_item < (item_list.Size() - 1))
		{
			selected_item++;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

		}
		
		return;

	}

	void UserFilterNew::PreviousItem(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		if (selected_item > 0)
		{
			selected_item--;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" } );

		}
		
		return;

	}

	WFITT::IObservableVector<winrt::hstring> UserFilterNew::ItemList()
	{
		if (item_list.Size() == 0)
		{
			item_list.Append(L"Empty");

			return item_list;

		}
		else
		{
			return item_list;

		}

	}

	void UserFilterNew::ItemList(WFITT::IObservableVector<winrt::hstring> const& e)
	{
		if (e.Size() == 0)
		{
			return;

		}
		else
		{
			item_list = e;

			return;

		}

	}

	void UserFilterNew::NewItem(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{




	}

	void UserFilterNew::DeleteItem(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{




	}
	
	event_token UserFilterNew::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserFilterNew::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
