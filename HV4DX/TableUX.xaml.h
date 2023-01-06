#pragma once

#include "TableUX.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableUX : TableUXT<TableUX>
    {
    public:
        TableUX();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableUX : TableUXT<TableUX, implementation::TableUX>
    {
    };
}
