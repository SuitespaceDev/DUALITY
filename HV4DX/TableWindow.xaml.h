#pragma once

#include "TableWindow.g.h"

namespace WF = winrt::Windows::Foundation;

namespace MUX = winrt::Microsoft::UI::Xaml;

namespace winrt::HV4DX::implementation
{
    struct TableWindow : TableWindowT<TableWindow>
    {
    public:
        TableWindow();

    public:
        winrt::hstring LabelBuildTheme();

        void LabelBuildTheme(winrt::hstring const&);

    private:
        winrt::hstring theme{};

    public:
        winrt::hstring LabelBuildUIScale();

        void LabelBuildUIScale(winrt::hstring const&);

    private:
        winrt::hstring ui_scale{};

    public:
        winrt::hstring LabelBuildAntiAliasing();

        void LabelBuildAntiAliasing(winrt::hstring const&);

    private:
        winrt::hstring anti_aliasing{};

    public:
        winrt::hstring LabelBuildFullScreen();

        void LabelBuildFullScreen(winrt::hstring const&);

    private:
        winrt::hstring full_screen{};

    public:
        winrt::hstring LabelBuildResolution();

        void LabelBuildResolution(winrt::hstring const&);

    private:
        winrt::hstring resolution{};

    public:
        winrt::hstring LabelBuildRefreshRate();

        void LabelBuildRefreshRate(winrt::hstring const&);

    private:
        winrt::hstring refresh_rate{};

    public:
        winrt::hstring LabelBuildFont();

        void LabelBuildFont(winrt::hstring const&);

    private:
        winrt::hstring font{};

    public:
        winrt::hstring LabelBuildFontSize();

        void LabelBuildFontSize(winrt::hstring const&);

    private:
        winrt::hstring font_size{};

    public:
        winrt::hstring LabelBuildFontWeight();

        void LabelBuildFontWeight(winrt::hstring const&);

    private:
        winrt::hstring font_weight{};

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableWindow : TableWindowT<TableWindow, implementation::TableWindow>
    {
    };
}
