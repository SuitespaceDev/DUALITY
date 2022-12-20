#pragma once

#include "TableAccelerator.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN = winrt::Microsoft::UI::Xaml::Navigation;

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
        uint32_t IndexAcceleratorID();

        void IndexAcceleratorID(uint32_t const&);

    private:
        uint32_t index_accelerator_id{};

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
        winrt::hstring LabelAcceleratorCoreClock();

        void LabelAcceleratorCoreClock(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_core_clock{};

    public:
        uint32_t IndexAcceleratorCoreClock();

        void IndexAcceleratorCoreClock(uint32_t const&);

    private:
        uint32_t index_accelerator_core_clock{};

    public:
        winrt::hstring LabelAcceleratorMemoryClock();

        void LabelAcceleratorMemoryClock(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_memory_clock{};

    public:
        uint32_t IndexAcceleratorMemoryClock();

        void IndexAcceleratorMemoryClock(uint32_t const&);

    private:
        uint32_t index_accelerator_memory_clock{};

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
        MUXC::TextBlock ListComPortSelectedProtocol();

        void ListComPortSelectedProtocol(MUXC::TextBlock const&);

    private:
        MUXC::TextBlock list_com_port_selected_protocol{};

    public:
        WFITT::IObservableVector<MUXC::TextBlock> ListComPortProtocol();

        void ListComPortProtocol(WFITT::IObservableVector<MUXC::TextBlock> const&);

    private:
        WFITT::IObservableVector<MUXC::TextBlock> list_com_port_protocol{ winrt::single_threaded_observable_vector<MUXC::TextBlock>() };

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
