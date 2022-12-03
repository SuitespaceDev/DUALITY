#pragma once

#include "UserVMIterator.g.h"

namespace winrt::HV4DUX::implementation
{
    struct UserVMIterator : UserVMIteratorT<UserVMIterator>
    {
    public:
        UserVMIterator();

    public:
        hstring LabelHVID();

        void LabelHVID(winrt::hstring const&);

    private:
        hstring label_hvid{ L"" };

    public:
        hstring ValueHVID();

        void ValueHVID(winrt::hstring const&);

    private:
        hstring value_hvid{ L"" };

    public:
        hstring LabelType();

        void LabelType(winrt::hstring const&);

    private:
        hstring label_type{ L"" };

    public:
        hstring ValueType();

        void ValueType(winrt::hstring const&);

    private:
        hstring value_type{ L"" };

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct UserVMIterator : UserVMIteratorT<UserVMIterator, implementation::UserVMIterator>
    {
    };
}
