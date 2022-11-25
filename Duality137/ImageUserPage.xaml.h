#pragma once

#include "ImageUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ImageUserPage : ImageUserPageT<ImageUserPage>
    {
    public:
        ImageUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ImageUserPage : ImageUserPageT<ImageUserPage, implementation::ImageUserPage>
    {

    };

}
