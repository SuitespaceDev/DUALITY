#include "pch.h"
#include "UserMSelectable.h"
#if __has_include("UserMSelectable.g.cpp")
#include "UserMSelectable.g.cpp"
#endif

namespace winrt::Duality23::implementation
{
	UserMSelectable::UserMSelectable(winrt::hstring const& e)
	{
		selectable = e;

		return;

	}

	winrt::hstring UserMSelectable::Selectable()
	{ 
		
		return selectable; 
	
	}

	void UserMSelectable::Selectable(winrt::hstring const& e)
	{ 
		selectable = e; 
	
		return;
	
	}

	bool UserMSelectable::Selected() 
	{ 
		
		return selected; 
	
	}

	void UserMSelectable::Selected(bool e) 
	{ 
		selected = e; 
	
		return;
	
	}

	event_token UserMSelectable::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{
		return property_changed.add(handler);

	}

	void UserMSelectable::PropertyChanged(winrt::event_token const& e) noexcept
	{
		property_changed.remove(e);

	}

}
