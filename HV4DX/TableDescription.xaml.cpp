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

    winrt::hstring TableDescription::TableDescriptionHVID()
    {
        return table_description_hvid;

    }

    void TableDescription::TableDescriptionHVID(winrt::hstring const& e)
    {
        table_description_hvid = e;

        return;

    }

    void TableDescription::SelectDefaultFromTables(winrt::hstring const& e)
    {




        return;

    }

}
