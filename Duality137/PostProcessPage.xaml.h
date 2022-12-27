#pragma once

#include "winrt/HV4DX.h"

#include "PostProcessPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PostProcessPage : PostProcessPageT<PostProcessPage>
    {
    public:
        PostProcessPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PostProcessPage : PostProcessPageT<PostProcessPage, implementation::PostProcessPage>
    {

    };

}
