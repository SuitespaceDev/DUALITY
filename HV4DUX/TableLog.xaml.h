#pragma once

#include "TableLog.g.h"

namespace winrt::HV4DUX::implementation
{
    struct TableLog : TableLogT<TableLog>
    {
    public:
        TableLog();

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct TableLog : TableLogT<TableLog, implementation::TableLog>
    {
    };
}
