#pragma once

#include "AsyncUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct AsyncUserPage : AsyncUserPageT<AsyncUserPage>
    {
    public:
        AsyncUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct AsyncUserPage : AsyncUserPageT<AsyncUserPage, implementation::AsyncUserPage>
    {

    };

}
