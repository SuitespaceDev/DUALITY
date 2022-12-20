#pragma once

#include "TableFuncLibrary.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableFuncLibrary : TableFuncLibraryT<TableFuncLibrary>
    {
    public:
        TableFuncLibrary();

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableFuncLibrary : TableFuncLibraryT<TableFuncLibrary, implementation::TableFuncLibrary>
    {
    };
}
