#pragma once

#include "winrt/HV4DX.h"

#include "StoragePage.g.h"

namespace winrt::Duality137::implementation
{
    struct StoragePage : StoragePageT<StoragePage>
    {
    public:
        StoragePage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct StoragePage : StoragePageT<StoragePage, implementation::StoragePage>
    {

    };

}
