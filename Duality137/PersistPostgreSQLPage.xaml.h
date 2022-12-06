#pragma once

#include "PersistPostgreSQLPage.g.h"

namespace winrt::Duality137::implementation
{
    struct PersistPostgreSQLPage : PersistPostgreSQLPageT<PersistPostgreSQLPage>
    {
    public:
        PersistPostgreSQLPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct PersistPostgreSQLPage : PersistPostgreSQLPageT<PersistPostgreSQLPage, implementation::PersistPostgreSQLPage>
    {

    };

}
