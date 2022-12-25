#pragma once

#include "TableImage.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableImage : TableImageT<TableImage>
    {
    public:
        TableImage();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableImage : TableImageT<TableImage, implementation::TableImage>
    {
    };
}
