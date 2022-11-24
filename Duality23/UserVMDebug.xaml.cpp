#include "pch.h"
#include "UserVMDebug.xaml.h"
#if __has_include("UserVMDebug.g.cpp")
#include "UserVMDebug.g.cpp"
#endif

using namespace winrt;

using namespace winrt::Windows::Foundation::Collections;

using namespace winrt::Microsoft::UI::Xaml;

using namespace winrt::Microsoft::UI::Xaml::Controls;
using namespace winrt::Microsoft::UI::Xaml::Controls::Primitives;

namespace winrt::Duality23::implementation
{
	UserVMDebug::UserVMDebug()
	{
		InitializeComponent();

		return;

	}

	void UserVMDebug::UserVMDebugLoaded(winrt::Windows::Foundation::IInspectable const& sender, RoutedEventArgs const& e)
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
		IObservableVector<UserMSelectable> collection{ winrt::single_threaded_observable_vector<UserMSelectable>() };

		collection.Append(UserMSelectable{ L"All" });
		collection.Append(UserMSelectable{ L"Parameter Error" });
		collection.Append(UserMSelectable{ L"File Error" });
		collection.Append(UserMSelectable{ L"Process Error" });
		collection.Append(UserMSelectable{ L"Device Error" });

		FilterByType().FilterList(collection);

		return;

	}

}
