#pragma once

namespace WF	= winrt::Windows::Foundation;
namespace MUX	= winrt::Microsoft::UI::Xaml;
namespace MUXD	= winrt::Microsoft::UI::Xaml::Data;

#include "UserMSelectable.g.h"

namespace winrt::Duality23::implementation
{
	struct UserMSelectable : UserMSelectableT<UserMSelectable>
	{
	public:
		UserMSelectable() = delete;

		UserMSelectable(winrt::hstring const&);
		
	public:
		winrt::hstring Selectable();
		
		void Selectable(winrt::hstring const&);

	private:
		winrt::hstring selectable{};

	public:
		bool Selected();

		void Selected(bool);

	private:
		bool selected{ false };

	public:
		event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

		void PropertyChanged(winrt::event_token const&) noexcept;

	private:
		winrt::event<MUXD::PropertyChangedEventHandler> property_changed{};

	};

}

namespace winrt::Duality23::factory_implementation
{
	struct UserMSelectable : UserMSelectableT<UserMSelectable, implementation::UserMSelectable>
	{

	};

}
