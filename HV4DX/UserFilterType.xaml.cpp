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

	WFITT::IObservableVector<MUXC::TextBlock> UserFilterType::FilterList()
	{
		return filter_list;

	}

	void UserFilterType::FilterList(WFITT::IObservableVector<MUXC::TextBlock> const& e)
	{
		filter_list.Clear();

		for (MUXC::TextBlock itt : e)
		{
			filter_list.Append(itt);

		}

	}

	MUXC::TextBlock UserFilterType::FilterType()
	{ 
		
		return filter_type; 
	
	}

	void UserFilterType::FilterType(MUXC::TextBlock const& e)
	{ 
		filter_type = e; 

		return;

	}

}
