#pragma once

namespace WF = winrt::Windows::Foundation;

namespace MUX = winrt::Microsoft::UI::Xaml;

#include "UserVMDebug.g.h"

namespace winrt::Duality137::implementation
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
        hstring LabelHVID() { return label_hvid; }

        void LabelHVID(hstring e) { label_hvid = e; }

    private:
        hstring label_hvid{ L"" };

    public:
        hstring ValueHVID() { return value_hvid; }

        void ValueHVID(hstring e) { value_hvid = e; }

    private:
        hstring value_hvid{ L"" };

    public:
        hstring LabelType() { return label_type; }

        void LabelType(hstring e) { label_type = e; }

    private:
        hstring label_type{ L"" };

    public:
        hstring ValueType() { return value_type; }

        void ValueType(hstring e) { value_type = e; }

    private:
        hstring value_type{ L"" };

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct UserVMDebug : UserVMDebugT<UserVMDebug, implementation::UserVMDebug>
    {
    };
}
