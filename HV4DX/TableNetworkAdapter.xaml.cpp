#include "pch.h"
#include "TableNetworkAdapter.xaml.h"
#if __has_include("TableNetworkAdapter.g.cpp")
#include "TableNetworkAdapter.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
	TableNetworkAdapter::TableNetworkAdapter()
	{
		InitializeComponent();

		return;

	}

	winrt::hstring TableNetworkAdapter::LabelNICManufacturer()
	{

		return label_nic_manufacturer;

	}

	void  TableNetworkAdapter::LabelNICManufacturer(winrt::hstring const& e)
	{
		label_nic_manufacturer = e;

		return;

	}

	winrt::hstring TableNetworkAdapter::ValueNICManufacturer()
	{

		return value_nic_manufacturer;

	}

	void  TableNetworkAdapter::ValueNICManufacturer(winrt::hstring const& e)
	{
		value_nic_manufacturer = e;

		return;

	}

	winrt::hstring TableNetworkAdapter::LabelNICModel()
	{

		return label_nic_model;

	}

	void  TableNetworkAdapter::LabelNICModel(winrt::hstring const& e)
	{
		label_nic_model = e;

		return;

	}

	winrt::hstring TableNetworkAdapter::ValueNICModel()
	{

		return value_nic_model;

	}

	void  TableNetworkAdapter::ValueNICModel(winrt::hstring const& e)
	{
		value_nic_model = e;

		return;

	}

	winrt::hstring TableNetworkAdapter::LabelNICHVID()
	{

		return label_nic_hvid;

	}

	void  TableNetworkAdapter::LabelNICHVID(winrt::hstring const& e)
	{
		label_nic_hvid = e;

		return;

	}

	winrt::hstring TableNetworkAdapter::ValueNICHVID()
	{

		return value_nic_hvid;

	}

	void  TableNetworkAdapter::ValueNICHVID(winrt::hstring const& e)
	{
		value_nic_hvid = e;

		return;

	}

	winrt::hstring TableNetworkAdapter::LabelNICID()
	{

		return label_nic_id;

	}

	void  TableNetworkAdapter::LabelNICID(winrt::hstring const& e)
	{
		label_nic_id = e;

		return;

	}

	winrt::hstring TableNetworkAdapter::ValueNICID()
	{

		return value_nic_id;

	}

	void  TableNetworkAdapter::ValueNICID(winrt::hstring const& e)
	{
		value_nic_id = e;

		return;

	}

	winrt::hstring TableNetworkAdapter::LabelNICInputOutputBus()
	{

		return label_nic_io_bus;

	}

	void  TableNetworkAdapter::LabelNICInputOutputBus(winrt::hstring const& e)
	{
		label_nic_io_bus = e;

		return;

	}

	winrt::hstring TableNetworkAdapter::ValueNICInputOutputBus()
	{

		return value_nic_io_bus;

	}

	void  TableNetworkAdapter::ValueNICInputOutputBus(winrt::hstring const& e)
	{
		value_nic_io_bus = e;

		return;

	}

	winrt::hstring TableNetworkAdapter::LabelNICDuplex()
	{

		return label_nic_duplex;

	}

	void  TableNetworkAdapter::LabelNICDuplex(winrt::hstring const& e)
	{
		label_nic_duplex = e;

		return;

	}

	winrt::hstring TableNetworkAdapter::ValueNICDuplex()
	{

		return value_nic_duplex;

	}

	void  TableNetworkAdapter::ValueNICDuplex(winrt::hstring const& e)
	{
		value_nic_duplex = e;

		return;

	}

	winrt::hstring TableNetworkAdapter::LabelNICMTU()
	{

		return label_nic_mtu;

	}

	void  TableNetworkAdapter::LabelNICMTU(winrt::hstring const& e)
	{
		label_nic_mtu = e;

		return;

	}

	winrt::hstring TableNetworkAdapter::ValueNICMTU()
	{

		return value_nic_mtu;

	}

	void  TableNetworkAdapter::ValueNICMTU(winrt::hstring const& e)
	{
		value_nic_mtu = e;

		return;

	}

	winrt::hstring TableNetworkAdapter::LabelNICSpeed()
	{

		return label_nic_speed;

	}

	void  TableNetworkAdapter::LabelNICSpeed(winrt::hstring const& e)
	{
		label_nic_speed = e;

		return;

	}

	winrt::hstring TableNetworkAdapter::ValueNICSpeed()
	{

		return value_nic_speed;

	}

	void  TableNetworkAdapter::ValueNICSpeed(winrt::hstring const& e)
	{
		value_nic_speed = e;

		return;

	}

}
