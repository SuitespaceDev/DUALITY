#pragma once

#include "UserMMM.g.h"

namespace winrt::HV4DX::implementation
{
    struct UserMMM : UserMMMT<UserMMM>
    {
    public:
        UserMMM();

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
    struct UserMMM : UserMMMT<UserMMM, implementation::UserMMM>
    {
    };
}
