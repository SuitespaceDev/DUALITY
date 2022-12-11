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
        return theme;

    }

    void TableWindow::LabelBuildTheme(winrt::hstring const& e)
    {
        theme = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildUIScale()
    {
        return ui_scale;

    }

    void TableWindow::LabelBuildUIScale(winrt::hstring const& e)
    {
        ui_scale = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildAntiAliasing()
    {
        return anti_aliasing;

    }

    void TableWindow::LabelBuildAntiAliasing(winrt::hstring const& e)
    {
        anti_aliasing = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildFullScreen()
    {
        return full_screen;

    }

    void TableWindow::LabelBuildFullScreen(winrt::hstring const& e)
    {
        full_screen = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildResolution()
    {
        return resolution;

    }

    void TableWindow::LabelBuildResolution(winrt::hstring const& e)
    {
        resolution = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildRefreshRate()
    {
        return refresh_rate;

    }

    void TableWindow::LabelBuildRefreshRate(winrt::hstring const& e)
    {
        refresh_rate = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildFont()
    {
        return font;

    }

    void TableWindow::LabelBuildFont(winrt::hstring const& e)
    {
        font = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildFontSize()
    {
        return font_size;

    }

    void TableWindow::LabelBuildFontSize(winrt::hstring const& e)
    {
        font_size = e;

        return;

    }

    winrt::hstring TableWindow::LabelBuildFontWeight()
    {
        return font_weight;

    }

    void TableWindow::LabelBuildFontWeight(winrt::hstring const& e)
    {
        font_weight = e;

        return;

    }

}
