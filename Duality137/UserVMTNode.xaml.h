#pragma once

#include "UserVMTNode.g.h"

namespace winrt::Duality137::implementation
{
    struct UserVMTNode : UserVMTNodeT<UserVMTNode>
    {
    public:
        UserVMTNode();

    public:
        hstring LabelHVID() { return label_hvid; }

        void LabelHVID(hstring e) { label_hvid = e; }

    private:
        hstring label_hvid{ L"" };

    public:
        hstring ValueHVID() { return value_hvid; }

        void ValueHVID(hstring e) { value_hvid = e; }

    private:
        hstring value_hvid{ L"{XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX}" };

    public:
        hstring LabelMMM() { return label_mmm; }

        void LabelMMM(hstring e) { label_mmm = e; }

    private:
        hstring label_mmm{ L"" };

    public:
        hstring ValueMMM() { return value_mmm; }

        void ValueMMM(hstring e) { value_mmm = e; }

    private:
        hstring value_mmm{ L"1.000.001" };

    public:
        hstring LabelName() { return label_name; }

        void LabelName(hstring e) { label_name = e; }

    private:
        hstring label_name{ L"" };

    public:
        hstring ValueName() { return value_name; }

        void ValueName(hstring e) { value_name = e; }

    private:
        hstring value_name{ L". . ." };

    public:
        hstring LabelCreatedDate() { return label_created_date; }

        void LabelCreatedDate(hstring e) { label_created_date = e; }

    private:
        hstring label_created_date{ L"" };

    public:
        hstring ValueCreatedDate() { return value_created_date; }

        void ValueCreatedDate(hstring e) { value_created_date = e; }

    private:
        hstring value_created_date{ L"MM.DD.YYYY" };

    public:
        hstring LabelCreatedTime() { return label_created_time; }

        void LabelCreatedTime(hstring e) { label_created_time = e; }

    private:
        hstring label_created_time{ L"" };

    public:
        hstring ValueCreatedTime() { return value_created_time; }

        void ValueCreatedTime(hstring e) { value_created_time = e; }

    private:
        hstring value_created_time{ L"HH:MM:SS" };

    public:
        hstring LabelSavedDate() { return label_saved_date; }

        void LabelSavedDate(hstring e) { label_saved_date = e; }

    private:
        hstring label_saved_date{ L"" };

    public:
        hstring ValueSavedDate() { return value_saved_date; }

        void ValueSavedDate(hstring e) { value_saved_date = e; }

    private:
        hstring value_saved_date{ L"MM.DD.YYYY" };

    public:
        hstring LabelSavedTime() { return label_saved_time; }

        void LabelSavedTime(hstring e) { label_saved_time = e; }

    private:
        hstring label_saved_time{ L"" };

    public:
        hstring ValueSavedTime() { return value_saved_time; }

        void ValueSavedTime(hstring e) { value_saved_time = e; }

    private:
        hstring value_saved_time{ L"HH:MM:SS" };

    public:
        hstring LabelOpenedDate() { return label_opened_date; }

        void LabelOpenedDate(hstring e) { label_opened_date = e; }

    private:
        hstring label_opened_date{ L"" };

    public:
        hstring ValueOpenedDate() { return value_opened_date; }

        void ValueOpenedDate(hstring e) { value_opened_date = e; }

    private:
        hstring value_opened_date{ L"MM.DD.YYYY" };

    public:
        hstring LabelOpenedTime() { return label_opened_time; }

        void LabelOpenedTime(hstring e) { label_opened_time = e; }

    private:
        hstring label_opened_time{ L"" };

    public:
        hstring ValueOpenedTime() { return value_opened_time; }

        void ValueOpenedTime(hstring e) { value_opened_time = e; }

    private:
        hstring value_opened_time{ L"HH:MM:SS" };

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct UserVMTNode : UserVMTNodeT<UserVMTNode, implementation::UserVMTNode>
    {
    };
}
