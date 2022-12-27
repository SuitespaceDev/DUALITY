#include "pch.h"
#include "TableDescription.xaml.h"
#if __has_include("TableDescription.g.cpp")
#include "TableDescription.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableDescription::TableDescription()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableDescription::ValueKey()
    {
        return value_key;

    }

    void TableDescription::ValueKey(winrt::hstring const& e)
    {
        value_key = e;

        return;

    }

    void TableDescription::SelectDefaultFromTables(winrt::hstring const& e)
    {




        return;

    }

}
