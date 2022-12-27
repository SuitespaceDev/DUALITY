#include "pch.h"
#include "TableAccountPort.xaml.h"
#if __has_include("TableAccountPort.g.cpp")
#include "TableAccountPort.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableAccountPort::TableAccountPort()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableAccountPort::ValueKey()
    {
        return value_key;

    }

    void TableAccountPort::ValueKey(winrt::hstring const& e)
    {
        value_key = e;

        return;

    }

    void TableAccountPort::SelectDefaultFromTables(winrt::hstring const& e)
    {




        return;

    }

}
