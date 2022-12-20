#include "pch.h"
#include "TablePeripheralDevice.xaml.h"
#if __has_include("TablePeripheralDevice.g.cpp")
#include "TablePeripheralDevice.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
	TablePeripheralDevice::TablePeripheralDevice()
    {
        InitializeComponent();

        return;

    }

	winrt::hstring TablePeripheralDevice::LabelPeripheralManufacturer()
	{

		return label_peripheral_manufacturer;

	}

	void  TablePeripheralDevice::LabelPeripheralManufacturer(winrt::hstring const& e)
	{
		label_peripheral_manufacturer = e;

		return;

	}

	winrt::hstring TablePeripheralDevice::ValuePeripheralManufacturer()
	{

		return value_peripheral_manufacturer;

	}

	void  TablePeripheralDevice::ValuePeripheralManufacturer(winrt::hstring const& e)
	{
		value_peripheral_manufacturer = e;

		return;

	}

	winrt::hstring TablePeripheralDevice::LabelPeripheralModel()
	{

		return label_peripheral_model;

	}

	void  TablePeripheralDevice::LabelPeripheralModel(winrt::hstring const& e)
	{
		label_peripheral_model = e;

		return;

	}

	winrt::hstring TablePeripheralDevice::ValuePeripheralModel()
	{

		return value_peripheral_model;

	}

	void  TablePeripheralDevice::ValuePeripheralModel(winrt::hstring const& e)
	{
		value_peripheral_model = e;

		return;

	}

	winrt::hstring TablePeripheralDevice::LabelPeripheralHVID()
	{

		return label_peripheral_hvid;

	}

	void  TablePeripheralDevice::LabelPeripheralHVID(winrt::hstring const& e)
	{
		label_peripheral_hvid = e;

		return;

	}

	winrt::hstring TablePeripheralDevice::ValuePeripheralHVID()
	{

		return value_peripheral_hvid;

	}

	void  TablePeripheralDevice::ValuePeripheralHVID(winrt::hstring const& e)
	{
		value_peripheral_hvid = e;

		return;

	}

	winrt::hstring TablePeripheralDevice::LabelPeripheralID()
	{

		return label_peripheral_id;

	}

	void  TablePeripheralDevice::LabelPeripheralID(winrt::hstring const& e)
	{
		label_peripheral_id = e;

		return;

	}

	winrt::hstring TablePeripheralDevice::ValuePeripheralID()
	{

		return value_peripheral_id;

	}

	void  TablePeripheralDevice::ValuePeripheralID(winrt::hstring const& e)
	{
		value_peripheral_id = e;

		return;

	}

	winrt::hstring TablePeripheralDevice::LabelPeripheralAcceleratorHVID()
	{

		return label_peripheral_accelerator_hvid;

	}

	void  TablePeripheralDevice::LabelPeripheralAcceleratorHVID(winrt::hstring const& e)
	{
		label_peripheral_accelerator_hvid = e;

		return;

	}

	winrt::hstring TablePeripheralDevice::ValuePeripheralAcceleratorHVID()
	{

		return value_peripheral_accelerator_hvid;

	}

	void  TablePeripheralDevice::ValuePeripheralAcceleratorHVID(winrt::hstring const& e)
	{
		value_peripheral_accelerator_hvid = e;

		return;

	}

	winrt::hstring TablePeripheralDevice::LabelPeripheralAcceleratorID()
	{

		return label_peripheral_accelerator_id;

	}

	void  TablePeripheralDevice::LabelPeripheralAcceleratorID(winrt::hstring const& e)
	{
		label_peripheral_accelerator_id = e;

		return;

	}

	winrt::hstring TablePeripheralDevice::ValuePeripheralAcceleratorID()
	{

		return value_peripheral_accelerator_id;

	}

	void  TablePeripheralDevice::ValuePeripheralAcceleratorID(winrt::hstring const& e)
	{
		value_peripheral_accelerator_id = e;

		return;

	}

	winrt::hstring TablePeripheralDevice::LabelPeripheralAcceleratorComPort()
	{

		return label_peripheral_accelerator_com_port;

	}

	void  TablePeripheralDevice::LabelPeripheralAcceleratorComPort(winrt::hstring const& e)
	{
		label_peripheral_accelerator_com_port = e;

		return;

	}

	winrt::hstring TablePeripheralDevice::ValuePeripheralAcceleratorComPort()
	{

		return value_peripheral_accelerator_com_port;

	}

	void  TablePeripheralDevice::ValuePeripheralAcceleratorComPort(winrt::hstring const& e)
	{
		value_peripheral_accelerator_com_port = e;

		return;

	}

}
