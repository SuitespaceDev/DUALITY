#pragma once

#include "ShellPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ShellPage : ShellPageT<ShellPage>
    {
    public:
        ShellPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ShellPage : ShellPageT<ShellPage, implementation::ShellPage>
    {

    };

}
