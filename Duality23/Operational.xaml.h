#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\HV4DABI\\HV4DABI.lib")

#include <shobjidl.h>

#include "winrt/Windows.UI.Popups.h"

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DABI/CHV4DHVID.h"
#include "../HV4DABI/CHV4DMAXPATH.h"
#include "../HV4DABI/CHV4DKEY.h"

#include "Operational.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace WUPOP     = winrt::Windows::UI::Popups;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN      = winrt::Microsoft::UI::Xaml::Navigation;
namespace HV4D      = winrt::HV4D;
namespace HV4DABI   = winrt::HV4DABI;

using RETURN = HV4D::HV4DRETURN;

namespace winrt::Duality23::implementation
{
    struct Operational : OperationalT<Operational>
    {
    public:
        Operational();

    public:
        void Loading(MUX::FrameworkElement const&, WF::IInspectable const&);

    private:


    public:
        void Loaded(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        float raster_scale{ 0.0f };

        float width{ 0.0f };

        float height{ 0.0f };

    private:
        void HV4DTerminate();

        void HV4DNavCoreUI(Windows::UI::Popups::IUICommand const&);

    };

}

namespace winrt::Duality23::factory_implementation
{
    struct Operational : OperationalT<Operational, implementation::Operational>
    {

    };

}
