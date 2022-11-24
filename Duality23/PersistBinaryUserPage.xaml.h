#pragma once

#include "PersistBinaryUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct PersistBinaryUserPage : PersistBinaryUserPageT<PersistBinaryUserPage>
    {
    public:
        PersistBinaryUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct PersistBinaryUserPage : PersistBinaryUserPageT<PersistBinaryUserPage, implementation::PersistBinaryUserPage>
    {

    };

}
