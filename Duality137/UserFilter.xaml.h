#pragma once

#include "winrt/HV4D.h"

#include "UserFilter.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXD      = winrt::Microsoft::UI::Xaml::Data;

using RETURN = winrt::HV4D::HV4DRETURN;

namespace winrt::Duality137::implementation
{
    struct UserFilter : UserFilterT<UserFilter>
    {
    public:
        UserFilter();

    public:
        void UserFilterLoaded(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    public:
        winrt::hstring Label();

        void Label(winrt::hstring const&);

    private:
        hstring label{};

    public:
        hstring Value();

        void Value(hstring const&);

        void UserFilterUp(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void UserFilterDown(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        std::vector<hstring>::const_iterator citt;

    public:
        winrt::hstring FilterGroup();

        void FilterGroup(winrt::hstring);

    private:
        hstring filter_group{};

    public:
        WFITT::IObservableVector<hstring> FilterList();

        void FilterList(WFITT::IObservableVector<hstring> const&);

    private:
        std::vector<hstring> filter_list{};

    public:
        winrt::event_token FilterEvent(WF::EventHandler<hstring> const&);

        void FilterEvent(winrt::event_token const&) noexcept;

    private:
        winrt::event<WF::EventHandler<hstring>> filter_event;

    public:
        winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

        void PropertyChanged(winrt::event_token const&) noexcept;

    private:
        winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct UserFilter : UserFilterT<UserFilter, implementation::UserFilter>
    {
    };
}
