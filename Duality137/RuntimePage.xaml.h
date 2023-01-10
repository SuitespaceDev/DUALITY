#pragma once

#include "winrt/HV4DX.h"

#include "RuntimePage.g.h"

namespace winrt::Duality137::implementation
{
    struct RuntimePage : RuntimePageT<RuntimePage>
    {
    public:
        RuntimePage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct RuntimePage : RuntimePageT<RuntimePage, implementation::RuntimePage>
    {
    };
}
