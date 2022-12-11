#pragma once

#include "UserMEventDebug.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXD      = winrt::Microsoft::UI::Xaml::Data;

namespace winrt::HV4DX::implementation
{
	struct UserMEventDebug : UserMEventDebugT<UserMEventDebug>
	{
	public:
		UserMEventDebug();
		
	public:
		event_token PropertyChanged(MUXD::PropertyChangedEventHandler const& handler);

		void PropertyChanged(event_token const& e) noexcept;

	private:
		winrt::event<MUXD::PropertyChangedEventHandler> property_changed{};
		
	};

}

namespace winrt::HV4DX::factory_implementation
{
	struct UserMEventDebug : UserMEventDebugT<UserMEventDebug, implementation::UserMEventDebug>
	{

	};

}
