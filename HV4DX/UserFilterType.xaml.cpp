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

	void UserFilterType::Label(winrt::hstring const& e)
	{ 
		label = e; 
	
		return;
	
	}

	winrt::hstring UserFilterType::Value() 
	{ 
		
		return value; 
	
	}

	void UserFilterType::Value(winrt::hstring const& e)
	{ 
		value = e; 
	
		return;
	
	}

	WFITT::IObservableVector<winrt::hstring> UserFilterType::FilterList()
	{
		return filter_list;

	}

	void UserFilterType::FilterList(WFITT::IObservableVector<winrt::hstring> const& e)
	{
		filter_list.Clear();

		filter_list = e;

		filter_type = 0;

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"FilterType" });

		return;

	}

	uint32_t UserFilterType::FilterType()
	{ 
		
		return filter_type; 
	
	}

	void UserFilterType::FilterType(uint32_t const& e)
	{ 
		filter_type = e; 

		return;

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
