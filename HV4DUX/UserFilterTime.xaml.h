﻿#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\source\\DUALITY\\x64\\debug\\CHV4DTBASIC.lib")

#include "../CHV4DTBASIC/CHV4DMMDDYYYY.h"

#include "UserFilterTime.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXD      = winrt::Microsoft::UI::Xaml::Data;
namespace CTBASE    = CHV4D::CHV4DTBASIC;

namespace winrt::HV4DUX::implementation
{
    struct UserFilterTime : UserFilterTimeT<UserFilterTime>
    {
    public:
        UserFilterTime();

    public:
        void UserFilterTimeLoaded(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        void LoadMMM();

        void LoadDD();

        void LoadYYYY();

        void LoadHH();

        void LoadMM();

        void LoadSS();

        void LoadOP();

    public:
        winrt::event_token FilterChanged(WF::EventHandler<hstring> const&);

        void FilterChanged(winrt::event_token const&) noexcept;

    private:
        winrt::event<WF::EventHandler<hstring>> filter_changed_event;

    public:
        void FilterByTimeAndOp(WF::IInspectable const&, hstring const&);

    private:
        std::map<hstring, winrt::event_token> tokens{};

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct UserFilterTime : UserFilterTimeT<UserFilterTime, implementation::UserFilterTime>
    {
    };
}