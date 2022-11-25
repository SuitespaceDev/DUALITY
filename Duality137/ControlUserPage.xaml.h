#pragma once

#include "ControlUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ControlUserPage : ControlUserPageT<ControlUserPage>
    {
    public:
        ControlUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ControlUserPage : ControlUserPageT<ControlUserPage, implementation::ControlUserPage>
    {

    };

}
