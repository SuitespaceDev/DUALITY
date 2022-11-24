#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\HV4DABI\\HV4DABI.lib")

#include <functional>
#include <bitset>

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "../HV4DABI/CHV4DHVID.h"
#include "../HV4DABI/CHV4DMAXPATH.h"
#include "../HV4DABI/CHV4DKEY.h"

#include "BuildMetadata.g.h"

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
    struct BuildMetadata : BuildMetadataT<BuildMetadata>
    {       
    public:
        BuildMetadata();

    public:
        void Loaded(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        void InitializeIndex();

        std::unordered_map<HV4DABI::CHV4DKEY, std::function<bool()>, HV4DABI::CHV4DKEYFN>* Pages;

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

namespace winrt::Duality23::factory_implementation
{
    struct BuildMetadata : BuildMetadataT<BuildMetadata, implementation::BuildMetadata>
    {
    };
}
