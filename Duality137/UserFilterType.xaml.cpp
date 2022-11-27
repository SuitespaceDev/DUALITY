﻿#include "pch.h"
#include "UserFilterType.xaml.h"
#if __has_include("UserFilterType.g.cpp")
#include "UserFilterType.g.cpp"
#endif

namespace winrt::Duality137::implementation
{
	UserFilterType::UserFilterType()
	{
		InitializeComponent();

		return;

	}

	WFITT::IObservableVector<Duality137::UserMSelectable> UserFilterType::FilterList()
	{
		return filter_list;

	}

	void UserFilterType::FilterList(WFITT::IObservableVector<Duality137::UserMSelectable> const& e)
	{
		filter_list.Clear();

		for (Duality137::UserMSelectable itt : e)
		{
			filter_list.Append(itt);

		}

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