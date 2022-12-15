#pragma once

#include "UserFilterType.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;

namespace winrt::HV4DX::implementation
{
    struct UserFilterType : UserFilterTypeT<UserFilterType>
    {
    public:
        UserFilterType();

    public:
        winrt::hstring Label();

        void Label(winrt::hstring const&);

    private:
        winrt::hstring label{};

    public:
        winrt::hstring Value();

        void Value(winrt::hstring const&);

    private:
        winrt::hstring value{};

    public:
        WFITT::IObservableVector<HV4DX::UserSelectable> FilterList();

        void FilterList(WFITT::IObservableVector<HV4DX::UserSelectable> const&);

    private:
        WFITT::IObservableVector<HV4DX::UserSelectable> filter_list{};

    public:
        HV4DX::UserSelectable MultiFilterState();

        void MultiFilterState(HV4DX::UserSelectable const&);

    private:
        HV4DX::UserSelectable multi_filter_state{};

    public:
        winrt::event_token FilterUpdate(WF::EventHandler<hstring> const&);

        void FilterUpdate(winrt::event_token const&) noexcept;

    private:
        winrt::event<WF::EventHandler<hstring>> filter_update;

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct UserFilterType : UserFilterTypeT<UserFilterType, implementation::UserFilterType>
    {
    };
}
