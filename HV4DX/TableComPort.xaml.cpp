#include "pch.h"
#include "TableComPort.xaml.h"
#if __has_include("TableComPort.g.cpp")
#include "TableComPort.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
	TableComPort::TableComPort()
	{
		InitializeComponent();

		return;

	}

	winrt::hstring TableComPort::LabelComPortNodeHVID()
	{

		return label_com_port_node_hvid;

	}

	void TableComPort::LabelComPortNodeHVID(winrt::hstring const& e)
	{
		label_com_port_node_hvid = e;

		return;

	}

	winrt::hstring TableComPort::ValueComPortNodeHVID()
	{

		return label_com_port_node_hvid;

	}

	void TableComPort::ValueComPortNodeHVID(winrt::hstring const& e)
	{
		value_com_port_node_hvid = e;

		return;

	}

	winrt::hstring TableComPort::LabelComPortNodeID()
	{

		return label_com_port_node_id;

	}

	void TableComPort::LabelComPortNodeID(winrt::hstring const& e)
	{
		label_com_port_node_id = e;

		return;

	}

	winrt::hstring TableComPort::ValueComPortNodeID()
	{

		return value_com_port_node_id;

	}

	void TableComPort::ValueComPortNodeID(winrt::hstring const& e)
	{
		value_com_port_node_id = e;

		return;

	}

	winrt::hstring TableComPort::LabelComPortNodeTemp()
	{

		return label_com_port_node_;

	}

	void TableComPort::LabelComPortNodeTemp(winrt::hstring const& e)
	{
		label_com_port_node_ = e;

		return;

	}

	winrt::hstring TableComPort::ValueComPortNodeTemp()
	{

		return value_com_port_node_;

	}

	void TableComPort::ValueComPortNodeTemp(winrt::hstring const& e)
	{
		value_com_port_node_ = e;

		return;

	}

	winrt::hstring TableComPort::LabelAcceleratorHVID()
	{

		return label_accelerator_hvid;

	}

	void TableComPort::LabelAcceleratorHVID(winrt::hstring const& e)
	{
		label_accelerator_hvid = e;

		return;

	}

	winrt::hstring TableComPort::ValueAcceleratorHVID()
	{

		return value_accelerator_hvid;

	}

	void TableComPort::ValueAcceleratorHVID(winrt::hstring const& e)
	{
		value_accelerator_hvid = e;

		return;

	}

	MUXC::TextBlock TableComPort::ListComPortSelectedProtocol()
	{

		return list_com_port_selected_protocol;

	}

	void TableComPort::ListComPortSelectedProtocol(MUXC::TextBlock const& e)
	{
		list_com_port_selected_protocol = e;

		return;

	}

	WFITT::IObservableVector<MUXC::TextBlock> TableComPort::ListComPortProtocol()
	{

		return list_com_port_protocol;

	}

	void TableComPort::ListComPortProtocol(WFITT::IObservableVector<MUXC::TextBlock> const& e)
	{
		list_com_port_protocol = e;

		return;

	}

}
