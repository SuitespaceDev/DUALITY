#pragma once

#include "ControlUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct ControlUserPage : ControlUserPageT<ControlUserPage>
    {
    public:
        ControlUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct ControlUserPage : ControlUserPageT<ControlUserPage, implementation::ControlUserPage>
    {

    };

}
