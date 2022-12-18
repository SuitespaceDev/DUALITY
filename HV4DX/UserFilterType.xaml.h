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
        WFITT::IObservableVector<MUXC::TextBlock> FilterList();

        void FilterList(WFITT::IObservableVector<MUXC::TextBlock> const&);

    private:
        WFITT::IObservableVector<MUXC::TextBlock> filter_list{ winrt::single_threaded_observable_vector<MUXC::TextBlock>() };

    public:
        MUXC::TextBlock FilterType();

        void FilterType(MUXC::TextBlock const&);

    private:
        MUXC::TextBlock filter_type{};

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct UserFilterType : UserFilterTypeT<UserFilterType, implementation::UserFilterType>
    {
    };
}
