#pragma once

#include "TableIterator.g.h"

namespace winrt::HV4DUX::implementation
{
    struct TableIterator : TableIteratorT<TableIterator>
    {
    public:
        TableIterator();

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
    struct TableIterator : TableIteratorT<TableIterator, implementation::TableIterator>
    {
    };
}
