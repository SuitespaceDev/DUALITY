#pragma once

#include "TableFuncLibrary.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableFuncLibrary : TableFuncLibraryT<TableFuncLibrary>
    {
    public:
        TableFuncLibrary();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableFuncLibrary : TableFuncLibraryT<TableFuncLibrary, implementation::TableFuncLibrary>
    {
    };
}
