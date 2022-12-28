#pragma once

#include "winrt/HV4DX.h"

#include "EventPage.g.h"

namespace winrt::Duality137::implementation
{
    struct EventPage : EventPageT<EventPage>
    {
    public:
        EventPage();

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct EventPage : EventPageT<EventPage, implementation::EventPage>
    {
    };
}
