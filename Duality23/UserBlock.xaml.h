#pragma once

#include "UserBlock.g.h"

namespace winrt::Duality23::implementation
{
    struct UserBlock : UserBlockT<UserBlock>
    {
    public:
        UserBlock();

    public:
        winrt::hstring Label() { return label; }

        void Label(winrt::hstring e) { label = e; }

    private:
        winrt::hstring label{};

    public:
        winrt::hstring Value() { return value; }

        void Value(winrt::hstring e) { value = e; }

    private:
        winrt::hstring value{};

    };
}

namespace winrt::Duality23::factory_implementation
{
    struct UserBlock : UserBlockT<UserBlock, implementation::UserBlock>
    {
    };
}
