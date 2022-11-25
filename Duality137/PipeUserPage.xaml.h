#pragma once

#include "PipeUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PipeUserPage : PipeUserPageT<PipeUserPage>
    {
    public:
        PipeUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PipeUserPage : PipeUserPageT<PipeUserPage, implementation::PipeUserPage>
    {

    };

}
