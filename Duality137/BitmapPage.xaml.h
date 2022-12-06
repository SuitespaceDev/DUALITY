#pragma once

#include "BitmapPage.g.h"

namespace winrt::Duality137::implementation
{
    struct BitmapPage : BitmapPageT<BitmapPage>
    {
    public:
        BitmapPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct BitmapPage : BitmapPageT<BitmapPage, implementation::BitmapPage>
    {

    };

}
