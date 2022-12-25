#include "pch.h"
#include "TableAccountNew.xaml.h"
#if __has_include("TableAccountNew.g.cpp")
#include "TableAccountNew.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableAccountNew::TableAccountNew()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableAccountNew::ValueKey()
    {
        return value_key;

    }

    void TableAccountNew::ValueKey(winrt::hstring const& e)
    {
        value_key = e;

        return;

    }

    void TableAccountNew::SelectDefaultFromTables(winrt::hstring const& e)
    {




        return;

    }

}
