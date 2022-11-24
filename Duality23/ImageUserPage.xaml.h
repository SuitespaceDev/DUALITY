#pragma once

#include "ImageUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct ImageUserPage : ImageUserPageT<ImageUserPage>
    {
    public:
        ImageUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct ImageUserPage : ImageUserPageT<ImageUserPage, implementation::ImageUserPage>
    {

    };

}
