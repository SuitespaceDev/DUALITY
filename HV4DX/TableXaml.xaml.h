#pragma once

#include "TableXaml.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableXaml : TableXamlT<TableXaml>
    {
    public:
        TableXaml();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableXaml : TableXamlT<TableXaml, implementation::TableXaml>
    {
    };
}
