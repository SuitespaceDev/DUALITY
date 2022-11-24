#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\HV4DABI\\HV4DABI.lib")

#include <shobjidl.h>

#include "winrt/Windows.UI.Popups.h"

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DABI/CHV4DHVID.h"
#include "../HV4DABI/CHV4DMAXPATH.h"
#include "../HV4DABI/CHV4DKEY.h"

#include "RecentProject.g.h"

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
    struct RecentProject : RecentProjectT<RecentProject>
    {
    public:
        RecentProject();

    public:
        void Loading(MUX::FrameworkElement const&, WF::IInspectable const&);

    private:

    public:
        void Loaded(WF::IInspectable const&, MUX::RoutedEventArgs const&);
        
    private:
        void PopulateRecent();

    public:
        void RecentProject001(WF::IInspectable const&, MUX::RoutedEventArgs const&);
        void RecentProject002(WF::IInspectable const&, MUX::RoutedEventArgs const&);
        void RecentProject003(WF::IInspectable const&, MUX::RoutedEventArgs const&);
        void RecentProject004(WF::IInspectable const&, MUX::RoutedEventArgs const&);
        void RecentProject005(WF::IInspectable const&, MUX::RoutedEventArgs const&);
        void RecentProject006(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        void OpenRecentProject(uint32_t);

    public:
        void OpenProject001(WF::IInspectable const&, MUX::RoutedEventArgs const&);
        void OpenProject002(WF::IInspectable const&, MUX::RoutedEventArgs const&);
        void OpenProject003(WF::IInspectable const&, MUX::RoutedEventArgs const&);
        void OpenProject004(WF::IInspectable const&, MUX::RoutedEventArgs const&);
        void OpenProject005(WF::IInspectable const&, MUX::RoutedEventArgs const&);
        void OpenProject006(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    public:
        void GoToLoaderSettings(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        void HV4DThrowFailed();

        void HV4DThrowInvalidProject();

        void HV4DThrowCouldNotNavigate();
        
    };
    
}

namespace winrt::Duality23::factory_implementation
{
    struct RecentProject : RecentProjectT<RecentProject, implementation::RecentProject>
    {
    };
}
