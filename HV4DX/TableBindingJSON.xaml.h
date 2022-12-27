#pragma once

#include "TableBindingJSON.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableBindingJSON : TableBindingJSONT<TableBindingJSON>
    {
    public:
        TableBindingJSON();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableBindingJSON : TableBindingJSONT<TableBindingJSON, implementation::TableBindingJSON>
    {
    };
}
