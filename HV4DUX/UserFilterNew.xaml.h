#pragma once

#include "UserFilterNew.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXD      = winrt::Microsoft::UI::Xaml::Data;

namespace winrt::HV4DUX::implementation
{
    struct UserFilterNew : UserFilterNewT<UserFilterNew>
    {
    public:
        UserFilterNew();

    public:
        winrt::hstring Label();

        void Label(winrt::hstring const&);

    private:
        winrt::hstring label{};

    public:
        winrt::hstring Value();

        void Value(winrt::hstring const&);

    private:
        winrt::hstring value{};

    public:
        void UserFilterNewUp(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void UserFilterNewDown(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    public:
        winrt::event_token FilterChanged(WF::EventHandler<winrt::hstring> const&);

        void FilterChanged(winrt::event_token const&) noexcept;

    private:
        winrt::event<WF::EventHandler<winrt::hstring>> filter_changed_event;

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct UserFilterNew : UserFilterNewT<UserFilterNew, implementation::UserFilterNew>
    {
    };
}
