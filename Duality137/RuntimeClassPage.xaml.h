#pragma once

#include "RuntimeClassPage.g.h"

namespace winrt::Duality137::implementation
{
    struct RuntimeClassPage : RuntimeClassPageT<RuntimeClassPage>
    {
    public:
        RuntimeClassPage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct RuntimeClassPage : RuntimeClassPageT<RuntimeClassPage, implementation::RuntimeClassPage>
    {
    };
}
