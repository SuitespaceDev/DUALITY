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
        winrt::hstring label_theme{};

    public:
        winrt::hstring ValueBuildTheme();

        void ValueBuildTheme(winrt::hstring const&);

    private:
        winrt::hstring value_theme{};

    public:
        winrt::hstring LabelBuildUIScale();

        void LabelBuildUIScale(winrt::hstring const&);

    private:
        winrt::hstring label_ui_scale{};

    public:
        winrt::hstring ValueBuildUIScale();

        void ValueBuildUIScale(winrt::hstring const&);

    private:
        winrt::hstring value_ui_scale{};

    public:
        winrt::hstring LabelBuildAntiAliasing();

        void LabelBuildAntiAliasing(winrt::hstring const&);

    private:
        winrt::hstring label_anti_aliasing{};

    public:
        winrt::hstring ValueBuildAntiAliasing();

        void ValueBuildAntiAliasing(winrt::hstring const&);

    private:
        winrt::hstring value_anti_aliasing{};

    public:
        winrt::hstring LabelBuildFullScreen();

        void LabelBuildFullScreen(winrt::hstring const&);

    private:
        winrt::hstring label_full_screen{};

    public:
        winrt::hstring ValueBuildFullScreen();

        void ValueBuildFullScreen(winrt::hstring const&);

    private:
        winrt::hstring value_full_screen{};

    public:
        winrt::hstring LabelBuildResolution();

        void LabelBuildResolution(winrt::hstring const&);

    private:
        winrt::hstring label_resolution{};

    public:
        winrt::hstring ValueBuildResolution();

        void ValueBuildResolution(winrt::hstring const&);

    private:
        winrt::hstring value_resolution{};

    public:
        winrt::hstring LabelBuildRefreshRate();

        void LabelBuildRefreshRate(winrt::hstring const&);

    private:
        winrt::hstring label_refresh_rate{};

    public:
        winrt::hstring ValueBuildRefreshRate();

        void ValueBuildRefreshRate(winrt::hstring const&);

    private:
        winrt::hstring value_refresh_rate{};

    public:
        winrt::hstring LabelBuildFont();

        void LabelBuildFont(winrt::hstring const&);

    private:
        winrt::hstring label_font{};

    public:
        winrt::hstring ValueBuildFont();

        void ValueBuildFont(winrt::hstring const&);

    private:
        winrt::hstring value_font{};

    public:
        winrt::hstring LabelBuildFontSize();

        void LabelBuildFontSize(winrt::hstring const&);

    private:
        winrt::hstring label_font_size{};

    public:
        winrt::hstring ValueBuildFontSize();

        void ValueBuildFontSize(winrt::hstring const&);

    private:
        winrt::hstring value_font_size{};

    public:
        winrt::hstring LabelBuildFontWeight();

        void LabelBuildFontWeight(winrt::hstring const&);

    private:
        winrt::hstring label_font_weight{};

    public:
        winrt::hstring ValueBuildFontWeight();

        void ValueBuildFontWeight(winrt::hstring const&);

    private:
        winrt::hstring value_font_weight{};

    };

}

namespace winrt::HV4DX::factory_implementation
{
    struct TableWindow : TableWindowT<TableWindow, implementation::TableWindow>
    {
    };
}
