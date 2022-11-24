#pragma once

#include "USBUserPage.g.h"

namespace winrt::Duality23::implementation
{
    struct USBUserPage : USBUserPageT<USBUserPage>
    {
    public:
        USBUserPage();


    };
}

namespace winrt::Duality23::factory_implementation
{
    struct USBUserPage : USBUserPageT<USBUserPage, implementation::USBUserPage>
    {

    };

}
