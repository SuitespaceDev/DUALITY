﻿#pragma once

#include "winrt/HV4DX.h"

#include "RandomMemoryPage.g.h"

namespace winrt::Duality137::implementation
{
    struct RandomMemoryPage : RandomMemoryPageT<RandomMemoryPage>
    {
        RandomMemoryPage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct RandomMemoryPage : RandomMemoryPageT<RandomMemoryPage, implementation::RandomMemoryPage>
    {
    };
}
