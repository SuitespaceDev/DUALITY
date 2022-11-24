#pragma once

#include "ParameterUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct ParameterUserPage : ParameterUserPageT<ParameterUserPage>
    {
    public:
        ParameterUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct ParameterUserPage : ParameterUserPageT<ParameterUserPage, implementation::ParameterUserPage>
    {

    };

}
