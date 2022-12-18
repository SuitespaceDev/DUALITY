#pragma once

#include "TablePartition.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXD      = winrt::Microsoft::UI::Xaml::Data;

namespace winrt::HV4DX::implementation
{
    struct TablePartition : TablePartitionT<TablePartition>
    {
    public:
        TablePartition();

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
        winrt::hstring LabelPartitionID();

        void LabelPartitionID(winrt::hstring const&);

    private:
        winrt::hstring label_partition_id{};

    public:
        winrt::hstring ValuePartitionID();

        void ValuePartitionID(winrt::hstring const&);

    private:
        winrt::hstring value_partition_id{};

    public:
        winrt::hstring LabelPartitionName();

        void LabelPartitionName(winrt::hstring const&);

    private:
        winrt::hstring label_partition_name{};

    public:
        winrt::hstring ValuePartitionName();

        void ValuePartitionName(winrt::hstring const&);

    private:
        winrt::hstring value_partition_name{};

    public:
        winrt::hstring LabelPartitionType();

        void LabelPartitionType(winrt::hstring const&);

    private:
        winrt::hstring label_partition_type{};

    public:
        winrt::hstring ValuePartitionType();

        void ValuePartitionType(winrt::hstring const&);

    private:
        winrt::hstring value_partition_type{};

    public:
        winrt::hstring LabelPartitionAccessLvl();

        void LabelPartitionAccessLvl(winrt::hstring const&);

    private:
        winrt::hstring label_partition_access_Lvl{};

    public:
        winrt::hstring ValuePartitionAccessLvl();

        void ValuePartitionAccessLvl(winrt::hstring const&);

    private:
        winrt::hstring value_partition_access_Lvl{};

    public:
        winrt::hstring LabelPartitionSize();

        void LabelPartitionSize(winrt::hstring const&);

    private:
        winrt::hstring label_partition_size{};

    public:
        winrt::hstring ValuePartitionSize();

        void ValuePartitionSize(winrt::hstring const&);

    private:
        winrt::hstring value_partition_size{};

    public:
        winrt::hstring LabelPartitionUsed();

        void LabelPartitionUsed(winrt::hstring const&);

    private:
        winrt::hstring label_partition_used{};

    public:
        winrt::hstring ValuePartitionUsed();

        void ValuePartitionUsed(winrt::hstring const&);

    private:
        winrt::hstring value_partition_used{};

    public:
        winrt::hstring LabelPartitionFormattedDATETIME();

        void LabelPartitionFormattedDATETIME(winrt::hstring const&);

    private:
        winrt::hstring label_partition_formatted_datetime{};

    public:
        winrt::hstring ValuePartitionFormattedDATETIME();

        void ValuePartitionFormattedDATETIME(winrt::hstring const&);

    private:
        winrt::hstring value_partition_formatted_datetime{};

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
        event_token PropertyChanged(MUXD::PropertyChangedEventHandler const& handler);

        void PropertyChanged(event_token const& e) noexcept;

    private:
        winrt::event<MUXD::PropertyChangedEventHandler> property_changed {};

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TablePartition : TablePartitionT<TablePartition, implementation::TablePartition>
    {
    };
}
