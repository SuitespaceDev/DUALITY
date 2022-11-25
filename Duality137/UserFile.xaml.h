#pragma once

#include "UserFile.g.h"

namespace winrt::Duality137::implementation
{
    struct UserFile : UserFileT<UserFile>
    {
    public:
        UserFile();

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

    public:
        winrt::hstring Placeholder() { return placeholder; }

        void Placeholder(winrt::hstring e) { placeholder = e; }

    private:
        winrt::hstring placeholder{};

    };
}

namespace winrt::Duality137::factory_implementation
{
    struct UserFile : UserFileT<UserFile, implementation::UserFile>
    {
    };
}
