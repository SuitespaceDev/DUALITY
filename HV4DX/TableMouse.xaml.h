#pragma once

#include "TableMouse.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableMouse : TableMouseT<TableMouse>
    {
    public:
        TableMouse();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableMouse : TableMouseT<TableMouse, implementation::TableMouse>
    {
    };
}
