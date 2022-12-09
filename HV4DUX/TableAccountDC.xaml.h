#pragma once

#include "TableAccountDC.g.h"

namespace winrt::HV4DUX::implementation
{
    struct TableAccountDC : TableAccountDCT<TableAccountDC>
    {
    public:
        TableAccountDC();

    };
}

namespace winrt::HV4DUX::factory_implementation
{
    struct TableAccountDC : TableAccountDCT<TableAccountDC, implementation::TableAccountDC>
    {
    };
}
