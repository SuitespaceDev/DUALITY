#pragma once

#include "TableXamlResource.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableXamlResource : TableXamlResourceT<TableXamlResource>
    {
    public:
        TableXamlResource();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableXamlResource : TableXamlResourceT<TableXamlResource, implementation::TableXamlResource>
    {
    };
}
