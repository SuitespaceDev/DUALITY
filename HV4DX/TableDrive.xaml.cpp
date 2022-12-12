#include "pch.h"
#include "TableDrive.xaml.h"
#if __has_include("TableDrive.g.cpp")
#include "TableDrive.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableDrive::TableDrive()
    {
        InitializeComponent();
    }

    winrt::hstring TableDrive::LabelPartitionHVID()
    {
        return label_partition_hvid;

    }

    void TableDrive::LabelPartitionHVID(winrt::hstring const& e)
    {
        label_partition_hvid = e;

        return;

    }

    winrt::hstring TableDrive::ValuePartitionHVID()
    {
        return value_partition_hvid;

    }

    void TableDrive::ValuePartitionHVID(winrt::hstring const& e)
    {
        value_partition_hvid = e;

        return;

    }

    winrt::hstring TableDrive::LabelPartitionName()
    {
        return label_partition_name;

    }

    void TableDrive::LabelPartitionName(winrt::hstring const& e)
    {
        label_partition_name = e;

        return;

    }

    winrt::hstring TableDrive::LabelPartitionType()
    {
        return label_partition_type;

    }

    void TableDrive::LabelPartitionType(winrt::hstring const& e)
    {
        label_partition_type = e;

        return;

    }

    winrt::hstring TableDrive::LabelPartitionCreatedDATETIME()
    {
        return label_partition_created_datetime;

    }

    void TableDrive::LabelPartitionCreatedDATETIME(winrt::hstring const& e)
    {
        label_partition_created_datetime = e;

        return;

    }

    winrt::hstring TableDrive::ValuePartitionCreatedDATETIME()
    {
        return value_partition_created_datetime;

    }

    void TableDrive::ValuePartitionCreatedDATETIME(winrt::hstring const& e)
    {
        value_partition_created_datetime = e;

        return;

    }

    winrt::hstring TableDrive::LabelPartitionSavedDATETIME()
    {
        return label_partition_saved_datetime;

    }

    void TableDrive::LabelPartitionSavedDATETIME(winrt::hstring const& e)
    {
        label_partition_saved_datetime = e;

        return;

    }

    winrt::hstring TableDrive::ValuePartitionSavedDATETIME()
    {
        return value_partition_saved_datetime;

    }

    void TableDrive::ValuePartitionSavedDATETIME(winrt::hstring const& e)
    {
        value_partition_saved_datetime = e;

        return;

    }

    winrt::hstring TableDrive::LabelPartitionOpenedDATETIME()
    {
        return label_partition_opened_datetime;

    }

    void TableDrive::LabelPartitionOpenedDATETIME(winrt::hstring const& e)
    {
        label_partition_opened_datetime = e;

        return;

    }

    winrt::hstring TableDrive::ValuePartitionOpenedDATETIME()
    {
        return value_partition_opened_datetime;

    }

    void TableDrive::ValuePartitionOpenedDATETIME(winrt::hstring const& e)
    {
        value_partition_opened_datetime = e;

        return;

    }

    winrt::hstring TableDrive::LabelReserved()
    {
        return label_reserved;

    }

    void TableDrive::LabelReserved(winrt::hstring const& e)
    {
        label_reserved = e;

        return;

    }

    winrt::hstring TableDrive::ValueReserved()
    {
        return value_reserved;

    }

    void TableDrive::ValueReserved(winrt::hstring const& e)
    {
        value_reserved = e;

        return;

    }

    winrt::hstring TableDrive::LabelAllocated()
    {
        return label_allocated;

    }

    void TableDrive::LabelAllocated(winrt::hstring const& e)
    {
        label_allocated = e;

        return;

    }

    winrt::hstring TableDrive::ValueAllocated()
    {
        return value_allocated;

    }

    void TableDrive::ValueAllocated(winrt::hstring const& e)
    {
        value_allocated = e;

        return;

    }

    winrt::hstring TableDrive::LabelClusterSize()
    {
        return label_cluster_size;

    }

    void TableDrive::LabelClusterSize(winrt::hstring const& e)
    {
        label_cluster_size = e;

        return;

    }

    winrt::hstring TableDrive::ValueClusterSize()
    {
        return value_cluster_size;

    }

    void TableDrive::ValueClusterSize(winrt::hstring const& e)
    {
        value_cluster_size = e;

        return;

    }

    winrt::hstring TableDrive::LabelPageSize()
    {
        return label_page_size;

    }

    void TableDrive::LabelPageSize(winrt::hstring const& e)
    {
        label_page_size = e;

        return;

    }

    winrt::hstring TableDrive::ValuePageSize()
    {
        return value_page_size;

    }

    void TableDrive::ValuePageSize(winrt::hstring const& e)
    {
        value_page_size = e;

        return;

    }

    winrt::hstring TableDrive::LabelAttSize()
    {
        return label_attribute_size;

    }

    void TableDrive::LabelAttSize(winrt::hstring const& e)
    {
        label_attribute_size = e;

        return;

    }

    winrt::hstring TableDrive::ValueAttSize()
    {
        return value_attribute_size;

    }

    void TableDrive::ValueAttSize(winrt::hstring const& e)
    {
        value_attribute_size = e;

        return;

    }

    winrt::hstring TableDrive::LabelIndexBufferSize()
    {
        return label_index_buffer_size;

    }

    void TableDrive::LabelIndexBufferSize(winrt::hstring const& e)
    {
        label_index_buffer_size = e;

        return;

    }

    winrt::hstring TableDrive::ValueIndexBufferSize()
    {
        return value_index_buffer_size;

    }

    void TableDrive::ValueIndexBufferSize(winrt::hstring const& e)
    {
        value_index_buffer_size = e;

        return;

    }

}
