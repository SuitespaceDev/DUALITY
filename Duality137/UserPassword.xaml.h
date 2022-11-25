#pragma once

#include "UserPassword.g.h"

namespace winrt::Duality137::implementation
{
    struct UserPassword : UserPasswordT<UserPassword>
    {
    public:
        UserPassword();

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

namespace winrt::Duality137::factory_implementation
{
    struct UserPassword : UserPasswordT<UserPassword, implementation::UserPassword>
    {
    };
}
