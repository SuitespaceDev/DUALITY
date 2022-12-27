#pragma once

#include "TableBindingXAML.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableBindingXAML : TableBindingXAMLT<TableBindingXAML>
    {
    public:
        TableBindingXAML();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableBindingXAML : TableBindingXAMLT<TableBindingXAML, implementation::TableBindingXAML>
    {
    };
}
