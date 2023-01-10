#pragma once

#include "winrt/HV4DX.h"

#include "QIFBindingPage.g.h"

namespace winrt::Duality137::implementation
{
    struct QIFBindingPage : QIFBindingPageT<QIFBindingPage>
    {
    public:
        QIFBindingPage();


    };
}

namespace winrt::Duality137::factory_implementation
{
    struct QIFBindingPage : QIFBindingPageT<QIFBindingPage, implementation::QIFBindingPage>
    {

    };

}
