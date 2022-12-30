#pragma once

#include "TableBitmap.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableBitmap : TableBitmapT<TableBitmap>
    {
    public:
        TableBitmap();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableBitmap : TableBitmapT<TableBitmap, implementation::TableBitmap>
    {
    };
}
