#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\HV4DABI\\HV4DABI.lib")

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DABI/CHV4DHVID.h"
#include "../HV4DABI/CHV4DMAXPATH.h"
#include "../HV4DABI/CHV4DKEY.h"

#include "BuildProfileUserPage.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN      = winrt::Microsoft::UI::Xaml::Navigation;
namespace HV4D      = winrt::HV4D;
namespace HV4DABI   = winrt::HV4DABI;

using RETURN = HV4D::HV4DRETURN;

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
