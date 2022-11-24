#pragma once

#include "DatacenterAccountUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct DatacenterAccountUserPage : DatacenterAccountUserPageT<DatacenterAccountUserPage>
    {
    public:
        DatacenterAccountUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct DatacenterAccountUserPage : DatacenterAccountUserPageT<DatacenterAccountUserPage, implementation::DatacenterAccountUserPage>
    {

    };

}
