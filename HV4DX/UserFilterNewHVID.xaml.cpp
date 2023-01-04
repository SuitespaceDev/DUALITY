#include "pch.h"
#include "UserFilterNewHVID.xaml.h"
#if __has_include("UserFilterNewHVID.g.cpp")
#include "UserFilterNewHVID.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserFilterNewHVID::UserFilterNewHVID()
    {
        InitializeComponent();

        return;

    }

	winrt::hstring UserFilterNewHVID::Label() 
	{ 
		
		return label; 
	
	}

	void UserFilterNewHVID::Label(winrt::hstring const& e)
	{
		label = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

		return;

	}

	int32_t UserFilterNewHVID::SelectedItem()
	{ 
		
		return selected_item;
	
	}

	void UserFilterNewHVID::SelectedItem(int32_t const& e)
	{ 
		selected_item = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

		return;
	
	}

	void UserFilterNewHVID::NextItem(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		if ((uint32_t)selected_item < (item_list.Size() - 1))
		{
			selected_item++;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

		}
		
		return;

	}

	void UserFilterNewHVID::PreviousItem(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		if (selected_item > 0)
		{
			selected_item--;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" } );

		}
		
		return;

	}

	WFITT::IObservableVector<winrt::hstring> UserFilterNewHVID::ItemList()
	{
		if (item_list.Size() == 0)
		{
			item_list.Append(L"Empty");

			selected_item = 0;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

			return item_list;

		}
		else
		{
			return item_list;

		}

	}

	void UserFilterNewHVID::NewItem(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{




	}

	void UserFilterNewHVID::DeleteItem(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{




	}
	
	event_token UserFilterNewHVID::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserFilterNewHVID::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
