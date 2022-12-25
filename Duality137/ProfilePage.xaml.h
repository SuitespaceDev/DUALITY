#pragma once

#include "winrt/HV4DX.h"

#include "ProfilePage.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN      = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::Duality137::implementation
{
    struct ProfilePage : ProfilePageT<ProfilePage>
    {
    public:
        ProfilePage();

    public:
        void Loaded(WF::IInspectable const&, MUX::RoutedEventArgs const&);


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ProfilePage : ProfilePageT<ProfilePage, implementation::ProfilePage>
    {

    };

}
