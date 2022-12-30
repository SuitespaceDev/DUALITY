#pragma once

#include "TableShell.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableShell : TableShellT<TableShell>
    {
    public:
        TableShell();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableShell : TableShellT<TableShell, implementation::TableShell>
    {
    };
}
