﻿#include "pch.h"
#include "TableAccelerator.xaml.h"
#if __has_include("TableAccelerator.g.cpp")
#include "TableAccelerator.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableAccelerator::TableAccelerator()
    {
        InitializeComponent();

        return;

    }

	winrt::hstring TableAccelerator::LabelAcceleratorManufacturer()
	{

		return label_accelerator_manufacturer;

	}

	void  TableAccelerator::LabelAcceleratorManufacturer(winrt::hstring const& e)
	{
		label_accelerator_manufacturer = e;

		return;

	}

	winrt::hstring TableAccelerator::ValueAcceleratorManufacturer()
	{

		return value_accelerator_manufacturer;

	}

	void  TableAccelerator::ValueAcceleratorManufacturer(winrt::hstring const& e)
	{
		value_accelerator_manufacturer = e;

		return;

	}

	winrt::hstring TableAccelerator::LabelAcceleratorModel()
	{

		return label_accelerator_model;

	}

	void  TableAccelerator::LabelAcceleratorModel(winrt::hstring const& e)
	{
		label_accelerator_model = e;

		return;

	}

	winrt::hstring TableAccelerator::ValueAcceleratorModel()
	{

		return value_accelerator_model;

	}

	void  TableAccelerator::ValueAcceleratorModel(winrt::hstring const& e)
	{
		value_accelerator_model = e;

		return;

	}

	winrt::hstring TableAccelerator::LabelAcceleratorHVID()
	{

		return label_accelerator_hvid;

	}

	void  TableAccelerator::LabelAcceleratorHVID(winrt::hstring const& e)
	{
		label_accelerator_hvid = e;

		return;

	}

	winrt::hstring TableAccelerator::ValueAcceleratorHVID()
	{

		return value_accelerator_hvid;

	}

	void  TableAccelerator::ValueAcceleratorHVID(winrt::hstring const& e)
	{
		value_accelerator_hvid = e;

		return;

	}

	winrt::hstring TableAccelerator::LabelAcceleratorID()
	{

		return label_accelerator_id;

	}

	void  TableAccelerator::LabelAcceleratorID(winrt::hstring const& e)
	{
		label_accelerator_id = e;

		return;

	}

	winrt::hstring TableAccelerator::ValueAcceleratorID()
	{

		return value_accelerator_id;

	}

	void  TableAccelerator::ValueAcceleratorID(winrt::hstring const& e)
	{
		value_accelerator_id = e;

		return;

	}

	winrt::hstring TableAccelerator::LabelAcceleratorMemory()
	{

		return label_accelerator_memory;

	}

	void  TableAccelerator::LabelAcceleratorMemory(winrt::hstring const& e)
	{
		label_accelerator_memory = e;

		return;

	}

	winrt::hstring TableAccelerator::ValueAcceleratorMemory()
	{

		return value_accelerator_memory;

	}

	void  TableAccelerator::ValueAcceleratorMemory(winrt::hstring const& e)
	{
		value_accelerator_memory = e;

		return;

	}

	winrt::hstring TableAccelerator::LabelAcceleratorCoreClock()
	{

		return label_accelerator_core_clock;

	}

	void  TableAccelerator::LabelAcceleratorCoreClock(winrt::hstring const& e)
	{
		label_accelerator_core_clock = e;

		return;

	}

	winrt::hstring TableAccelerator::ValueAcceleratorCoreClock()
	{

		return value_accelerator_core_clock;

	}

	void  TableAccelerator::ValueAcceleratorCoreClock(winrt::hstring const& e)
	{
		value_accelerator_core_clock = e;

		return;

	}

	winrt::hstring TableAccelerator::LabelAcceleratorMemoryClock()
	{

		return label_accelerator_memory_clock;

	}

	void  TableAccelerator::LabelAcceleratorMemoryClock(winrt::hstring const& e)
	{
		label_accelerator_memory_clock = e;

		return;

	}

	winrt::hstring TableAccelerator::ValueAcceleratorMemoryClock()
	{

		return value_accelerator_memory_clock;

	}

	void  TableAccelerator::ValueAcceleratorMemoryClock(winrt::hstring const& e)
	{
		value_accelerator_memory_clock = e;

		return;

	}

	winrt::hstring TableAccelerator::LabelAcceleratorMemorySize()
	{

		return label_accelerator_memory_size;

	}

	void  TableAccelerator::LabelAcceleratorMemorySize(winrt::hstring const& e)
	{
		label_accelerator_memory_size = e;

		return;

	}

	winrt::hstring TableAccelerator::ValueAcceleratorMemorySize()
	{

		return value_accelerator_memory_size;

	}

	void  TableAccelerator::ValueAcceleratorMemorySize(winrt::hstring const& e)
	{
		value_accelerator_memory_size = e;

		return;

	}

	WFITT::IObservableVector<HV4DX::TableAcceleratorBus> TableAccelerator::ItemIOBusConnections()
	{

		return item_io_bus_connections;

	}

	void TableAccelerator::ItemIOBusConnections(WFITT::IObservableVector<HV4DX::TableAcceleratorBus> const& e)
	{
		if (e.Size() > 0)
		{
			item_io_bus_connections.Clear();

			item_io_bus_connections = e;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"TableAcceleratorBus" });

		}

		return;

	}

	event_token TableAccelerator::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void TableAccelerator::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
