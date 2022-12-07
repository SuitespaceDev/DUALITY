#include "pch.h"
#include "TableDebug.xaml.h"
#if __has_include("TableDebug.g.cpp")
#include "TableDebug.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
{
	TableDebug::TableDebug()
	{
		InitializeComponent();

		return;

	}

	void TableDebug::TableDebugLoaded(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		LoadGuidScan();

		LoadTimeFilter();

		LoadTypeFilter();

		return;

	}

	void TableDebug::LoadGuidScan()
	{

		return;

	}

	void TableDebug::LoadTimeFilter()
	{

		return;

	}

	void TableDebug::LoadTypeFilter()
	{
		WFC::IObservableVector<UserMSelectable> collection
		{ 
			winrt::single_threaded_observable_vector<UserMSelectable>() 
		
		};

		collection.Append(UserMSelectable{ L"All" });
		collection.Append(UserMSelectable{ L"Parameter Error" });
		collection.Append(UserMSelectable{ L"File Error" });
		collection.Append(UserMSelectable{ L"Process Error" });
		collection.Append(UserMSelectable{ L"Device Error" });

		FilterByType().FilterList(collection);

		return;

	}

	hstring TableDebug::LabelHVID() 
	{ 
		
		return label_hvid; 
	
	}

	void TableDebug::LabelHVID(winrt::hstring const& e) 
	{ 
		label_hvid = e; 
	
		return;

	}

	hstring TableDebug::ValueHVID() 
	{ 
		
		return value_hvid; 
	
	}

	void TableDebug::ValueHVID(winrt::hstring const& e) 
	{ 
		value_hvid = e; 
	
		return;

	}

	hstring TableDebug::LabelType() 
	{ 
		
		return label_type; 
	
	}

	void TableDebug::LabelType(winrt::hstring const& e)
	{ 
		label_type = e; 
	
		return;
	
	}

	hstring TableDebug::ValueType() 
	{ 
		
		return value_type; 
	
	}

	void TableDebug::ValueType(winrt::hstring const& e) 
	{ 
		value_type = e; 
	
		return;
	
	}

}
