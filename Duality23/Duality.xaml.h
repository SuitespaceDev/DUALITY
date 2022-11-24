#pragma once

#include <sstream>
#include <iostream>
#include <fstream>

#include <vector>

#include <winstring.h>
#include <activation.h>

#include <winrt/Windows.ApplicationModel.Activation.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Storage.h>

#include <winrt/Microsoft.Windows.AppLifecycle.h>

#include "DualityWindow.xaml.h"

#include "Duality.xaml.g.h"

namespace WAA       = winrt::Windows::ApplicationModel::Activation;
namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace WS        = winrt::Windows::Storage;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN      = winrt::Microsoft::UI::Xaml::Navigation;
namespace MWA       = winrt::Microsoft::Windows::AppLifecycle;
namespace HV4D      = winrt::HV4D;
namespace HV4DABI   = winrt::HV4DABI;

namespace winrt::Duality23::implementation
{
    struct Duality : AppT<Duality>
    {
        Duality();

        void OnLaunched(MUX::LaunchActivatedEventArgs const&);

        void Unhandled(WF::IInspectable const&, MUX::UnhandledExceptionEventArgs const&);

    private:
        MUX::Window WinRTWindow{ nullptr };
    };
}
