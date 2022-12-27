#include "pch.h"
#include "TableKey.xaml.h"
#if __has_include("TableKey.g.cpp")
#include "TableKey.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableKey::TableKey()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableKey::ValueKey()
    {
        return value_key;

    }

    void TableKey::ValueKey(winrt::hstring const& e)
    {
        value_key = e;

        return;

    }

    void TableKey::SelectDefaultFromTables(winrt::hstring const& e)
    {




        return;

    }

}
