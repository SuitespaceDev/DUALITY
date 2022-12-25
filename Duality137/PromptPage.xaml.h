#pragma once

#include "winrt/HV4DX.h"

#include "PromptPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PromptPage : PromptPageT<PromptPage>
    {
    public:
        PromptPage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct PromptPage : PromptPageT<PromptPage, implementation::PromptPage>
    {
    };
}
