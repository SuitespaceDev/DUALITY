#pragma once

#include "UserFilterMMM.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;

namespace winrt::HV4DX::implementation
{
    struct UserFilterMMM : UserFilterMMMT<UserFilterMMM>
    {
    public:
        UserFilterMMM();

    public:
        winrt::hstring Label();

        void Label(winrt::hstring const&);

    private:
        winrt::hstring label{};

    public:
        winrt::hstring ValueMIL();

        void ValueMIL(winrt::hstring const&);

        void IncreaseMilestone(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void DecreaseMilestone(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        winrt::hstring value_mil{};

    public:
        winrt::hstring ValueMAJ();

        void ValueMAJ(winrt::hstring const&);

        void IncreaseMajor(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void DecreaseMajor(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        winrt::hstring value_maj{};

    public:
        winrt::hstring ValueMIN();

        void ValueMIN(winrt::hstring const&);

        void IncreaseMinor(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void DecreaseMinor(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        winrt::hstring value_min{};

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct UserFilterMMM : UserFilterMMMT<UserFilterMMM, implementation::UserFilterMMM>
    {
    };
}
