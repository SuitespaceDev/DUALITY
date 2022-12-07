#pragma once

#include "TableMouse.g.h"

namespace winrt::HV4DUX::implementation
{
    struct TableMouse : TableMouseT<TableMouse>
    {
    public:
        TableMouse();

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct TableMouse : TableMouseT<TableMouse, implementation::TableMouse>
    {
    };
}
