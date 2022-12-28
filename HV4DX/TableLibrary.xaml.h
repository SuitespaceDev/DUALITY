#pragma once

#include "TableLibrary.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableLibrary : TableLibraryT<TableLibrary>
    {
    public:
        TableLibrary();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableLibrary : TableLibraryT<TableLibrary, implementation::TableLibrary>
    {
    };
}
