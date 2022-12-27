#pragma once

#include "winrt/HV4DX.h"

#include "BindPostgreSQLPage.g.h"

namespace winrt::Duality137::implementation
{
    struct BindPostgreSQLPage : BindPostgreSQLPageT<BindPostgreSQLPage>
    {
    public:
        BindPostgreSQLPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct BindPostgreSQLPage : BindPostgreSQLPageT<BindPostgreSQLPage, implementation::BindPostgreSQLPage>
    {

    };

}
