#pragma once

#include "TableUserControl.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableUserControl : TableUserControlT<TableUserControl>
    {
    public:
        TableUserControl();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableUserControl : TableUserControlT<TableUserControl, implementation::TableUserControl>
    {
    };
}
