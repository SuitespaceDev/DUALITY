#pragma once

#include "winrt/HV4DX.h"

#include "BindPostgresPage.g.h"

namespace winrt::Duality137::implementation
{
    struct BindPostgresPage : BindPostgresPageT<BindPostgresPage>
    {
    public:
        BindPostgresPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct BindPostgresPage : BindPostgresPageT<BindPostgresPage, implementation::BindPostgresPage>
    {

    };

}
