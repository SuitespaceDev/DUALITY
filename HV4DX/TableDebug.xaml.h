#pragma once

#include "TableDebug.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableDebug : TableDebugT<TableDebug>
    {
    public:
        TableDebug();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableDebug : TableDebugT<TableDebug, implementation::TableDebug>
    {
    };
}
