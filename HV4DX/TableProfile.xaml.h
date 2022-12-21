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

        void LabelProfileHVID(winrt::hstring const&);

    private:
        winrt::hstring label_profile_hvid{};

    public:
        uint32_t IndexProfileHVID();

        void IndexProfileHVID(uint32_t const&);

    private:
        uint32_t index_profile_hvid{};

    public:
        WFITT::IObservableVector<winrt::hstring> ListProfileHVID();

        void ListProfileHVID(WFITT::IObservableVector<winrt::hstring> const&);

    private:
        WFITT::IObservableVector<winrt::hstring> list_profile_hvid{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        winrt::hstring LabelProfileMMM();

        void LabelProfileMMM(winrt::hstring const&);

    private:
        winrt::hstring label_profile_mmm{};

    public:
        winrt::hstring ValueProfileMIL();

        void ValueProfileMIL(winrt::hstring const&);

    private:
        winrt::hstring value_profile_mil{};

    public:
        winrt::hstring ValueProfileMAJ();

        void ValueProfileMAJ(winrt::hstring const&);

    private:
        winrt::hstring value_profile_maj{};

    public:
        winrt::hstring ValueProfileMIN();

        void ValueProfileMIN(winrt::hstring const&);

    private:
        winrt::hstring value_profile_min{};

    public:
        winrt::hstring LabelProfileMaxPath();

        void LabelProfileMaxPath(winrt::hstring const&);

    private:
        winrt::hstring label_profile_maxpath{};

    public:
        uint32_t IndexProfileMaxPath();

        void IndexProfileMaxPath(uint32_t const&);

    private:
        uint32_t index_profile_maxpath{};

    public:
        WFITT::IObservableVector<winrt::hstring> ListProfileMaxPath();

        void ListProfileMaxPath(WFITT::IObservableVector<winrt::hstring> const&);

    private:
        WFITT::IObservableVector<winrt::hstring> list_profile_maxpath{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        winrt::hstring LabelProfileCreated();

        void LabelProfileCreated(winrt::hstring const&);

    private:
        winrt::hstring label_profile_created{};

    public:
        winrt::hstring ValueProfileCreated();

        void ValueProfileCreated(winrt::hstring const&);

    private:
        winrt::hstring value_profile_created{};

    public:
        winrt::hstring LabelProfileSaved();

        void LabelProfileSaved(winrt::hstring const&);

    private:
        winrt::hstring label_profile_saved{};

    public:
        winrt::hstring ValueProfileSaved();

        void ValueProfileSaved(winrt::hstring const&);

    private:
        winrt::hstring value_profile_saved{};

    public:
        winrt::hstring LabelProfileOpened();

        void LabelProfileOpened(winrt::hstring const&);

    private:
        winrt::hstring label_profile_opened{};

    public:
        winrt::hstring ValueProfileOpened();

        void ValueProfileOpened(winrt::hstring const&);

    private:
        winrt::hstring value_profile_opened{};

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
