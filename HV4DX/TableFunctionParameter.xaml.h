#pragma once

#include "TableFunctionParameter.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableFunctionParameter : TableFunctionParameterT<TableFunctionParameter>
    {
    public:
        TableFunctionParameter();

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableFunctionParameter : TableFunctionParameterT<TableFunctionParameter, implementation::TableFunctionParameter>
    {
    };
}
