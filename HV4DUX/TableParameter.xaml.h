#pragma once

#include "TableParameter.g.h"

namespace winrt::HV4DUX::implementation
{
    struct TableParameter : TableParameterT<TableParameter>
    {
    public:
        TableParameter();

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct TableParameter : TableParameterT<TableParameter, implementation::TableParameter>
    {
    };
}
