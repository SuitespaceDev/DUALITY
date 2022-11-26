#pragma once

#include "BuildProfileUserPage.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN      = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::Duality137::implementation
{
    struct BuildProfileUserPage : BuildProfileUserPageT<BuildProfileUserPage>
    {
    public:
        BuildProfileUserPage();

    public:
        void Loaded(WF::IInspectable const&, MUX::RoutedEventArgs const&);


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct BuildProfileUserPage : BuildProfileUserPageT<BuildProfileUserPage, implementation::BuildProfileUserPage>
    {

    };

}
