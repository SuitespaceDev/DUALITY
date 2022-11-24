#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\HV4DABI\\HV4DABI.lib")

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DABI/CHV4DHVID.h"
#include "../HV4DABI/CHV4DMAXPATH.h"
#include "../HV4DABI/CHV4DKEY.h"

#include "BuildProfile.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN      = winrt::Microsoft::UI::Xaml::Navigation;
namespace HV4D      = winrt::HV4D;
namespace HV4DABI   = winrt::HV4DABI;

using RETURN = HV4D::HV4DRETURN;

namespace winrt::Duality23::implementation
{
    struct BuildProfile : BuildProfileT<BuildProfile>
    {
    public:
        BuildProfile();

    public:
        void Loaded(WF::IInspectable const&, MUX::RoutedEventArgs const&);


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct BuildProfile : BuildProfileT<BuildProfile, implementation::BuildProfile>
    {

    };

}
