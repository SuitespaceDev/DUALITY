#pragma once

#include "ParameterUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ParameterUserPage : ParameterUserPageT<ParameterUserPage>
    {
    public:
        ParameterUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ParameterUserPage : ParameterUserPageT<ParameterUserPage, implementation::ParameterUserPage>
    {

    };

}
