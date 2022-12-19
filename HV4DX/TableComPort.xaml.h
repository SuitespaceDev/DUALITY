#pragma once

#include "TableComPort.g.h"

namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;

namespace winrt::HV4DX::implementation
{
    struct TableComPort : TableComPortT<TableComPort>
    {
    public:
        TableComPort();

    public:
        winrt::hstring LabelComPortNodeHVID();

        void LabelComPortNodeHVID(winrt::hstring const&);

    private:
        winrt::hstring label_com_port_node_hvid{};

    public:
        winrt::hstring ValueComPortNodeHVID();

        void ValueComPortNodeHVID(winrt::hstring const&);

    private:
        winrt::hstring value_com_port_node_hvid{};

    public:
        winrt::hstring LabelComPortNodeID();

        void LabelComPortNodeID(winrt::hstring const&);

    private:
        winrt::hstring label_com_port_node_id{};

    public:
        winrt::hstring ValueComPortNodeID();

        void ValueComPortNodeID(winrt::hstring const&);

    private:
        winrt::hstring value_com_port_node_id{};

    public:
        winrt::hstring LabelComPortNodeTemp();

        void LabelComPortNodeTemp(winrt::hstring const&);

    private:
        winrt::hstring label_com_port_node_{};

    public:
        winrt::hstring ValueComPortNodeTemp();

        void ValueComPortNodeTemp(winrt::hstring const&);

    private:
        winrt::hstring value_com_port_node_{};

    public:
        winrt::hstring LabelAcceleratorHVID();

        void LabelAcceleratorHVID(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_hvid{};

    public:
        winrt::hstring ValueAcceleratorHVID();

        void ValueAcceleratorHVID(winrt::hstring const&);

    private:
        winrt::hstring value_accelerator_hvid{};

    public:
        MUXC::TextBlock ListComPortSelectedProtocol();

        void ListComPortSelectedProtocol(MUXC::TextBlock const&);

    private:
        MUXC::TextBlock list_com_port_selected_protocol{};

    public:
        WFITT::IObservableVector<MUXC::TextBlock> ListComPortProtocol();

        void ListComPortProtocol(WFITT::IObservableVector<MUXC::TextBlock> const&);

    private:
        WFITT::IObservableVector<MUXC::TextBlock> list_com_port_protocol{};

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableComPort : TableComPortT<TableComPort, implementation::TableComPort>
    {
    };
}
