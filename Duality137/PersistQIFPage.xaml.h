#pragma once

#include "PersistQIFPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PersistQIFPage : PersistQIFPageT<PersistQIFPage>
    {
    public:
        PersistQIFPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PersistQIFPage : PersistQIFPageT<PersistQIFPage, implementation::PersistQIFPage>
    {

    };

}
