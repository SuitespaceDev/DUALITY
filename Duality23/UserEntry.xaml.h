#pragma once

#include "winrt/HV4D.h"

#include "UserEntry.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace WUX       = winrt::Windows::UI::Xaml;
namespace WUXI      = winrt::Windows::UI::Xaml::Interop;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXD      = winrt::Microsoft::UI::Xaml::Data;

using RETURN = winrt::HV4D::HV4DRETURN;

namespace winrt::Duality23::implementation
{
    struct UserEntry : UserEntryT<UserEntry>
    {
    public:
        UserEntry();

    public:
        winrt::hstring Label();

        void Label(winrt::hstring e);

    private:
        winrt::hstring label{};

    public:
        winrt::hstring Value();

        void Value(winrt::hstring);

        static MUX::DependencyProperty ValueProperty();

        static void OnValueChanged(MUX::DependencyObject const&, MUX::DependencyPropertyChangedEventArgs const&);

    private:
        static MUX::DependencyProperty value_property;

        //winrt::hstring value{};

    public:
        winrt::hstring Placeholder();

        void Placeholder(winrt::hstring e);

    private:
        winrt::hstring placeholder{};

    public:
        winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

        void PropertyChanged(winrt::event_token const&) noexcept;

    private:
        winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct UserEntry : UserEntryT<UserEntry, implementation::UserEntry>
    {
    };
}
