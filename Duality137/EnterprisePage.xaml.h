#pragma once

#include "winrt/HV4DX.h"

#include "EnterprisePage.g.h"

namespace winrt::Duality137::implementation
{
    struct EnterprisePage : EnterprisePageT<EnterprisePage>
    {
    public:
        EnterprisePage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct EnterprisePage : EnterprisePageT<EnterprisePage, implementation::EnterprisePage>
    {

    };

}
