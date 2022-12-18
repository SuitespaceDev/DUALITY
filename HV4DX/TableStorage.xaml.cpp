#include "pch.h"
#include "TableStorage.xaml.h"
#if __has_include("TableStorage.g.cpp")
#include "TableStorage.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableStorage::TableStorage()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableStorage::TableStorage::LabelDriveManufacturer()
    {
        return label_drive_manufacturer;

    }

    void TableStorage::LabelDriveManufacturer(winrt::hstring const& e)
    {
        label_drive_manufacturer = e;

        return;

    }

    winrt::hstring TableStorage::ValueDriveManufacturer()
    {

        return value_drive_manufacturer;

    }

    void TableStorage::ValueDriveManufacturer(winrt::hstring const& e)
    {
        value_drive_manufacturer = e;

        return;

    }

    winrt::hstring TableStorage::LabelDriveHVID()
    {

        return label_drive_hvid;

    }

    void TableStorage::LabelDriveHVID(winrt::hstring const& e)
    {
        label_drive_hvid = e;

            return;

    }

    winrt::hstring TableStorage::ValueDriveHVID()
    {

        return value_drive_hvid;

    }

    void TableStorage::ValueDriveHVID(winrt::hstring const& e)
    {
        value_drive_hvid = e;

        return;

    }

    winrt::hstring TableStorage::LabelDriveMaxPath()
    {

        return label_drive_maxpath;

    }

    void TableStorage::LabelDriveMaxPath(winrt::hstring const& e)
    {
        label_drive_maxpath = e;

        return;

    }

    winrt::hstring TableStorage::ValueDriveMaxPath()
    {

        return value_drive_maxpath;

    }

    void TableStorage::ValueDriveMaxPath(winrt::hstring const& e)
    {
        value_drive_maxpath = e;

        return;

    }

    winrt::hstring TableStorage::LabelDriveType()
    {

        return label_drive_type;

    }

    void TableStorage::LabelDriveType(winrt::hstring const& e)
    {
        label_drive_type = e;

        return;

    }

    winrt::hstring TableStorage::ValueDriveType()
    {

        return value_drive_type;

    }

    void TableStorage::ValueDriveType(winrt::hstring const& e)
    {
        value_drive_type = e;

        return;

    }

    winrt::hstring TableStorage::LabelDriveSize()
    {

        return label_drive_size;

    }

    void TableStorage::LabelDriveSize(winrt::hstring const& e)
    {
        label_drive_size = e;

        return;

    }

    winrt::hstring TableStorage::ValueDriveSize()
    {

        return value_drive_size;

    }

    void TableStorage::ValueDriveSize(winrt::hstring const& e)
    {
        value_drive_size = e;

        return;

    }

    winrt::hstring TableStorage::LabelDriveUsed()
    {

        return label_drive_used;

    }

    void TableStorage::LabelDriveUsed(winrt::hstring const& e)
    {
        label_drive_used = e;

        return;

    }

    winrt::hstring TableStorage::ValueDriveUsed()
    {

        return value_drive_used;

    }

    void TableStorage::ValueDriveUsed(winrt::hstring const& e)
    {
        value_drive_used = e;

        return;

    }

    WFITT::IObservableVector<HV4DX::TablePartition> TableStorage::ItemList()
    {

        return item_list;

    }

    void TableStorage::ItemList(WFITT::IObservableVector<HV4DX::TablePartition> const& e)
    {
        if (e.Size() > 0)
        {
            item_list.Clear();

            item_list = e;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"ItemList" });

        }

        return;

    }

    event_token TableStorage::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void TableStorage::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
