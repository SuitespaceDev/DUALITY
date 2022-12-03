#include "pch.h"
#include "UserVMDebug.xaml.h"
#if __has_include("UserVMDebug.g.cpp")
#include "UserVMDebug.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
{
	UserVMDebug::UserVMDebug()
	{
		InitializeComponent();

		return;

	}

	void UserVMDebug::UserVMDebugLoaded(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		LoadGuidScan();

		LoadTimeFilter();

		LoadTypeFilter();

		return;

	}

	void UserVMDebug::LoadGuidScan()
	{

		return;

	}

	void UserVMDebug::LoadTimeFilter()
	{

		return;

	}

	void UserVMDebug::LoadTypeFilter()
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

	hstring UserVMDebug::LabelHVID() 
	{ 
		
		return label_hvid; 
	
	}

	void UserVMDebug::LabelHVID(winrt::hstring const& e) 
	{ 
		label_hvid = e; 
	
		return;

	}

	hstring UserVMDebug::ValueHVID() 
	{ 
		
		return value_hvid; 
	
	}

	void UserVMDebug::ValueHVID(winrt::hstring const& e) 
	{ 
		value_hvid = e; 
	
		return;

	}

	hstring UserVMDebug::LabelType() 
	{ 
		
		return label_type; 
	
	}

	void UserVMDebug::LabelType(winrt::hstring const& e)
	{ 
		label_type = e; 
	
		return;
	
	}

	hstring UserVMDebug::ValueType() 
	{ 
		
		return value_type; 
	
	}

	void UserVMDebug::ValueType(winrt::hstring const& e) 
	{ 
		value_type = e; 
	
		return;
	
	}

}
