#pragma once


#include "TableNetworkAdapter.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableNetworkAdapter : TableNetworkAdapterT<TableNetworkAdapter>
    {
    public:
        TableNetworkAdapter();

    public:
        winrt::hstring LabelNICManufacturer();

        void LabelNICManufacturer(winrt::hstring const&);

    private:
        winrt::hstring label_nic_manufacturer{};

    public:
        winrt::hstring ValueNICManufacturer();

        void ValueNICManufacturer(winrt::hstring const&);

    private:
        winrt::hstring value_nic_manufacturer{};

    public:
        winrt::hstring LabelNICModel();

        void LabelNICModel(winrt::hstring const&);

    private:
        winrt::hstring label_nic_model{};

    public:
        winrt::hstring ValueNICModel();

        void ValueNICModel(winrt::hstring const&);

    private:
        winrt::hstring value_nic_model{};

    public:
        winrt::hstring LabelNICHVID();

        void LabelNICHVID(winrt::hstring const&);

    private:
        winrt::hstring label_nic_hvid{};

    public:
        winrt::hstring ValueNICHVID();

        void ValueNICHVID(winrt::hstring const&);

    private:
        winrt::hstring value_nic_hvid{};

    public:
        winrt::hstring LabelNICID();

        void LabelNICID(winrt::hstring const&);

    private:
        winrt::hstring label_nic_id{};

    public:
        winrt::hstring ValueNICID();

        void ValueNICID(winrt::hstring const&);

    private:
        winrt::hstring value_nic_id{};

    public:
        winrt::hstring LabelNICInputOutputBus();

        void LabelNICInputOutputBus(winrt::hstring const&);

    private:
        winrt::hstring label_nic_io_bus{};

    public:
        winrt::hstring ValueNICInputOutputBus();

        void ValueNICInputOutputBus(winrt::hstring const&);

    private:
        winrt::hstring value_nic_io_bus{};

    public:
        winrt::hstring LabelNICDuplex();

        void LabelNICDuplex(winrt::hstring const&);

    private:
        winrt::hstring label_nic_duplex{};

    public:
        winrt::hstring ValueNICDuplex();

        void ValueNICDuplex(winrt::hstring const&);

    private:
        winrt::hstring value_nic_duplex{};

    public:
        winrt::hstring LabelNICMTU();

        void LabelNICMTU(winrt::hstring const&);

    private:
        winrt::hstring label_nic_mtu{};

    public:
        winrt::hstring ValueNICMTU();

        void ValueNICMTU(winrt::hstring const&);

    private:
        winrt::hstring value_nic_mtu{};

    public:
        winrt::hstring LabelNICSpeed();

        void LabelNICSpeed(winrt::hstring const&);

    private:
        winrt::hstring label_nic_speed{};

    public:
        winrt::hstring ValueNICSpeed();

        void ValueNICSpeed(winrt::hstring const&);

    private:
        winrt::hstring value_nic_speed{};

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableNetworkAdapter : TableNetworkAdapterT<TableNetworkAdapter, implementation::TableNetworkAdapter>
    {
    };
}
