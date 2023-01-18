#pragma once

#include "TableXamlFile.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableXamlFile : TableXamlFileT<TableXamlFile>
    {
    public:
        TableXamlFile();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableXamlFile : TableXamlFileT<TableXamlFile, implementation::TableXamlFile>
    {
    };
}
