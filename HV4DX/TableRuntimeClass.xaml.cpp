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

    winrt::hstring TableRuntimeClass::ValueKey()
    {
        return value_key;

    }

    void TableRuntimeClass::ValueKey(winrt::hstring const& e)
    {
        value_key = e;

        return;

    }

    void TableRuntimeClass::SelectDefaultFromTables(winrt::hstring const& e)
    {




        return;

    }

}
