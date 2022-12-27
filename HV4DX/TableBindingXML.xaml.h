#pragma once

#include "TableBindingXML.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableBindingXML : TableBindingXMLT<TableBindingXML>
    {
    public:
        TableBindingXML();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableBindingXML : TableBindingXMLT<TableBindingXML, implementation::TableBindingXML>
    {
    };
}
