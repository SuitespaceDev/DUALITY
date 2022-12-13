#pragma once

#include "UserFilterItem.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXD      = winrt::Microsoft::UI::Xaml::Data;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN      = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::HV4DX::implementation
{
    struct UserFilterItem : UserFilterItemT<UserFilterItem>
    {
    public:
        UserFilterItem();

    public:
        winrt::hstring Label();

        void Label(winrt::hstring const&);

    private:
        winrt::hstring label{};

    public:
        hstring Value();

        void Value(winrt::hstring const&);

    private:
        winrt::hstring value{};

    public:
        winrt::hstring Item();

    private:
        winrt::hstring item{};

    public:
        WFITT::IObservableVector<winrt::hstring> ItemList();

        void ItemList(WFITT::IObservableVector<winrt::hstring> const&);

    private:
        WFITT::IObservableVector<winrt::hstring> item_list{ winrt::single_threaded_observable_vector<hstring>() };

    public:
        void Editable(bool const&);

        bool Editable();

    private:
        bool editable{ false };

    public:
        winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

        void PropertyChanged(winrt::event_token const&) noexcept;

    private:
        winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct UserFilterItem : UserFilterItemT<UserFilterItem, implementation::UserFilterItem>
    {
    };
}
