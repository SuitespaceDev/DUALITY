﻿#pragma once

#include "TablePrompt.g.h"

namespace winrt::HV4DX::implementation
{
    struct TablePrompt : TablePromptT<TablePrompt>
    {
    public:
        TablePrompt();

    public:
        void SelectDefaultFromTables(winrt::hstring const&);

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TablePrompt : TablePromptT<TablePrompt, implementation::TablePrompt>
    {
    };
}
