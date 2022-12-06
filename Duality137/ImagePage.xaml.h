#pragma once

#include "ImagePage.g.h"

namespace winrt::Duality137::implementation
{
    struct ImagePage : ImagePageT<ImagePage>
    {
    public:
        ImagePage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ImagePage : ImagePageT<ImagePage, implementation::ImagePage>
    {

    };

}
