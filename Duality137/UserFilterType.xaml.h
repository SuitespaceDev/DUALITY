#pragma once

#include "UserFilterType.g.h"

namespace WF = winrt::Windows::Foundation;

namespace WFITT = winrt::Windows::Foundation::Collections;

namespace MUX = winrt::Microsoft::UI::Xaml;

namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;

namespace winrt::Duality137::implementation
{
    struct UserFilterType : UserFilterTypeT<UserFilterType>
    {
    public:
        UserFilterType();

    public:
        winrt::hstring Label() { return label; }

        void Label(winrt::hstring e) { label = e; }

    private:
        winrt::hstring label{};

    public:
        winrt::hstring Value() { return value; }

        void Value(winrt::hstring e) { value = e; }

    private:
        winrt::hstring value{};

    public:
        WFITT::IObservableVector<Duality137::UserMSelectable> FilterList();

        void FilterList(WFITT::IObservableVector<Duality137::UserMSelectable> const&);

    private:
        WFITT::IObservableVector<Duality137::UserMSelectable> filter_list{ winrt::single_threaded_observable_vector<Duality137::UserMSelectable>() };

    public:
        Duality137::UserMSelectable MultiFilterState() { return multi_filter_state; }

        void MultiFilterState(Duality137::UserMSelectable e) { multi_filter_state = e; }

    private:
        Duality137::UserMSelectable multi_filter_state{ L"All" };

    public:
        winrt::event_token FilterUpdate(WF::EventHandler<hstring> const&);

        void FilterUpdate(winrt::event_token const&) noexcept;

    private:
        winrt::event<WF::EventHandler<hstring>> filter_update;

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct UserFilterType : UserFilterTypeT<UserFilterType, implementation::UserFilterType>
    {
    };
}
