#pragma once

#include "TableDrive.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableDrive : TableDriveT<TableDrive>
    {
    public:
        TableDrive();

    public:
        winrt::hstring LabelPartitionHVID();

        void LabelPartitionHVID(winrt::hstring const&);

    private:
        winrt::hstring label_partition_hvid{};

    public:
        winrt::hstring ValuePartitionHVID();

        void ValuePartitionHVID(winrt::hstring const&);

    private:
        winrt::hstring value_partition_hvid{};

    public:
        winrt::hstring LabelPartitionName();

        void LabelPartitionName(winrt::hstring const&);

    private:
        winrt::hstring label_partition_name{};

    public:
        winrt::hstring LabelPartitionType();

        void LabelPartitionType(winrt::hstring const&);

    private:
        winrt::hstring label_partition_type{};

    public:
        winrt::hstring LabelPartitionCreatedDATETIME();

        void LabelPartitionCreatedDATETIME(winrt::hstring const&);

    private:
        winrt::hstring label_partition_created_datetime{};

    public:
        winrt::hstring ValuePartitionCreatedDATETIME();

        void ValuePartitionCreatedDATETIME(winrt::hstring const&);

    private:
        winrt::hstring value_partition_created_datetime{};

    public:
        winrt::hstring LabelPartitionSavedDATETIME();

        void LabelPartitionSavedDATETIME(winrt::hstring const&);

    private:
        winrt::hstring label_partition_saved_datetime{};

    public:
        winrt::hstring ValuePartitionSavedDATETIME();

        void ValuePartitionSavedDATETIME(winrt::hstring const&);

    private:
        winrt::hstring value_partition_saved_datetime{};

    public:
        winrt::hstring LabelPartitionOpenedDATETIME();

        void LabelPartitionOpenedDATETIME(winrt::hstring const&);

    private:
        winrt::hstring label_partition_opened_datetime{};

    public:
        winrt::hstring ValuePartitionOpenedDATETIME();

        void ValuePartitionOpenedDATETIME(winrt::hstring const&);

    private:
        winrt::hstring value_partition_opened_datetime{};

    public:
        winrt::hstring LabelReserved();

        void LabelReserved(winrt::hstring const&);

    private:
        winrt::hstring label_reserved{};

    public:
        winrt::hstring ValueReserved();

        void ValueReserved(winrt::hstring const&);

    private:
        winrt::hstring value_reserved{};

    public:
        winrt::hstring LabelAllocated();

        void LabelAllocated(winrt::hstring const&);

    private:
        winrt::hstring label_allocated{};

    public:
        winrt::hstring ValueAllocated();

        void ValueAllocated(winrt::hstring const&);

    private:
        winrt::hstring value_allocated{};

    private:
        winrt::hstring value_type{};

    public:
        winrt::hstring LabelClusterSize();

        void LabelClusterSize(winrt::hstring const&);

    private:
        winrt::hstring label_cluster_size{};

    public:
        winrt::hstring ValueClusterSize();

        void ValueClusterSize(winrt::hstring const&);

    private:
        winrt::hstring value_cluster_size{};

    public:
        winrt::hstring LabelPageSize();

        void LabelPageSize(winrt::hstring const&);

    private:
        winrt::hstring label_page_size{};

    public:
        winrt::hstring ValuePageSize();

        void ValuePageSize(winrt::hstring const&);

    private:
        winrt::hstring value_page_size{};

    public:
        winrt::hstring LabelAttSize();

        void LabelAttSize(winrt::hstring const&);

    private:
        winrt::hstring label_attribute_size{};

    public:
        winrt::hstring ValueAttSize();

        void ValueAttSize(winrt::hstring const&);

    private:
        winrt::hstring value_attribute_size{};

    public:
        winrt::hstring LabelWhitespaceEncryption();

        void LabelWhitespaceEncryption(winrt::hstring const&);

    private:
        winrt::hstring label_whitespace_encryption{};

    public:
        winrt::hstring ValueWhitespaceEncryption();

        void ValueWhitespaceEncryption(winrt::hstring const&);

    private:
        winrt::hstring value_whitespace_encryption{};

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableDrive : TableDriveT<TableDrive, implementation::TableDrive>
    {
    };
}
