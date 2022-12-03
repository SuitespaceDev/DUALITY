#pragma once

#include "UserFile.g.h"

namespace winrt::HV4DUX::implementation
{
    struct UserFile : UserFileT<UserFile>
    {
    public:
        UserFile();

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

    public:
        winrt::hstring Placeholder();

        void Placeholder(winrt::hstring const&);

    private:
        winrt::hstring placeholder{};

    };
}

namespace winrt::HV4DUX::factory_implementation
{
    struct UserFile : UserFileT<UserFile, implementation::UserFile>
    {
    };
}
