#pragma once

#include "UserFilterNewMMM.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::HV4DX::implementation
{
    struct UserFilterNewMMM : UserFilterNewMMMT<UserFilterNewMMM>
    {
    public:
        UserFilterNewMMM();

    public:
        winrt::hstring Label();

        void Label(winrt::hstring const&);

    private:
        winrt::hstring label{};

    public:
        winrt::hstring ValueMIL();

        void IncreaseMilestone(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void DecreaseMilestone(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        winrt::hstring value_mil{};

    public:
        winrt::hstring ValueMAJ();

        void IncreaseMajor(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void DecreaseMajor(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        winrt::hstring value_maj{};

    public:
        winrt::hstring ValueMIN();

        void IncreaseMinor(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void DecreaseMinor(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        winrt::hstring value_min{};

    public:
        void NewMMM(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    public:
        winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

        void PropertyChanged(winrt::event_token const&) noexcept;

    private:
        winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct UserFilterNewMMM : UserFilterNewMMMT<UserFilterNewMMM, implementation::UserFilterNewMMM>
    {
    };
}
