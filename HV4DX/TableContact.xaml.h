#pragma once

#include "TableContact.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableContact : TableContactT<TableContact>
    {
    public:
        TableContact();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableContact : TableContactT<TableContact, implementation::TableContact>
    {
    };
}
