#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\source\\DUALITY\\x64\\debug\\CHV4DTBASIC.lib")

#include "../CHV4DTBASIC/CHV4DMMDDYYYY.h"

#include "UserFilterTime.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXD      = winrt::Microsoft::UI::Xaml::Data;
namespace CTBASE    = CHV4D::CHV4DTBASIC;

namespace winrt::HV4DX::implementation
{
    struct UserFilterTime : UserFilterTimeT<UserFilterTime>
    {
    public:
        UserFilterTime();

    private:
        void LoadMMM();

        void LoadDD();

        void LoadYYYY();

        void LoadHH();

        void LoadMM();

        void LoadSS();

        void LoadOP();

    public:
        winrt::hstring Label();

    private:
        winrt::hstring label{};

    public:
        WFITT::IObservableVector<winrt::hstring> Months();

    private:
        WFITT::IObservableVector<winrt::hstring> months{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        void NextMonth(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void PreviousMonth(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        uint32_t SelectedMonth();

        void SelectedMonth(uint32_t const&);

    private:
        uint32_t selected_month{};

    public:
        WFITT::IObservableVector<winrt::hstring> Days();

    private:
        WFITT::IObservableVector<winrt::hstring> days{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        void NextDay(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void PreviousDay(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        uint32_t SelectedDay();

        void SelectedDay(uint32_t const&);

    private:
        uint32_t selected_day{};

    public:
        WFITT::IObservableVector<winrt::hstring> Years();

    private:
        WFITT::IObservableVector<winrt::hstring> years{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        void NextYear(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void PreviousYear(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        uint32_t SelectedYear();

        void SelectedYear(uint32_t const&);

    private:
        uint32_t selected_year{};

    public:
        WFITT::IObservableVector<winrt::hstring> Hours();

    private:
        WFITT::IObservableVector<winrt::hstring> hours{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        void NextHour(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void PreviousHour(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        uint32_t SelectedHour();

        void SelectedHour(uint32_t const&);

    private:
        uint32_t selected_hour{};

    public:
        WFITT::IObservableVector<winrt::hstring> Minutes();

    private:
        WFITT::IObservableVector<winrt::hstring> minutes{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        void NextMinute(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void PreviousMinute(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        uint32_t SelectedMinute();

        void SelectedMinute(uint32_t const&);

    private:
        uint32_t selected_minute{};

    public:
        WFITT::IObservableVector<winrt::hstring> Seconds();

    private:
        WFITT::IObservableVector<winrt::hstring> seconds{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        void NextSecond(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void PreviousSecond(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        uint32_t SelectedSecond();

        void SelectedSecond(uint32_t const&);

    private:
        uint32_t selected_second{};

    public:
        WFITT::IObservableVector<winrt::hstring> Operators();

    private:
        WFITT::IObservableVector<winrt::hstring> operators{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        void NextOperator(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        void PreviousOperator(WF::IInspectable const&, MUX::RoutedEventArgs const&);

        uint32_t SelectedOperator();

        void SelectedOperator(uint32_t const&);

    private:
        uint32_t selected_operator{};

    public:
        winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

        void PropertyChanged(winrt::event_token const&) noexcept;

    private:
        winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct UserFilterTime : UserFilterTimeT<UserFilterTime, implementation::UserFilterTime>
    {
    };
}
