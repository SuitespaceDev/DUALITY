#pragma once

#include "DrivePage.g.h"

namespace winrt::Duality137::implementation
{
    struct DrivePage : DrivePageT<DrivePage>
    {
    public:
        DrivePage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct DrivePage : DrivePageT<DrivePage, implementation::DrivePage>
    {

    };

}
