#pragma once

#include "TableTNode.g.h"

namespace winrt::HV4DUX::implementation
{
    struct TableTNode : TableTNodeT<TableTNode>
    {
    public:
        TableTNode();

    public:
        hstring LabelHVID();

        void LabelHVID(winrt::hstring const&);

    private:
        hstring label_hvid{ L"" };

    public:
        hstring ValueHVID();

        void ValueHVID(winrt::hstring const&);

    private:
        hstring value_hvid{ L"{XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX}" };

    public:
        hstring LabelMMM();

        void LabelMMM(winrt::hstring const&);

    private:
        hstring label_mmm{ L"" };

    public:
        hstring ValueMMM();

        void ValueMMM(winrt::hstring const&);

    private:
        hstring value_mmm{ L"1.000.001" };

    public:
        hstring LabelName();

        void LabelName(winrt::hstring const&);

    private:
        hstring label_name{ L"" };

    public:
        hstring ValueName();

        void ValueName(winrt::hstring const&);

    private:
        hstring value_name{ L". . ." };

    public:
        hstring LabelCreatedDate();

        void LabelCreatedDate(winrt::hstring const&);

    private:
        hstring label_created_date{ L"" };

    public:
        hstring ValueCreatedDate();

        void ValueCreatedDate(winrt::hstring const&);

    private:
        hstring value_created_date{ L"MM.DD.YYYY" };

    public:
        hstring LabelCreatedTime();

        void LabelCreatedTime(winrt::hstring const&);

    private:
        hstring label_created_time{ L"" };

    public:
        hstring ValueCreatedTime();

        void ValueCreatedTime(winrt::hstring const&);

    private:
        hstring value_created_time{ L"HH:MM:SS" };

    public:
        hstring LabelSavedDate();

        void LabelSavedDate(winrt::hstring const&);

    private:
        hstring label_saved_date{ L"" };

    public:
        hstring ValueSavedDate();

        void ValueSavedDate(winrt::hstring const&);

    private:
        hstring value_saved_date{ L"MM.DD.YYYY" };

    public:
        hstring LabelSavedTime();

        void LabelSavedTime(winrt::hstring const&);

    private:
        hstring label_saved_time{ L"" };

    public:
        hstring ValueSavedTime();

        void ValueSavedTime(winrt::hstring const&);

    private:
        hstring value_saved_time{ L"HH:MM:SS" };

    public:
        hstring LabelOpenedDate();

        void LabelOpenedDate(winrt::hstring const&);

    private:
        hstring label_opened_date{ L"" };

    public:
        hstring ValueOpenedDate();

        void ValueOpenedDate(winrt::hstring const&);

    private:
        hstring value_opened_date{ L"MM.DD.YYYY" };

    public:
        hstring LabelOpenedTime();

        void LabelOpenedTime(winrt::hstring const&);

    private:
        hstring label_opened_time{ L"" };

    public:
        hstring ValueOpenedTime();

        void ValueOpenedTime(winrt::hstring const&);

    private:
        hstring value_opened_time{ L"HH:MM:SS" };

    };

}

namespace winrt::HV4DUX::factory_implementation
{
    struct TableTNode : TableTNodeT<TableTNode, implementation::TableTNode>
    {
    };
}
