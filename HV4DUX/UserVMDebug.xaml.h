#pragma once

#include "UserVMDebug.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;

namespace winrt::HV4DUX::implementation
{
    struct UserVMDebug : UserVMDebugT<UserVMDebug>
    {
    public:
        UserVMDebug();

    public:
        void UserVMDebugLoaded(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    private:
        void LoadGuidScan();

        void LoadTimeFilter();

        void LoadTypeFilter();

    public:
        hstring LabelHVID();

        void LabelHVID(winrt::hstring const&);

    private:
        hstring label_hvid{ L"" };

    public:
        hstring ValueHVID();

        void ValueHVID(winrt::hstring const&);

    private:
        hstring value_hvid{ L"" };

    public:
        hstring LabelType();

        void LabelType(winrt::hstring const&);

    private:
        hstring label_type{ L"" };

    public:
        hstring ValueType();

        void ValueType(winrt::hstring const&);

    private:
        hstring value_type{ L"" };

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct UserVMDebug : UserVMDebugT<UserVMDebug, implementation::UserVMDebug>
    {
    };
}
