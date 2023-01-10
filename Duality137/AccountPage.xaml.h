#pragma once

#include "winrt/HV4DX.h"

#include "AccountPage.g.h"

namespace winrt::Duality137::implementation
{
    struct AccountPage : AccountPageT<AccountPage>
    {
    public:
        AccountPage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct AccountPage : AccountPageT<AccountPage, implementation::AccountPage>
    {
    };
}
