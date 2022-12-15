#include "pch.h"
#include "UserPartition.xaml.h"
#if __has_include("UserPartition.g.cpp")
#include "UserPartition.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    UserPartition::UserPartition()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring UserPartition::LabelPartitionHVID()
    {
        return label_partition_hvid;

    }

    void UserPartition::LabelPartitionHVID(winrt::hstring const& e)
    {
        label_partition_hvid = e;

        return;

    }

    winrt::hstring UserPartition::ValuePartitionHVID()
    {
        return value_partition_hvid;

    }

    void UserPartition::ValuePartitionHVID(winrt::hstring const& e)
    {
        value_partition_hvid = e;

        return;

    }

    winrt::hstring UserPartition::LabelPartitionID()
    {
        return label_partition_id;

    }

    void UserPartition::LabelPartitionID(winrt::hstring const& e)
    {
        label_partition_id = e;

        return;

    }

    winrt::hstring UserPartition::ValuePartitionID()
    {
        return value_partition_id;

    }

    void UserPartition::ValuePartitionID(winrt::hstring const& e)
    {
        value_partition_id = e;

        return;

    }

    winrt::hstring UserPartition::LabelPartitionName()
    {
        return label_partition_name;

    }

    void UserPartition::LabelPartitionName(winrt::hstring const& e)
    {
        label_partition_name = e;

        return;

    }

    winrt::hstring UserPartition::ValuePartitionName()
    {
        return value_partition_name;

    }

    void UserPartition::ValuePartitionName(winrt::hstring const& e)
    {
        value_partition_name = e;

        return;

    }

    winrt::hstring UserPartition::LabelPartitionType()
    {
        return label_partition_type;

    }

    void UserPartition::LabelPartitionType(winrt::hstring const& e)
    {
        label_partition_type;

        return;

    }

    winrt::hstring UserPartition::ValuePartitionType()
    {
        return value_partition_type;

    }

    void UserPartition::ValuePartitionType(winrt::hstring const& e)
    {
        value_partition_type = e;

        return;

    }

    winrt::hstring UserPartition::LabelPartitionAccessLvl()
    {
        return label_partition_access_Lvl;

    }

    void UserPartition::LabelPartitionAccessLvl(winrt::hstring const& e)
    {
        label_partition_access_Lvl = e;

        return;

    }

    winrt::hstring UserPartition::ValuePartitionAccessLvl()
    {
        return value_partition_access_Lvl;

    }

    void UserPartition::ValuePartitionAccessLvl(winrt::hstring const& e)
    {
        value_partition_access_Lvl = e;

        return;

    }

    winrt::hstring UserPartition::LabelPartitionSize()
    {
        return label_partition_size;

    }

    void UserPartition::LabelPartitionSize(winrt::hstring const& e)
    {
        label_partition_size = e;

        return;

    }

    winrt::hstring UserPartition::ValuePartitionSize()
    {
        return value_partition_size;

    }

    void UserPartition::ValuePartitionSize(winrt::hstring const& e)
    {
        value_partition_size = e;

        return;

    }

    winrt::hstring UserPartition::LabelPartitionUsed()
    {
        return label_partition_used;

    }

    void UserPartition::LabelPartitionUsed(winrt::hstring const& e)
    {
        label_partition_used = e;

        return;

    }

    winrt::hstring UserPartition::ValuePartitionUsed()
    {
        return value_partition_used;

    }

    void UserPartition::ValuePartitionUsed(winrt::hstring const& e)
    {
        value_partition_used = e;

        return;

    }

    winrt::hstring UserPartition::LabelPartitionFormattedDATETIME()
    {
        return label_partition_formatted_datetime;

    }

    void UserPartition::LabelPartitionFormattedDATETIME(winrt::hstring const& e)
    {
        label_partition_formatted_datetime = e;

        return;

    }

    winrt::hstring UserPartition::ValuePartitionFormattedDATETIME()
    {
        return value_partition_formatted_datetime;

    }

    void UserPartition::ValuePartitionFormattedDATETIME(winrt::hstring const& e)
    {
        value_partition_formatted_datetime = e;

        return;

    }

    winrt::hstring UserPartition::LabelPartitionOpenedDATETIME()
    {
        return label_partition_opened_datetime;

    }

    void UserPartition::LabelPartitionOpenedDATETIME(winrt::hstring const& e)
    {
        label_partition_opened_datetime = e;

        return;

    }

    winrt::hstring UserPartition::ValuePartitionOpenedDATETIME()
    {
        return value_partition_opened_datetime;

    }

    void UserPartition::ValuePartitionOpenedDATETIME(winrt::hstring const& e)
    {
        value_partition_opened_datetime = e;

        return;

    }

    event_token UserPartition::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {
        return property_changed.add(handler);

    }

    void UserPartition::PropertyChanged(event_token const& e) noexcept
    {
        property_changed.remove(e);

    }

}
