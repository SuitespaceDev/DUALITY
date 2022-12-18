#pragma once

#include "TableAccelerator.g.h"

namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;

namespace winrt::HV4DX::implementation
{
    struct TableAccelerator : TableAcceleratorT<TableAccelerator>
    {
    public:
        TableAccelerator();

    public:
        winrt::hstring LabelAcceleratorManufacturer();

        void LabelAcceleratorManufacturer(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_manufacturer{};

    public:
        winrt::hstring ValueAcceleratorManufacturer();

        void ValueAcceleratorManufacturer(winrt::hstring const&);

    private:
        winrt::hstring value_accelerator_manufacturer{};

    public:
        winrt::hstring LabelAcceleratorModel();

        void LabelAcceleratorModel(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_model{};

    public:
        winrt::hstring ValueAcceleratorModel();

        void ValueAcceleratorModel(winrt::hstring const&);

    private:
        winrt::hstring value_accelerator_model{};

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
        winrt::hstring LabelAcceleratorID();

        void LabelAcceleratorID(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_id{};

    public:
        winrt::hstring ValueAcceleratorID();

        void ValueAcceleratorID(winrt::hstring const&);

    private:
        winrt::hstring value_accelerator_id{};

    public:
        winrt::hstring LabelAcceleratorCoreClock();

        void LabelAcceleratorCoreClock(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_core_clock{};

    public:
        winrt::hstring ValueAcceleratorCoreClock();

        void ValueAcceleratorCoreClock(winrt::hstring const&);

    private:
        winrt::hstring value_accelerator_core_clock{};

    public:
        winrt::hstring LabelAcceleratorMemory();

        void LabelAcceleratorMemory(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_memory{};

    public:
        winrt::hstring ValueAcceleratorMemory();

        void ValueAcceleratorMemory(winrt::hstring const&);

    private:
        winrt::hstring value_accelerator_memory{};

    public:
        winrt::hstring LabelAcceleratorMemoryClock();

        void LabelAcceleratorMemoryClock(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_memory_clock{};

    public:
        winrt::hstring ValueAcceleratorMemoryClock();

        void ValueAcceleratorMemoryClock(winrt::hstring const&);

    private:
        winrt::hstring value_accelerator_memory_clock{};

    public:
        winrt::hstring LabelAcceleratorMemorySize();

        void LabelAcceleratorMemorySize(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_memory_size{};

    public:
        winrt::hstring ValueAcceleratorMemorySize();

        void ValueAcceleratorMemorySize(winrt::hstring const&);

    private:
        winrt::hstring value_accelerator_memory_size{};

    public:
        WFITT::IObservableVector<HV4DX::TableAcceleratorBus> ItemIOBusConnections();

        void ItemIOBusConnections(WFITT::IObservableVector<HV4DX::TableAcceleratorBus> const&);

    private:
        WFITT::IObservableVector<HV4DX::TableAcceleratorBus> item_io_bus_connections{};

    public:
        winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

        void PropertyChanged(winrt::event_token const&) noexcept;

    private:
        winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableAccelerator : TableAcceleratorT<TableAccelerator, implementation::TableAccelerator>
    {
    };
}
