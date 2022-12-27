#pragma once

#include "winrt/HV4DX.h"

#include "ContractPage.g.h"

namespace winrt::Duality137::implementation
{
    struct ContractPage : ContractPageT<ContractPage>
    {
    public:
        ContractPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct ContractPage : ContractPageT<ContractPage, implementation::ContractPage>
    {

    };

}
