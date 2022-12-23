#pragma once

#include "UserFilterType.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::HV4DX::implementation
{
    struct UserFilterType : UserFilterTypeT<UserFilterType>
    {
    public:
        UserFilterType();

    public:
        winrt::hstring Label();

    private:
        winrt::hstring label{};

    public:
        uint32_t CurrentItem();

    private:
        uint32_t current_item{};

    public:
        WFITT::IObservableVector<winrt::hstring> ItemList();

    private:
        WFITT::IObservableVector<winrt::hstring> item_list{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        uint32_t FilterType();

        void FilterType(uint32_t const&);

    private:
        uint32_t filter_type{};

    public:
        WFITT::IObservableVector<winrt::hstring> FilterList();

    private:
        WFITT::IObservableVector<winrt::hstring> filter_list{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

        void PropertyChanged(winrt::event_token const&) noexcept;

    private:
        winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct UserFilterType : UserFilterTypeT<UserFilterType, implementation::UserFilterType>
    {
    };
}
