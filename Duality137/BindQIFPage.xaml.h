#pragma once

#include "winrt/HV4DX.h"

#include "BindQIFPage.g.h"

namespace winrt::Duality137::implementation
{
    struct BindQIFPage : BindQIFPageT<BindQIFPage>
    {
    public:
        BindQIFPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct BindQIFPage : BindQIFPageT<BindQIFPage, implementation::BindQIFPage>
    {

    };

}
