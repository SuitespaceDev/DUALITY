#pragma once

#include "winrt/HV4DX.h"

#include "AsyncPage.g.h"

namespace winrt::Duality137::implementation
{
    struct AsyncPage : AsyncPageT<AsyncPage>
    {
    public:
        AsyncPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct AsyncPage : AsyncPageT<AsyncPage, implementation::AsyncPage>
    {

    };

}
