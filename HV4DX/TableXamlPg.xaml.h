#pragma once

#include "TableXamlPg.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableXamlPg : TableXamlPgT<TableXamlPg>
    {
    public:
        TableXamlPg();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableXamlPg : TableXamlPgT<TableXamlPg, implementation::TableXamlPg>
    {
    };
}
