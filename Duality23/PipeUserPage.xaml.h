#pragma once

#include "PipeUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct PipeUserPage : PipeUserPageT<PipeUserPage>
    {
    public:
        PipeUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct PipeUserPage : PipeUserPageT<PipeUserPage, implementation::PipeUserPage>
    {

    };

}
