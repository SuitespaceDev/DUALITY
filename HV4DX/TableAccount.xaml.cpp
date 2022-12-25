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

    winrt::hstring TableAccount::ValueKey()
    {
        return value_key;

    }

    void TableAccount::ValueKey(winrt::hstring const& e)
    {
        value_key = e;

        return;

    }

    void TableAccount::SelectDefaultFromTables(winrt::hstring const& e)
    {




        return;

    }

}
