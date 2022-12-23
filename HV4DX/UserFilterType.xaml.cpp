#include "pch.h"
#include "UserFilterType.xaml.h"
#if __has_include("UserFilterType.g.cpp")
#include "UserFilterType.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
	UserFilterType::UserFilterType()
	{
		InitializeComponent();

		return;

	}

	winrt::hstring UserFilterType::Label() 
	{ 
		
		return label; 
	
	}

	uint32_t UserFilterType::CurrentItem()
	{ 
		
		return current_item;
	
	}

	WFITT::IObservableVector<winrt::hstring> UserFilterType::ItemList()
	{
		return item_list;

	}

	uint32_t UserFilterType::FilterType()
	{

		return filter_type;

	}

	void UserFilterType::FilterType(uint32_t const& e)
	{
		filter_type = e;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"FilterType" });

		return;

	}

	WFITT::IObservableVector<winrt::hstring> UserFilterType::FilterList()
	{
		return filter_list;

	}

	event_token UserFilterType::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserFilterType::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
