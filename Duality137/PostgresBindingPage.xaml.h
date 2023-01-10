#pragma once

#include "winrt/HV4DX.h"

#include "PostgresBindingPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PostgresBindingPage : PostgresBindingPageT<PostgresBindingPage>
    {
    public:
        PostgresBindingPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PostgresBindingPage : PostgresBindingPageT<PostgresBindingPage, implementation::PostgresBindingPage>
    {

    };

}
