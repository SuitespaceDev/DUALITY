#pragma once

#include "UserBlock.g.h"

namespace winrt::HV4DX::implementation
{
    struct UserBlock : UserBlockT<UserBlock>
    {
    public:
        UserBlock();

    public:
        winrt::hstring Label();

        void Label(winrt::hstring const&);

    private:
        winrt::hstring label{};

    public:
        winrt::hstring Value();

        void Value(winrt::hstring const&);

    private:
        winrt::hstring value{};

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct UserBlock : UserBlockT<UserBlock, implementation::UserBlock>
    {
    };
}
