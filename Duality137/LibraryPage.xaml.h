#pragma once

#include "winrt/HV4DX.h"

#include "LibraryPage.g.h"

namespace winrt::Duality137::implementation
{
    struct LibraryPage : LibraryPageT<LibraryPage>
    {
    public:
        LibraryPage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct LibraryPage : LibraryPageT<LibraryPage, implementation::LibraryPage>
    {
    };
}
