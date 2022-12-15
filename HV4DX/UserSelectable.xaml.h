#pragma once

#include "UserSelectable.g.h"

namespace WF	= winrt::Windows::Foundation;
namespace MUX	= winrt::Microsoft::UI::Xaml;
namespace MUXD	= winrt::Microsoft::UI::Xaml::Data;

namespace winrt::HV4DX::implementation
{
    struct UserSelectable : UserSelectableT<UserSelectable>
    {
    public:
		UserSelectable();

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
		winrt::event<MUXD::PropertyChangedEventHandler> property_changed {};

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct UserSelectable : UserSelectableT<UserSelectable, implementation::UserSelectable>
    {
    };
}
