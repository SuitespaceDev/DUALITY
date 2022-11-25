#pragma once

#include "PersistBinaryUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PersistBinaryUserPage : PersistBinaryUserPageT<PersistBinaryUserPage>
    {
    public:
        PersistBinaryUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PersistBinaryUserPage : PersistBinaryUserPageT<PersistBinaryUserPage, implementation::PersistBinaryUserPage>
    {

    };

}
