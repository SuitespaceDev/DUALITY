#pragma once

#include "winrt/HV4DX.h"

#include "ConnectionPostgresPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ConnectionPostgresPage : ConnectionPostgresPageT<ConnectionPostgresPage>
    {
    public:
        ConnectionPostgresPage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct ConnectionPostgresPage : ConnectionPostgresPageT<ConnectionPostgresPage, implementation::ConnectionPostgresPage>
    {
    };
}
