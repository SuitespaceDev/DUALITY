#pragma once

#include "TableRuntimeClass.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableRuntimeClass : TableRuntimeClassT<TableRuntimeClass>
    {
    public:
        TableRuntimeClass();

    public:
        winrt::hstring LabelRTCHVID();

        void LabelRTCHVID(winrt::hstring const&);

    private:
        winrt::hstring label_rtc_hvid{};

    public:
        winrt::hstring ValueRTCHVID();

        void ValueRTCHVID(winrt::hstring const&);

    private:
        winrt::hstring value_rtc_hvid{};

    public:
        winrt::hstring LabelRTCMMM();

        void LabelRTCMMM(winrt::hstring const&);

    private:
        winrt::hstring label_rtc_mmm{};

    public:
        winrt::hstring ValueRTCMIL();

        void ValueRTCMIL(winrt::hstring const&);

    private:
        winrt::hstring value_rtc_mil{};

    public:
        winrt::hstring ValueRTCMAJ();

        void ValueRTCMAJ(winrt::hstring const&);

    private:
        winrt::hstring value_rtc_maj{};

    public:
        winrt::hstring ValueRTCMIN();

        void ValueRTCMIN(winrt::hstring const&);

    private:
        winrt::hstring value_rtc_min{};

    public:
        winrt::hstring LabelRTCMaxPath();

        void LabelRTCMaxPath(winrt::hstring const&);

    private:
        winrt::hstring label_rtc_maxpath{};

    public:
        winrt::hstring ValueRTCMaxPath();

        void ValueRTCMaxPath(winrt::hstring const&);

    private:
        winrt::hstring value_rtc_maxpath{};

    public:
        winrt::hstring LabelRTCNamespace();

        void LabelRTCNamespace(winrt::hstring const&);

    private:
        winrt::hstring label_rtc_namespace{};

    public:
        winrt::hstring ValueRTCNamespace();

        void ValueRTCNamespace(winrt::hstring const&);

    private:
        winrt::hstring value_rtc_namespace{};

    public:
        winrt::hstring LabelRTC();

        void LabelRTC(winrt::hstring const&);

    private:
        winrt::hstring label_rtc{};

    public:
        winrt::hstring ValueRTC();

        void ValueRTC(winrt::hstring const&);

    private:
        winrt::hstring value_rtc{};

    public:
        winrt::hstring LabelRTCCompiled();

        void LabelRTCCompiled(winrt::hstring const&);

    private:
        winrt::hstring label_rtc_compiled{};

    public:
        winrt::hstring ValueRTCCompiled();

        void ValueRTCCompiled(winrt::hstring const&);

    private:
        winrt::hstring value_rtc_compiled{};

    public:
        winrt::hstring LabelRTCDLL();

        void LabelRTCDLL(winrt::hstring const&);

    private:
        winrt::hstring label_rtc_dll{};

    public:
        winrt::hstring ValueRTCDLL();

        void ValueRTCDLL(winrt::hstring const&);

    private:
        winrt::hstring value_rtc_dll{};

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableRuntimeClass : TableRuntimeClassT<TableRuntimeClass, implementation::TableRuntimeClass>
    {
    };
}
