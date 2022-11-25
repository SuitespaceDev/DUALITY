#pragma once

#include "DatacenterAccountUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct DatacenterAccountUserPage : DatacenterAccountUserPageT<DatacenterAccountUserPage>
    {
    public:
        DatacenterAccountUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct DatacenterAccountUserPage : DatacenterAccountUserPageT<DatacenterAccountUserPage, implementation::DatacenterAccountUserPage>
    {

    };

}
