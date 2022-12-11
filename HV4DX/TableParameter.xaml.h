#pragma once

#include "TableParameter.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableParameter : TableParameterT<TableParameter>
    {
    public:
        TableParameter();

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableParameter : TableParameterT<TableParameter, implementation::TableParameter>
    {
    };
}
