#pragma once

#include "TableProfile.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::HV4DX::implementation
{
    struct TableProfile : TableProfileT<TableProfile>
    {
    public:
        TableProfile();

    public:
        winrt::hstring LabelProfileHVID();

    private:
        winrt::hstring label_profile_hvid{};

    public:
        winrt::hstring LabelProfileMMM();

    private:
        winrt::hstring label_profile_mmm{};

    public:
        winrt::hstring ValueProfileMAJ();

    private:
        winrt::hstring value_profile_maj{};

    public:
        winrt::hstring LabelProfileMaxPath();

    private:
        winrt::hstring label_profile_maxpath{};

    public:
        winrt::hstring LabelProfileCreated();

    private:
        winrt::hstring label_profile_created{};

    public:
        winrt::hstring LabelProfileSaved();

    private:
        winrt::hstring label_profile_saved{};

    public:
        winrt::hstring LabelProfileOpened();

    private:
        winrt::hstring label_profile_opened{};

    public:
        winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

        void PropertyChanged(winrt::event_token const&) noexcept;

    private:
        winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableProfile : TableProfileT<TableProfile, implementation::TableProfile>
    {
    };
}
