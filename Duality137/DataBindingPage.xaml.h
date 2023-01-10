#pragma once

#include "winrt/HV4DX.h"

#include "DataBindingPage.g.h"

namespace winrt::Duality137::implementation
{
    struct DataBindingPage : DataBindingPageT<DataBindingPage>
    {
    public:
        DataBindingPage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct DataBindingPage : DataBindingPageT<DataBindingPage, implementation::DataBindingPage>
    {
    };
}
