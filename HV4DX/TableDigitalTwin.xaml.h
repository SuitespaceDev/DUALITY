#pragma once

#include "TableDigitalTwin.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::HV4DX::implementation
{
    struct TableDigitalTwin : TableDigitalTwinT<TableDigitalTwin>
    {
    public:
        TableDigitalTwin();

    public:
        winrt::hstring LabelEnterpriseName();

        void LabelEnterpriseName(winrt::hstring const&);

    private:
        winrt::hstring label_enterprise_name{};

    public:
        winrt::hstring ValueEnterpriseName();

        void ValueEnterpriseName(winrt::hstring const&);

    private:
        winrt::hstring value_enterprise_name{};

    public:
        winrt::hstring LabelEnterpriseID();

        void LabelEnterpriseID(winrt::hstring const&);

    private:
        winrt::hstring label_enterprise_id{};

    public:
        winrt::hstring ValueEnterpriseID();

        void ValueEnterpriseID(winrt::hstring const&);

    private:
        winrt::hstring value_enterprise_id{};

    public:
        winrt::hstring LabelBuildName();

        void LabelBuildName(winrt::hstring const&);

    private:
        winrt::hstring label_build_name{};

    public:
        winrt::hstring ValueBuildName();

        void ValueBuildName(winrt::hstring const&);

    private:
        winrt::hstring value_build_name{};

    public:
        winrt::hstring LabelBuildID();

        void LabelBuildID(winrt::hstring const&);

    private:
        winrt::hstring label_build_id{};

    public:
        winrt::hstring ValueBuildID();

        void ValueBuildID(winrt::hstring const&);

    private:
        winrt::hstring value_build_id{};

    public:
        winrt::hstring LabelBuildMMM();

        void LabelBuildMMM(winrt::hstring const&);

    private:
        winrt::hstring label_build_mmm{};

    public:
        winrt::hstring ValueBuildMMM();

        void ValueBuildMMM(winrt::hstring const&);

    private:
        winrt::hstring value_build_mmm{};

    public:
        winrt::hstring LabelBuildDate();

        void LabelBuildDate(winrt::hstring const&);

    private:
        winrt::hstring label_build_date{};

    public:
        winrt::hstring ValueBuildDate();

        void ValueBuildDate(winrt::hstring const&);

    private:
        winrt::hstring value_build_date{};

    public:
        winrt::hstring LabelLocalization();

        void LabelLocalization(winrt::hstring const&);

    private:
        winrt::hstring label_localization{};

    public:
        uint32_t IndexLocalization();

        void IndexLocalization(uint32_t const&);

    private:
        uint32_t index_localization{};

    public:
        WFITT::IObservableVector<winrt::hstring> ListLocalization();

        void ListLocalization(WFITT::IObservableVector<winrt::hstring> const&);

    private:
        WFITT::IObservableVector<winrt::hstring> list_localization{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        winrt::hstring LabelTimeZone();

        void LabelTimeZone(winrt::hstring const&);

    private:
        winrt::hstring label_time_zone{};

    public:
        uint32_t IndexTimeZone();

        void IndexTimeZone(uint32_t const&);

    private:
        uint32_t index_time_zone{};

    public:
        WFITT::IObservableVector<winrt::hstring> ListTimeZone();

        void ListTimeZone(WFITT::IObservableVector<winrt::hstring> const&);

    private:
        WFITT::IObservableVector<winrt::hstring> list_time_zone{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        winrt::hstring LabelKeyboard();

        void LabelKeyboard(winrt::hstring const&);

    private:
        winrt::hstring label_keyboard{};

    public:
        uint32_t IndexKeyboard();

        void IndexKeyboard(uint32_t const&);

    private:
        uint32_t index_keyboard{};

    public:
        WFITT::IObservableVector<winrt::hstring> ListKeyboard();

        void ListKeyboard(WFITT::IObservableVector<winrt::hstring> const&);

    private:
        WFITT::IObservableVector<winrt::hstring> list_keyboard{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        winrt::hstring LabelWindowsTarget();

        void LabelWindowsTarget(winrt::hstring const&);

    private:
        winrt::hstring label_windows_target{};

    public:
        uint32_t IndexWindowsTarget();

        void IndexWindowsTarget(uint32_t const&);

    private:
        uint32_t index_windows_target{};

    public:
        WFITT::IObservableVector<winrt::hstring> ListWindowsTarget();

        void ListWindowsTarget(WFITT::IObservableVector<winrt::hstring> const&);

    private:
        WFITT::IObservableVector<winrt::hstring> list_windows_target{ winrt::single_threaded_observable_vector<winrt::hstring>() };

    public:
        winrt::hstring LabelExecutableDir();

        void LabelExecutableDir(winrt::hstring const&);

    private:
        winrt::hstring label_executable_dir{};

    public:
        winrt::hstring ValueExecutableDir();

        void ValueExecutableDir(winrt::hstring const&);

    private:
        winrt::hstring value_executable_dir{};

    public:
        winrt::hstring LabelAssetsDir();

        void LabelAssetsDir(winrt::hstring const&);

    private:
        winrt::hstring label_assets_dir{};

    public:
        winrt::hstring ValueAssetsDir();

        void ValueAssetsDir(winrt::hstring const&);

    private:
        winrt::hstring value_assets_dir{};

    public:
        winrt::hstring LabelXamlDir();

        void LabelXamlDir(winrt::hstring const&);

    private:
        winrt::hstring label_xaml_dir{};

    public:
        winrt::hstring ValueXamlDir();

        void ValueXamlDir(winrt::hstring const&);

    private:
        winrt::hstring value_xaml_dir{};

    public:
        winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

        void PropertyChanged(winrt::event_token const&) noexcept;

    private:
        winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableDigitalTwin : TableDigitalTwinT<TableDigitalTwin, implementation::TableDigitalTwin>
    {
    };
}
