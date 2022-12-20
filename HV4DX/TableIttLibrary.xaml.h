#pragma once

#include "TableIttLibrary.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::HV4DX::implementation
{
    struct TableIttLibrary : TableIttLibraryT<TableIttLibrary>
    {
    public:
        TableIttLibrary();
        /*
    public:
        winrt::hstring LabelIttLibraryManufacturer();

        void LabelIttLibraryManufacturer(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_manufacturer{};

    public:
        winrt::hstring ValueIttLibraryManufacturer();

        void ValueIttLibraryManufacturer(winrt::hstring const&);

    private:
        winrt::hstring value_accelerator_manufacturer{};

    public:
        winrt::hstring LabelIttLibraryModel();

        void LabelIttLibraryModel(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_model{};

    public:
        winrt::hstring ValueIttLibraryModel();

        void ValueIttLibraryModel(winrt::hstring const&);

    private:
        winrt::hstring value_accelerator_model{};

    public:
        winrt::hstring LabelIttLibraryHVID();

        void LabelIttLibraryHVID(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_hvid{};

    public:
        winrt::hstring ValueIttLibraryHVID();

        void ValueIttLibraryHVID(winrt::hstring const&);

    private:
        winrt::hstring value_accelerator_hvid{};

    public:
        winrt::hstring LabelIttLibraryID();

        void LabelIttLibraryID(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_id{};

    public:
        winrt::hstring ValueIttLibraryID();

        void ValueIttLibraryID(winrt::hstring const&);

    private:
        winrt::hstring value_accelerator_id{};

    public:
        winrt::hstring LabelIttLibraryCoreClock();

        void LabelIttLibraryCoreClock(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_core_clock{};

    public:
        winrt::hstring ValueIttLibraryCoreClock();

        void ValueIttLibraryCoreClock(winrt::hstring const&);

    private:
        winrt::hstring value_accelerator_core_clock{};

    public:
        winrt::hstring LabelIttLibraryMemory();

        void LabelIttLibraryMemory(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_memory{};

    public:
        winrt::hstring ValueIttLibraryMemory();

        void ValueIttLibraryMemory(winrt::hstring const&);

    private:
        winrt::hstring value_accelerator_memory{};

    public:
        winrt::hstring LabelIttLibraryMemoryClock();

        void LabelIttLibraryMemoryClock(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_memory_clock{};

    public:
        winrt::hstring ValueIttLibraryMemoryClock();

        void ValueIttLibraryMemoryClock(winrt::hstring const&);

    private:
        winrt::hstring value_accelerator_memory_clock{};

    public:
        winrt::hstring LabelIttLibraryMemorySize();

        void LabelIttLibraryMemorySize(winrt::hstring const&);

    private:
        winrt::hstring label_accelerator_memory_size{};

    public:
        winrt::hstring ValueIttLibraryMemorySize();

        void ValueIttLibraryMemorySize(winrt::hstring const&);

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
        */
    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableIttLibrary : TableIttLibraryT<TableIttLibrary, implementation::TableIttLibrary>
    {
    };
}
