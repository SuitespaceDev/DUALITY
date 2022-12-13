#include "pch.h"
#include "TableRuntimeClass.xaml.h"
#if __has_include("TableRuntimeClass.g.cpp")
#include "TableRuntimeClass.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableRuntimeClass::TableRuntimeClass()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableRuntimeClass::LabelRTCHVID()
    {
        return label_rtc_hvid;

    }

    void TableRuntimeClass::LabelRTCHVID(winrt::hstring const& e)
    {
        label_rtc_hvid = e;

        return;

    }

    winrt::hstring TableRuntimeClass::ValueRTCHVID()
    {
        return value_rtc_hvid;

    }

    void TableRuntimeClass::ValueRTCHVID(winrt::hstring const& e)
    {
        value_rtc_hvid = e;

        return;

    }

    winrt::hstring TableRuntimeClass::LabelRTCMMM()
    {
        return label_rtc_mmm;

    }

    void TableRuntimeClass::LabelRTCMMM(winrt::hstring const& e)
    {
        label_rtc_mmm = e;

        return;

    }

    winrt::hstring TableRuntimeClass::ValueRTCMIL()
    {
        return value_rtc_mil;

    }

    void TableRuntimeClass::ValueRTCMIL(winrt::hstring const& e)
    {
        value_rtc_mil = e;

        return;

    }

    winrt::hstring TableRuntimeClass::ValueRTCMAJ()
    {
        return value_rtc_maj;

    }

    void TableRuntimeClass::ValueRTCMAJ(winrt::hstring const& e)
    {
        value_rtc_maj = e;

        return;

    }

    winrt::hstring TableRuntimeClass::ValueRTCMIN()
    {
        return value_rtc_min;

    }

    void TableRuntimeClass::ValueRTCMIN(winrt::hstring const& e)
    {
        value_rtc_min = e;

        return;

    }

    winrt::hstring TableRuntimeClass::LabelRTCMaxPath()
    {
        return label_rtc_maxpath;

    }

    void TableRuntimeClass::LabelRTCMaxPath(winrt::hstring const& e)
    {
        label_rtc_maxpath = e;

        return;

    }

    winrt::hstring TableRuntimeClass::ValueRTCMaxPath()
    {
        return value_rtc_maxpath;

    }

    void TableRuntimeClass::ValueRTCMaxPath(winrt::hstring const& e)
    {
        value_rtc_maxpath = e;

        return;

    }

    winrt::hstring TableRuntimeClass::LabelRTCNamespace()
    {
        return label_rtc_namespace;

    }

    void TableRuntimeClass::LabelRTCNamespace(winrt::hstring const& e)
    {
        label_rtc_namespace = e;

        return;

    }

    winrt::hstring TableRuntimeClass::ValueRTCNamespace()
    {
        return value_rtc_namespace;

    }

    void TableRuntimeClass::ValueRTCNamespace(winrt::hstring const& e)
    {
        value_rtc_namespace = e;

        return;

    }

    winrt::hstring TableRuntimeClass::LabelRTC()
    {
        return label_rtc;

    }

    void TableRuntimeClass::LabelRTC(winrt::hstring const& e)
    {
        label_rtc = e;

        return;

    }

    winrt::hstring TableRuntimeClass::ValueRTC()
    {
        return value_rtc;

    }

    void TableRuntimeClass::ValueRTC(winrt::hstring const& e)
    {
        value_rtc = e;

        return;

    }

    winrt::hstring TableRuntimeClass::LabelRTCCompiled()
    {
        return label_rtc_compiled;

    }

    void TableRuntimeClass::LabelRTCCompiled(winrt::hstring const& e)
    {
        label_rtc_compiled = e;

        return;

    }

    winrt::hstring TableRuntimeClass::ValueRTCCompiled()
    {
        return value_rtc_compiled;

    }

    void TableRuntimeClass::ValueRTCCompiled(winrt::hstring const& e)
    {
        value_rtc_compiled = e;

        return;

    }

    winrt::hstring TableRuntimeClass::LabelRTCDLL()
    {
        return label_rtc_dll;

    }

    void TableRuntimeClass::LabelRTCDLL(winrt::hstring const& e)
    {
        label_rtc_dll = e;

        return;

    }

    winrt::hstring TableRuntimeClass::ValueRTCDLL()
    {
        return value_rtc_dll;

    }

    void TableRuntimeClass::ValueRTCDLL(winrt::hstring const& e)
    {
        value_rtc_dll = e;

        return;

    }

}
