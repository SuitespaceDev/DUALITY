#include "pch.h"
#include "UserFilterType.xaml.h"
#if __has_include("UserFilterType.g.cpp")
#include "UserFilterType.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
{
	UserFilterType::UserFilterType()
	{
		InitializeComponent();

		filter_list = winrt::single_threaded_observable_vector<HV4DUX::UserMSelectable>();

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

	WFITT::IObservableVector<HV4DUX::UserMSelectable> UserFilterType::FilterList()
	{
		return filter_list;

	}

	void UserFilterType::FilterList(WFITT::IObservableVector<HV4DUX::UserMSelectable> const& e)
	{
		filter_list.Clear();

		for (HV4DUX::UserMSelectable itt : e)
		{
			filter_list.Append(itt);

		}

	}

	HV4DUX::UserMSelectable UserFilterType::MultiFilterState() 
	{ 
		
		return multi_filter_state; 
	
	}

	void UserFilterType::MultiFilterState(HV4DUX::UserMSelectable const& e)
	{ 
		multi_filter_state = e; 

		return;

	}

	winrt::event_token UserFilterType::FilterUpdate(WF::EventHandler<hstring> const& handler)
	{
		return filter_update.add(handler);

	}

	void UserFilterType::FilterUpdate(event_token const& token) noexcept
	{
		filter_update.remove(token);

		return;

	}

}
