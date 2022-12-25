#pragma once

#include "winrt/HV4DX.h"

#include "WindowPage.g.h"

namespace winrt::Duality137::implementation
{
    struct WindowPage : WindowPageT<WindowPage>
    {
    public:
        WindowPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct WindowPage : WindowPageT<WindowPage, implementation::WindowPage>
    {

    };

}
