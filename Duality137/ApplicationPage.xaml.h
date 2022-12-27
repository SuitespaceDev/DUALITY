#pragma once

#include "winrt/HV4DX.h"

#include "ApplicationPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ApplicationPage : ApplicationPageT<ApplicationPage>
    {
    public:
        ApplicationPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ApplicationPage : ApplicationPageT<ApplicationPage, implementation::ApplicationPage>
    {

    };

}
