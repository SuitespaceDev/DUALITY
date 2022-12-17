#pragma once

#include "TableStorage.g.h"

namespace WF        = winrt::Windows::Foundation;
namespace WFITT     = winrt::Windows::Foundation::Collections;
namespace MUX       = winrt::Microsoft::UI::Xaml;
namespace MUXD      = winrt::Microsoft::UI::Xaml::Data;
namespace MUXC      = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN      = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::HV4DX::implementation
{
    struct TableStorage : TableStorageT<TableStorage>
    {
    public:
        TableStorage();

    public:
        winrt::hstring LabelDriveManufacturer();

        void LabelDriveManufacturer(winrt::hstring const&);

    private:
        winrt::hstring label_drive_manufacturer{};

    public:
        winrt::hstring ValueDriveManufacturer();

        void ValueDriveManufacturer(winrt::hstring const&);

    private:
        winrt::hstring value_drive_manufacturer{};

    public:
        winrt::hstring LabelDriveHVID();

        void LabelDriveHVID(winrt::hstring const&);

    private:
        winrt::hstring label_drive_hvid{};

    public:
        winrt::hstring ValueDriveHVID();

        void ValueDriveHVID(winrt::hstring const&);

    private:
        winrt::hstring value_drive_hvid{};

    public:
        winrt::hstring LabelDriveMaxPath();

        void LabelDriveMaxPath(winrt::hstring const&);

    private:
        winrt::hstring label_drive_maxpath{};

    public:
        winrt::hstring ValueDriveMaxPath();

        void ValueDriveMaxPath(winrt::hstring const&);

    private:
        winrt::hstring value_drive_maxpath{};

    public:
        winrt::hstring LabelDriveType();

        void LabelDriveType(winrt::hstring const&);

    private:
        winrt::hstring label_drive_type{};

    public:
        winrt::hstring ValueDriveType();

        void ValueDriveType(winrt::hstring const&);

    private:
        winrt::hstring value_drive_type{};

    public:
        winrt::hstring LabelDriveSize();

        void LabelDriveSize(winrt::hstring const&);

    private:
        winrt::hstring label_drive_size{};

    public:
        winrt::hstring ValueDriveSize();

        void ValueDriveSize(winrt::hstring const&);

    private:
        winrt::hstring value_drive_size{};

    public:
        winrt::hstring LabelDriveUsed();

        void LabelDriveUsed(winrt::hstring const&);

    private:
        winrt::hstring label_drive_used{};

    public:
        winrt::hstring ValueDriveUsed();

        void ValueDriveUsed(winrt::hstring const&);

    private:
        winrt::hstring value_drive_used{};

    public:
        WFITT::IObservableVector<HV4DX::UserPartition> ItemList();

        void ItemList(WFITT::IObservableVector<HV4DX::UserPartition> const&);

    private:
        WFITT::IObservableVector<HV4DX::UserPartition> item_list{ winrt::single_threaded_observable_vector<HV4DX::UserPartition>() };

    public:
        winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

        void PropertyChanged(winrt::event_token const&) noexcept;

    private:
        winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableStorage : TableStorageT<TableStorage, implementation::TableStorage>
    {
    };
}
