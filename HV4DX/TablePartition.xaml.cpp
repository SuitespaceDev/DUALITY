#include "pch.h"
#include "TablePartition.xaml.h"
#if __has_include("TablePartition.g.cpp")
#include "TablePartition.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TablePartition::TablePartition()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TablePartition::LabelPartitionHVID()
    {
        return label_partition_hvid;

    }

    void TablePartition::LabelPartitionHVID(winrt::hstring const& e)
    {
        label_partition_hvid = e;

        return;

    }

    winrt::hstring TablePartition::ValuePartitionHVID()
    {
        return value_partition_hvid;

    }

    void TablePartition::ValuePartitionHVID(winrt::hstring const& e)
    {
        value_partition_hvid = e;

        return;

    }

    winrt::hstring TablePartition::LabelPartitionID()
    {
        return label_partition_id;

    }

    void TablePartition::LabelPartitionID(winrt::hstring const& e)
    {
        label_partition_id = e;

        return;

    }

    winrt::hstring TablePartition::ValuePartitionID()
    {
        return value_partition_id;

    }

    void TablePartition::ValuePartitionID(winrt::hstring const& e)
    {
        value_partition_id = e;

        return;

    }

    winrt::hstring TablePartition::LabelPartitionName()
    {
        return label_partition_name;

    }

    void TablePartition::LabelPartitionName(winrt::hstring const& e)
    {
        label_partition_name = e;

        return;

    }

    winrt::hstring TablePartition::ValuePartitionName()
    {
        return value_partition_name;

    }

    void TablePartition::ValuePartitionName(winrt::hstring const& e)
    {
        value_partition_name = e;

        return;

    }

    winrt::hstring TablePartition::LabelPartitionType()
    {
        return label_partition_type;

    }

    void TablePartition::LabelPartitionType(winrt::hstring const& e)
    {
        label_partition_type = e;

        return;

    }

    winrt::hstring TablePartition::ValuePartitionType()
    {
        return value_partition_type;

    }

    void TablePartition::ValuePartitionType(winrt::hstring const& e)
    {
        value_partition_type = e;

        return;

    }

    winrt::hstring TablePartition::LabelPartitionAccessLvl()
    {
        return label_partition_access_Lvl;

    }

    void TablePartition::LabelPartitionAccessLvl(winrt::hstring const& e)
    {
        label_partition_access_Lvl = e;

        return;

    }

    winrt::hstring TablePartition::ValuePartitionAccessLvl()
    {
        return value_partition_access_Lvl;

    }

    void TablePartition::ValuePartitionAccessLvl(winrt::hstring const& e)
    {
        value_partition_access_Lvl = e;

        return;

    }

    winrt::hstring TablePartition::LabelPartitionSize()
    {
        return label_partition_size;

    }

    void TablePartition::LabelPartitionSize(winrt::hstring const& e)
    {
        label_partition_size = e;

        return;

    }

    winrt::hstring TablePartition::ValuePartitionSize()
    {
        return value_partition_size;

    }

    void TablePartition::ValuePartitionSize(winrt::hstring const& e)
    {
        value_partition_size = e;

        return;

    }

    winrt::hstring TablePartition::LabelPartitionUsed()
    {
        return label_partition_used;

    }

    void TablePartition::LabelPartitionUsed(winrt::hstring const& e)
    {
        label_partition_used = e;

        return;

    }

    winrt::hstring TablePartition::ValuePartitionUsed()
    {
        return value_partition_used;

    }

    void TablePartition::ValuePartitionUsed(winrt::hstring const& e)
    {
        value_partition_used = e;

        return;

    }

    winrt::hstring TablePartition::LabelPartitionFormattedDATETIME()
    {
        return label_partition_formatted_datetime;

    }

    void TablePartition::LabelPartitionFormattedDATETIME(winrt::hstring const& e)
    {
        label_partition_formatted_datetime = e;

        return;

    }

    winrt::hstring TablePartition::ValuePartitionFormattedDATETIME()
    {
        return value_partition_formatted_datetime;

    }

    void TablePartition::ValuePartitionFormattedDATETIME(winrt::hstring const& e)
    {
        value_partition_formatted_datetime = e;

        return;

    }

    winrt::hstring TablePartition::LabelPartitionOpenedDATETIME()
    {
        return label_partition_opened_datetime;

    }

    void TablePartition::LabelPartitionOpenedDATETIME(winrt::hstring const& e)
    {
        label_partition_opened_datetime = e;

        return;

    }

    winrt::hstring TablePartition::ValuePartitionOpenedDATETIME()
    {
        return value_partition_opened_datetime;

    }

    void TablePartition::ValuePartitionOpenedDATETIME(winrt::hstring const& e)
    {
        value_partition_opened_datetime = e;

        return;

    }

    event_token TablePartition::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {
        return property_changed.add(handler);

    }

    void TablePartition::PropertyChanged(event_token const& e) noexcept
    {
        property_changed.remove(e);

    }

}
