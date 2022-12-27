#pragma once

#include "winrt/HV4DX.h"

#include "SoftDrivePage.g.h"

namespace winrt::Duality137::implementation
{
    struct SoftDrivePage : SoftDrivePageT<SoftDrivePage>
    {
    public:
        SoftDrivePage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct SoftDrivePage : SoftDrivePageT<SoftDrivePage, implementation::SoftDrivePage>
    {

    };

}
