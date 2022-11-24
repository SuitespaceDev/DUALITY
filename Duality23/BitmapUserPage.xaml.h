#pragma once

#include "BitmapUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct BitmapUserPage : BitmapUserPageT<BitmapUserPage>
    {
    public:
        BitmapUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct BitmapUserPage : BitmapUserPageT<BitmapUserPage, implementation::BitmapUserPage>
    {

    };

}
