#pragma once

#include "TableDebug.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableDebug : TableDebugT<TableDebug>
    {
    public:
        TableDebug();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableDebug : TableDebugT<TableDebug, implementation::TableDebug>
    {
    };
}
