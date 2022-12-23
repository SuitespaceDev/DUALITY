#include "pch.h"
#include "TableAccount.xaml.h"
#if __has_include("TableAccount.g.cpp")
#include "TableAccount.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableAccount::TableAccount()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableAccount::TableKey()
    {
        return table_key;

    }

    void TableAccount::SelectDefaultFromTables(winrt::hstring const& e)
    {




        return;

    }

}
