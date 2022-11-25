#pragma once

#include "USBUserPage.g.h"

namespace winrt::Duality137::implementation
{
    struct USBUserPage : USBUserPageT<USBUserPage>
    {
    public:
        USBUserPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct USBUserPage : USBUserPageT<USBUserPage, implementation::USBUserPage>
    {

    };

}
