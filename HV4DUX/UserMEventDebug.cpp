#include "pch.h"
#include "UserMEventDebug.h"
#if __has_include("UserMEventDebug.g.cpp")
#include "UserMEventDebug.g.cpp"
#endif

using namespace winrt;

namespace winrt::HV4DUX::implementation
{
	UserMEventDebug::UserMEventDebug()
	{
		return;

	}

	event_token UserMEventDebug::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{
		return property_changed.add(handler);

	}

	void UserMEventDebug::PropertyChanged(event_token const& e) noexcept
	{
		property_changed.remove(e);

	}

}
