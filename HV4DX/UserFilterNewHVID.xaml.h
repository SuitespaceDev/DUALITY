#pragma once

#include "UserFilterNewHVID.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXD      = winrt::Microsoft::UI::Xaml::Data;

namespace winrt::HV4DX::implementation
{
    struct UserFilterNewHVID : UserFilterNewHVIDT<UserFilterNewHVID>
    {
    public:
        UserFilterNewHVID();

        void Label(winrt::hstring const&);

    public:
        winrt::hstring Label();

    private:
        winrt::hstring label{};

    public:
        int32_t SelectedItem();

        void SelectedItem(int32_t const&);

        void NextItem(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void PreviousItem(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        int32_t selected_item{};

    public:
        WFITT::IObservableVector<winrt::hstring> ItemList();

        void NewItem(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void DeleteItem(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        WFITT::IObservableVector<winrt::hstring> item_list{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

        void PropertyChanged(winrt::event_token const&) noexcept;

    private:
        winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct UserFilterNewHVID : UserFilterNewHVIDT<UserFilterNewHVID, implementation::UserFilterNewHVID>
    {
    };
}
