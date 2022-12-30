#pragma once

#include "TablePipe.g.h"

namespace winrt::HV4DX::implementation
{
    struct TablePipe : TablePipeT<TablePipe>
    {
    public:
        TablePipe();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TablePipe : TablePipeT<TablePipe, implementation::TablePipe>
    {
    };
}
