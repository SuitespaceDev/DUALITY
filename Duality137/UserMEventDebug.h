#pragma once

#include "UserMEventDebug.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXD      = winrt::Microsoft::UI::Xaml::Data;

namespace winrt::Duality137::implementation
{
	struct UserMEventDebug : UserMEventDebugT<UserMEventDebug>
	{
	public:
		UserMEventDebug();
		
	public:
		event_token PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
		{
			return property_changed.add(handler);

		}

		void PropertyChanged(event_token const& e) noexcept
		{
			property_changed.remove(e);

		}

	private:
		winrt::event<MUXD::PropertyChangedEventHandler> property_changed{};
		
	};

}

namespace winrt::Duality137::factory_implementation
{
	struct UserMEventDebug : UserMEventDebugT<UserMEventDebug, implementation::UserMEventDebug>
	{

	};

}
