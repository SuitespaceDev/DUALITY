#pragma once

#include "BitmapUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct BitmapUserPage : BitmapUserPageT<BitmapUserPage>
    {
    public:
        BitmapUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct BitmapUserPage : BitmapUserPageT<BitmapUserPage, implementation::BitmapUserPage>
    {

    };

}
