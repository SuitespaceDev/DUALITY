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

    winrt::hstring TableAccountNew::TableKey()
    {
        return table_key;

    }

    void TableAccountNew::SelectDefaultFromTables(winrt::hstring const& e)
    {




        return;

    }

}
