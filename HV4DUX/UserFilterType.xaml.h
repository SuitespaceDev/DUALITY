#pragma once

#include "UserFilterType.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;

namespace winrt::HV4DUX::implementation
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
        WFITT::IObservableVector<HV4DUX::UserMSelectable> FilterList();

        void FilterList(WFITT::IObservableVector<HV4DUX::UserMSelectable> const&);

    private:
        WFITT::IObservableVector<HV4DUX::UserMSelectable> filter_list{};

    public:
        HV4DUX::UserMSelectable MultiFilterState();

        void MultiFilterState(HV4DUX::UserMSelectable const&);

    private:
        HV4DUX::UserMSelectable multi_filter_state{ L"All" };

    public:
        winrt::event_token FilterUpdate(WF::EventHandler<hstring> const&);

        void FilterUpdate(winrt::event_token const&) noexcept;

    private:
        winrt::event<WF::EventHandler<hstring>> filter_update;

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct UserFilterType : UserFilterTypeT<UserFilterType, implementation::UserFilterType>
    {
    };
}
