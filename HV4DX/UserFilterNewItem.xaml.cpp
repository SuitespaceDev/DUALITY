#include "pch.h"
#include "UserFilterNewItem.xaml.h"
#if __has_include("UserFilterNewItem.g.cpp")
#include "UserFilterNewItem.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserFilterNewItem::UserFilterNewItem()
    {
        InitializeComponent();

		return;

	}

	winrt::hstring UserFilterNewItem::Label()
	{

		return label;

	}

	void UserFilterNewItem::Label(winrt::hstring const& e)
	{
		label = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Label" });

		return;

	}

	int32_t UserFilterNewItem::SelectedItem()
	{

		return selected_item;

	}

	void UserFilterNewItem::SelectedItem(int32_t const& e)
	{
		selected_item = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

		return;

	}

	void UserFilterNewItem::NextItem(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		if ((uint32_t)selected_item < (item_list.Size() - 1))
		{
			selected_item++;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

		}

		return;

	}

	void UserFilterNewItem::PreviousItem(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		if (selected_item > 0)
		{
			selected_item--;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"SelectedItem" });

		}

		return;

	}

	WFITT::IObservableVector<winrt::hstring> UserFilterNewItem::ItemList()
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

	void UserFilterNewItem::NewItem(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{




	}

	void UserFilterNewItem::DeleteItem(WF::IInspectable const&, MUX::RoutedEventArgs const&)
	{




	}

	event_token UserFilterNewItem::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserFilterNewItem::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
