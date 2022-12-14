#include "pch.h"
#include "TableWindow.xaml.h"
#if __has_include("TableWindow.g.cpp")
#include "TableWindow.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableWindow::TableWindow()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableWindow::LabelBuildTheme()
    {
        return label_theme;

    }

    void TableWindow::LabelBuildTheme(winrt::hstring const& e)
    {
        label_theme = e;

        return;

    }

    winrt::hstring TableWindow::ValueBuildTheme()
    {
        return value_theme;

    }

    void TableWindow::ValueBuildTheme(winrt::hstring const& e)
    {
        value_theme = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildUIScale()
    {
        return label_ui_scale;

    }

    void TableWindow::LabelBuildUIScale(winrt::hstring const& e)
    {
        label_ui_scale = e;

        return;

    }

    winrt::hstring TableWindow::ValueBuildUIScale()
    {
        return value_ui_scale;

    }

    void TableWindow::ValueBuildUIScale(winrt::hstring const& e)
    {
        value_ui_scale = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildAntiAliasing()
    {
        return label_anti_aliasing;

    }

    void TableWindow::LabelBuildAntiAliasing(winrt::hstring const& e)
    {
        label_anti_aliasing = e;

        return;

    }

    winrt::hstring TableWindow::ValueBuildAntiAliasing()
    {
        return value_anti_aliasing;

    }

    void TableWindow::ValueBuildAntiAliasing(winrt::hstring const& e)
    {
        value_anti_aliasing = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildFullScreen()
    {
        return label_full_screen;

    }

    void TableWindow::LabelBuildFullScreen(winrt::hstring const& e)
    {
        label_full_screen = e;

        return;

    }

    winrt::hstring TableWindow::ValueBuildFullScreen()
    {
        return value_full_screen;

    }

    void TableWindow::ValueBuildFullScreen(winrt::hstring const& e)
    {
        value_full_screen = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildResolution()
    {
        return label_resolution;

    }

    void TableWindow::LabelBuildResolution(winrt::hstring const& e)
    {
        label_resolution = e;

        return;

    }

    winrt::hstring TableWindow::ValueBuildResolution()
    {
        return value_resolution;

    }

    void TableWindow::ValueBuildResolution(winrt::hstring const& e)
    {
        value_resolution = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildRefreshRate()
    {
        return label_refresh_rate;

    }

    void TableWindow::LabelBuildRefreshRate(winrt::hstring const& e)
    {
        label_refresh_rate = e;

        return;

    }

    winrt::hstring TableWindow::ValueBuildRefreshRate()
    {
        return value_refresh_rate;

    }

    void TableWindow::ValueBuildRefreshRate(winrt::hstring const& e)
    {
        value_refresh_rate = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildFont()
    {
        return label_font;

    }

    void TableWindow::LabelBuildFont(winrt::hstring const& e)
    {
        label_font = e;

        return;

    }

    winrt::hstring TableWindow::ValueBuildFont()
    {
        return value_font;

    }

    void TableWindow::ValueBuildFont(winrt::hstring const& e)
    {
        value_font = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildFontSize()
    {
        return label_font_size;

    }

    void TableWindow::LabelBuildFontSize(winrt::hstring const& e)
    {
        label_font_size = e;

        return;

    }

    winrt::hstring TableWindow::ValueBuildFontSize()
    {
        return value_font_size;

    }

    void TableWindow::ValueBuildFontSize(winrt::hstring const& e)
    {
        value_font_size = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildFontWeight()
    {
        return label_font_weight;

    }

    void TableWindow::LabelBuildFontWeight(winrt::hstring const& e)
    {
        label_font_weight = e;

        return;

    }

    winrt::hstring TableWindow::ValueBuildFontWeight()
    {
        return value_font_weight;

    }

    void TableWindow::ValueBuildFontWeight(winrt::hstring const& e)
    {
        value_font_weight = e;

        return;

    }

}
