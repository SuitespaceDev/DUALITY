#pragma once

#include "IndexedProject.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace WUX = winrt::Windows::UI::Xaml;
namespace WUXI = winrt::Windows::UI::Xaml::Interop;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;

namespace winrt::Duality137::implementation
{
    struct IndexedProject : IndexedProjectT<IndexedProject>
    {
    public:
        IndexedProject();

    public:
        winrt::hstring ValueIndexedProjectHVID();

        void ValueIndexedProjectHVID(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_hvid{};

    public:
        winrt::hstring ValueIndexedProjectMMM();

        void ValueIndexedProjectMMM(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_mmm{};

    public:
        winrt::hstring ValueIndexedProjectTag();

        void ValueIndexedProjectTag(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_tag{};

    public:
        winrt::hstring ValueIndexedProjectCreated();

        void ValueIndexedProjectCreated(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_created{};

    public:
        winrt::hstring ValueIndexedProjectUpdated();

        void ValueIndexedProjectUpdated(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_updated{};

    public:
        winrt::hstring ValueIndexedProjectDatabase();

        void ValueIndexedProjectDatabase(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_database{};

    public:
        winrt::hstring ValueIndexedProjectSchema();

        void ValueIndexedProjectSchema(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_schema{};

    public:
        winrt::hstring ValueIndexedProjectAccessLevel();

        void ValueIndexedProjectAccessLevel(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_access_level{};

    public:
        winrt::hstring ValueIndexedProjectAdministratorHVID();

        void ValueIndexedProjectAdministratorHVID(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_administrator_hvid{};

    public:
        winrt::hstring ValueIndexedProjectAdministratorTag();

        void ValueIndexedProjectAdministratorTag(winrt::hstring const&);

    private:
        winrt::hstring value_project_index_administrator_tag{};
        
    public:
        winrt::com_array<winrt::hstring> ValueIndexedProjectPermissions();

        void ValueIndexedProjectPermissions(winrt::array_view<winrt::hstring const>);

    private:
        std::vector<winrt::hstring> value_project_index_permissions{};
        
    public:
        winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

        void PropertyChanged(winrt::event_token const&) noexcept;

    private:
        winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

    public:
        void Bootstrap(WF::IInspectable const&, MUX::RoutedEventArgs const&);

    };

}

namespace winrt::Duality137::factory_implementation
{
    struct IndexedProject : IndexedProjectT<IndexedProject, implementation::IndexedProject>
    {
    };
}
