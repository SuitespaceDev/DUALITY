#include "pch.h"
#include "UserSelectable.xaml.h"
#if __has_include("UserSelectable.g.cpp")
#include "UserSelectable.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
	UserSelectable::UserSelectable()
	{
		InitializeComponent();

		return;

	}

	winrt::hstring UserSelectable::Selectable()
	{

		return selectable;

	}

	void UserSelectable::Selectable(winrt::hstring const& e)
	{
		selectable = e;

		return;

	}

	bool UserSelectable::Selected()
	{

		return selected;

	}

	void UserSelectable::Selected(bool e)
	{
		selected = e;

		return;

	}

	event_token UserSelectable::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{
		return property_changed.add(handler);

	}

	void UserSelectable::PropertyChanged(winrt::event_token const& e) noexcept
	{
		property_changed.remove(e);

	}

}
