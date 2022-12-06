#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\CHV4DTBASIC.lib")

#include <functional>
#include <bitset>

#include "winrt/HV4D.h"
#include "winrt/HV4DTBASIC.h"

#include "../CHV4DTBASIC/CHV4DHVID.h"
#include "../CHV4DTBASIC/CHV4DMAXPATH.h"
#include "../CHV4DTBASIC/CHV4DKEY.h"

#include "Machine.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN      = winrt::Microsoft::UI::Xaml::Navigation;

namespace CTBASIC   = CHV4D::CHV4DTBASIC;

namespace winrt::Duality137::implementation
{
    struct Machine : MachineT<Machine>
    {       
    public:
        Machine();

    public:
        void Loaded(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        void InitializeIndex();

        std::unordered_map<CTBASIC::CHV4DKEY, std::function<bool()>, CTBASIC::CHV4DKEYFN>* Pages;

    public:
        void MetadataPortalLoaded(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    public:
        void MetadataPortalSelectionChanged(MUXC::NavigationView const&, MUXC::NavigationViewSelectionChangedEventArgs const&);

    public:
        void MetadataPortalNavFailed(WF::IInspectable const&, MUXN::NavigationFailedEventArgs const&);

    public:
        void Cancel_Click(WF::IInspectable const&, MUX::RoutedEventArgs const&);
        void Apply_Click(WF::IInspectable const&, MUX::RoutedEventArgs const&);
        void Exit_Click(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        int initialized{ 0 };

    };
}

namespace winrt::Duality137::factory_implementation
{
    struct Machine : MachineT<Machine, implementation::Machine>
    {
    };
}
