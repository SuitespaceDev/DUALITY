#pragma once

#include "DebugUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct DebugUserPage : DebugUserPageT<DebugUserPage>
    {
    public:
        DebugUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct DebugUserPage : DebugUserPageT<DebugUserPage, implementation::DebugUserPage>
    {

    };

}