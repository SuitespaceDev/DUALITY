#pragma once

#include "AsyncUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct AsyncUserPage : AsyncUserPageT<AsyncUserPage>
    {
    public:
        AsyncUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct AsyncUserPage : AsyncUserPageT<AsyncUserPage, implementation::AsyncUserPage>
    {

    };

}
