#pragma once

#include "ProjectIndex.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace WUX = winrt::Windows::UI::Xaml;
namespace WUXI = winrt::Windows::UI::Xaml::Interop;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;

namespace winrt::Duality137::implementation
{
    struct ProjectIndex : ProjectIndexT<ProjectIndex>
    {
    public:
        ProjectIndex();

    public:
        winrt::hstring ValueProjectIndexHVID();

        void ValueProjectIndexHVID(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_hvid{};

    public:
        winrt::hstring ValueProjectIndexMMM();

        void ValueProjectIndexMMM(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_mmm{};

    public:
        winrt::hstring ValueProjectIndexTag();

        void ValueProjectIndexTag(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_tag{};

    public:
        winrt::hstring ValueProjectIndexCreated();

        void ValueProjectIndexCreated(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_created{};

    public:
        winrt::hstring ValueProjectIndexUpdated();

        void ValueProjectIndexUpdated(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_updated{};

    public:
        winrt::hstring ValueProjectIndexDatabase();

        void ValueProjectIndexDatabase(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_database{};

    public:
        winrt::hstring ValueProjectIndexSchema();

        void ValueProjectIndexSchema(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_schema{};

    public:
        winrt::hstring ValueProjectIndexAccessLevel();

        void ValueProjectIndexAccessLevel(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_access_level{};

    public:
        winrt::hstring ValueProjectIndexAdministratorHVID();

        void ValueProjectIndexAdministratorHVID(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_administrator_hvid{};

    public:
        winrt::hstring ValueProjectIndexAdministratorTag();

        void ValueProjectIndexAdministratorTag(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_administrator_tag{};

    public:
        winrt::com_array<winrt::hstring>& ValueProjectIndexPermissions();

        void ValueProjectIndexPermissions(winrt::array_view<winrt::hstring const>);

    private:
        std::vector<winrt::hstring> value_project_index_permissions{};

    public:
        winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

        void PropertyChanged(winrt::event_token const&) noexcept;

    private:
        winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct ProjectIndex : ProjectIndexT<ProjectIndex, implementation::ProjectIndex>
    {
    };
}
