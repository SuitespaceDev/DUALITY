#include "pch.h"
#include "TableDigitalTwin.xaml.h"
#if __has_include("TableDigitalTwin.g.cpp")
#include "TableDigitalTwin.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableDigitalTwin::TableDigitalTwin()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableDigitalTwin::LabelEnterpriseName()
    {
        return label_enterprise_name;

    }

    void TableDigitalTwin::LabelEnterpriseName(winrt::hstring const& e)
    {
        label_enterprise_name = e;

        return;

    }

    winrt::hstring  TableDigitalTwin::ValueEnterpriseName()
    {
        return value_enterprise_name;

    }

    void  TableDigitalTwin::ValueEnterpriseName(winrt::hstring const& e)
    {
        value_enterprise_name = e;

        return;

    }

    winrt::hstring TableDigitalTwin::LabelEnterpriseID()
    {
        return label_enterprise_id;

    }

    void TableDigitalTwin::LabelEnterpriseID(winrt::hstring const& e)
    {
        label_enterprise_id = e;

        return;

    }

    winrt::hstring  TableDigitalTwin::ValueEnterpriseID()
    {
        return value_enterprise_id;

    }

    void  TableDigitalTwin::ValueEnterpriseID(winrt::hstring const& e)
    {
        value_enterprise_id = e;

        return;

    }

    winrt::hstring TableDigitalTwin::LabelBuildName()
    {
        return label_build_name;

    }

    void TableDigitalTwin::LabelBuildName(winrt::hstring const& e)
    {
        label_build_name = e;

        return;

    }

    winrt::hstring  TableDigitalTwin::ValueBuildName()
    {
        return value_build_name;

    }

    void  TableDigitalTwin::ValueBuildName(winrt::hstring const& e)
    {
        value_build_name = e;

        return;

    }

    winrt::hstring TableDigitalTwin::LabelBuildID()
    {
        return label_build_id;

    }

    void TableDigitalTwin::LabelBuildID(winrt::hstring const& e)
    {
        label_build_id = e;

        return;

    }

    winrt::hstring TableDigitalTwin::ValueBuildID()
    {
        return value_build_id;

    }

    void  TableDigitalTwin::ValueBuildID(winrt::hstring const& e)
    {
        value_build_id = e;

        return;

    }

    winrt::hstring TableDigitalTwin::LabelBuildMMM()
    {
        return label_build_mmm;

    }

    void TableDigitalTwin::LabelBuildMMM(winrt::hstring const& e)
    {
        label_build_mmm = e;

        return;

    }

    winrt::hstring  TableDigitalTwin::ValueBuildMMM()
    {
        return value_build_mmm;

    }

    void  TableDigitalTwin::ValueBuildMMM(winrt::hstring const& e)
    {
        value_build_mmm = e;

        return;

    }

    winrt::hstring TableDigitalTwin::LabelBuildDate()
    {
        return label_build_date;

    }

    void TableDigitalTwin::LabelBuildDate(winrt::hstring const& e)
    {
        label_build_date = e;

        return;

    }

    winrt::hstring  TableDigitalTwin::ValueBuildDate()
    {
        return value_build_date;

    }

    void  TableDigitalTwin::ValueBuildDate(winrt::hstring const& e)
    {
        value_build_date = e;

        return;

    }






    winrt::hstring TableDigitalTwin::LabelLocalization()
    {
        return label_localization;

    }

    void TableDigitalTwin::LabelLocalization(winrt::hstring const& e)
    {
        label_localization = e;

        return;

    }

    uint32_t TableDigitalTwin::IndexLocalization()
    {
        return index_localization;

    }

    void TableDigitalTwin::IndexLocalization(uint32_t const& e)
    {
        index_localization = e;

        return;

    }

    WFITT::IObservableVector<winrt::hstring> TableDigitalTwin::ListLocalization()
    {
        if (list_localization.Size() == 0)
        {
            list_localization.Append(L"Empty");

            index_localization = 0;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"IndexLocalization" });

            return list_localization;

        }
        else
        {
            return list_localization;

        }

    }

    void TableDigitalTwin::ListLocalization(WFITT::IObservableVector<winrt::hstring> const& e)
    {
        if (e.Size() != 0)
        {
            list_localization.Clear();

            list_localization = e;

            index_localization = 0;

            property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"IndexLocalization" });

            return;

        }

        return;

    }










    winrt::hstring TableDigitalTwin::LabelTimeZone()
    {
        return label_time_zone;

    }

    void TableDigitalTwin::LabelTimeZone(winrt::hstring const& e)
    {
        label_time_zone = e;

        return;

    }








    winrt::hstring TableDigitalTwin::LabelKeyboard()
    {
        return label_keyboard;

    }

    void TableDigitalTwin::LabelKeyboard(winrt::hstring const& e)
    {
        label_keyboard = e;

        return;

    }








    winrt::hstring TableDigitalTwin::LabelWindowsTarget()
    {
        return label_windows_target;

    }

    void TableDigitalTwin::LabelWindowsTarget(winrt::hstring const& e)
    {
        label_windows_target = e;

        return;

    }









    winrt::hstring TableDigitalTwin::LabelExecutableDir()
    {
        return label_executable_dir;

    }

    void TableDigitalTwin::LabelExecutableDir(winrt::hstring const& e)
    {
        label_executable_dir = e;

        return;

    }

    winrt::hstring  TableDigitalTwin::ValueExecutableDir()
    {
        return value_executable_dir;

    }

    void  TableDigitalTwin::ValueExecutableDir(winrt::hstring const& e)
    {
        value_executable_dir = e;

        return;

    }

    winrt::hstring TableDigitalTwin::LabelAssetsDir()
    {
        return label_assets_dir;

    }

    void TableDigitalTwin::LabelAssetsDir(winrt::hstring const& e)
    {
        label_assets_dir = e;

        return;

    }

    winrt::hstring  TableDigitalTwin::ValueAssetsDir()
    {
        return value_assets_dir;

    }

    void  TableDigitalTwin::ValueAssetsDir(winrt::hstring const& e)
    {
        value_assets_dir = e;

        return;

    }

    winrt::hstring TableDigitalTwin::LabelXamlDir()
    {
        return label_xaml_dir;

    }

    void TableDigitalTwin::LabelXamlDir(winrt::hstring const& e)
    {
        label_xaml_dir = e;

        return;

    }

    winrt::hstring  TableDigitalTwin::ValueXamlDir()
    {
        return value_xaml_dir;

    }

    void  TableDigitalTwin::ValueXamlDir(winrt::hstring const& e)
    {
        value_xaml_dir = e;

        return;

    }

    event_token TableDigitalTwin::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void TableDigitalTwin::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
