#pragma once

#include "TablePeripheralDevice.g.h"

namespace winrt::HV4DX::implementation
{
    struct TablePeripheralDevice : TablePeripheralDeviceT<TablePeripheralDevice>
    {
    public:
        TablePeripheralDevice();

    public:
        winrt::hstring LabelPeripheralManufacturer();

        void LabelPeripheralManufacturer(winrt::hstring const&);

    private:
        winrt::hstring label_peripheral_manufacturer{};

    public:
        winrt::hstring ValuePeripheralManufacturer();

        void ValuePeripheralManufacturer(winrt::hstring const&);

    private:
        winrt::hstring value_peripheral_manufacturer{};

    public:
        winrt::hstring LabelPeripheralModel();

        void LabelPeripheralModel(winrt::hstring const&);

    private:
        winrt::hstring label_peripheral_model{};

    public:
        winrt::hstring ValuePeripheralModel();

        void ValuePeripheralModel(winrt::hstring const&);

    private:
        winrt::hstring value_peripheral_model{};

    public:
        winrt::hstring LabelPeripheralHVID();

        void LabelPeripheralHVID(winrt::hstring const&);

    private:
        winrt::hstring label_peripheral_hvid{};

    public:
        winrt::hstring ValuePeripheralHVID();

        void ValuePeripheralHVID(winrt::hstring const&);

    private:
        winrt::hstring value_peripheral_hvid{};

    public:
        winrt::hstring LabelPeripheralID();

        void LabelPeripheralID(winrt::hstring const&);

    private:
        winrt::hstring label_peripheral_id{};

    public:
        winrt::hstring ValuePeripheralID();

        void ValuePeripheralID(winrt::hstring const&);

    private:
        winrt::hstring value_peripheral_id{};

    public:
        winrt::hstring LabelPeripheralAcceleratorHVID();

        void LabelPeripheralAcceleratorHVID(winrt::hstring const&);

    private:
        winrt::hstring label_peripheral_accelerator_hvid{};

    public:
        winrt::hstring ValuePeripheralAcceleratorHVID();

        void ValuePeripheralAcceleratorHVID(winrt::hstring const&);

    private:
        winrt::hstring value_peripheral_accelerator_hvid{};

    public:
        winrt::hstring LabelPeripheralAcceleratorID();

        void LabelPeripheralAcceleratorID(winrt::hstring const&);

    private:
        winrt::hstring label_peripheral_accelerator_id{};

    public:
        winrt::hstring ValuePeripheralAcceleratorID();

        void ValuePeripheralAcceleratorID(winrt::hstring const&);

    private:
        winrt::hstring value_peripheral_accelerator_id{};

    public:
        winrt::hstring LabelPeripheralAcceleratorComPort();

        void LabelPeripheralAcceleratorComPort(winrt::hstring const&);

    private:
        winrt::hstring label_peripheral_accelerator_com_port{};

    public:
        winrt::hstring ValuePeripheralAcceleratorComPort();

        void ValuePeripheralAcceleratorComPort(winrt::hstring const&);

    private:
        winrt::hstring value_peripheral_accelerator_com_port{};

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TablePeripheralDevice : TablePeripheralDeviceT<TablePeripheralDevice, implementation::TablePeripheralDevice>
    {
    };
}
