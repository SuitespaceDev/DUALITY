#pragma once

#include "UserPassword.g.h"

namespace winrt::HV4DX::implementation
{
    struct UserPassword : UserPasswordT<UserPassword>
    {
    public:
        UserPassword();

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
    struct UserPassword : UserPasswordT<UserPassword, implementation::UserPassword>
    {
    };
}
