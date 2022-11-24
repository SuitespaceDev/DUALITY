#include "pch.h"
#include "UserFilter.xaml.h"
#if __has_include("UserFilter.g.cpp")
#include "UserFilter.g.cpp"
#endif

namespace winrt::Duality23::implementation
{
	UserFilter::UserFilter()
	{
		InitializeComponent();

		return;

	}

	void UserFilter::UserFilterLoaded(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{



		return;

	}

	hstring UserFilter::Label()
	{

		return label;

	}

	void UserFilter::Label(winrt::hstring const& e)
	{
		label = e;

		return;

	}

	hstring UserFilter::Value()
	{
		if (filter_list.size() != 0)
		{

			return *citt;

		}

		return L"Unknown";

	}

	void UserFilter::Value(hstring const& e)
	{
		if (filter_list.size() != 0)
		{
			citt = std::find(filter_list.begin(), filter_list.end(), e);

			if (citt == filter_list.end())
			{

				throw RETURN::HV4D_INVALID_ARGUMENT;
			
			}
		
		}

		return;

	}

	void UserFilter::UserFilterUp(WF::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		if (citt != (filter_list.end() - 1))
		{
			citt++;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

			filter_event(*this, filter_group);

		}

		return;

	}

	void UserFilter::UserFilterDown(Windows::Foundation::IInspectable const& sender, MUX::RoutedEventArgs const& e)
	{
		if (citt != filter_list.begin())
		{
			citt--;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

			filter_event(*this, filter_group);

		}

		return;

	}

	hstring UserFilter::FilterGroup()
	{

		return filter_group;

	}

	void UserFilter::FilterGroup(winrt::hstring e)
	{
		filter_group = e;

		return;

	}

	WFITT::IObservableVector<hstring> UserFilter::FilterList()
	{
		WFITT::IObservableVector<hstring> out{ winrt::single_threaded_observable_vector<hstring>(std::move(filter_list)) };

		return out;

	}

	void UserFilter::FilterList(WFITT::IObservableVector<hstring> const& e)
	{
		filter_list.clear();

		for (hstring itt : e)
		{
			filter_list.push_back(itt);

		}

		citt = filter_list.begin();

		property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"Value" });

	}

	event_token UserFilter::FilterEvent(WF::EventHandler<hstring> const& handler)
	{

		return filter_event.add(handler);

	}

	void UserFilter::FilterEvent(winrt::event_token const& token) noexcept
	{
		filter_event.remove(token);

		return;

	}

	event_token UserFilter::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void UserFilter::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
