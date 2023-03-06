#include "pch.h"
#include "IndexedProject.xaml.h"
#if __has_include("IndexedProject.g.cpp")
#include "IndexedProject.g.cpp"
#endif

namespace winrt::Duality137::implementation
{
    IndexedProject::IndexedProject()
    {
        InitializeComponent();

    }

    winrt::hstring IndexedProject::ValueIndexedProjectHVID()
    {

        return value_project_index_hvid;

    }

    void IndexedProject::ValueIndexedProjectHVID(winrt::hstring const& e)
    {
        value_project_index_hvid = e;

    }

    winrt::hstring IndexedProject::ValueIndexedProjectMMM()
    {

        return value_project_index_mmm;

    }

    void IndexedProject::ValueIndexedProjectMMM(winrt::hstring const& e)
    {
        value_project_index_mmm = e;

    }

    winrt::hstring IndexedProject::ValueIndexedProjectTag()
    {

        return value_project_index_tag;

    }

    void IndexedProject::ValueIndexedProjectTag(winrt::hstring const& e)
    {
        value_project_index_tag = e;

    }

    winrt::hstring IndexedProject::ValueIndexedProjectCreated()
    {

        return value_project_index_created;

    }

    void IndexedProject::ValueIndexedProjectCreated(winrt::hstring const& e)
    {
        value_project_index_created = e;

    }

    winrt::hstring IndexedProject::ValueIndexedProjectUpdated()
    {

        return value_project_index_updated;

    }

    void IndexedProject::ValueIndexedProjectUpdated(winrt::hstring const& e)
    {
        value_project_index_updated = e;

    }

    winrt::hstring IndexedProject::ValueIndexedProjectDatabase()
    {

        return value_project_index_database;

    }

    void IndexedProject::ValueIndexedProjectDatabase(winrt::hstring const& e)
    {
        value_project_index_database = e;

    }

    winrt::hstring IndexedProject::ValueIndexedProjectSchema()
    {

        return value_project_index_schema;

    }

    void IndexedProject::ValueIndexedProjectSchema(winrt::hstring const& e)
    {
        value_project_index_schema = e;

    }

    winrt::hstring IndexedProject::ValueIndexedProjectAccessLevel()
    {

        return value_project_index_access_level;

    }

    void IndexedProject::ValueIndexedProjectAccessLevel(winrt::hstring const& e)
    {
        value_project_index_access_level = e;

    }

    winrt::hstring IndexedProject::ValueIndexedProjectAdministratorHVID()
    {

        return value_project_index_administrator_hvid;

    }

    void IndexedProject::ValueIndexedProjectAdministratorHVID(winrt::hstring const& e)
    {
        value_project_index_administrator_hvid = e;

    }

    winrt::hstring IndexedProject::ValueIndexedProjectAdministratorTag()
    {

        return value_project_index_administrator_tag;

    }

    void IndexedProject::ValueIndexedProjectAdministratorTag(winrt::hstring const& e)
    {
        value_project_index_administrator_tag = e;

    }
    
    winrt::com_array<winrt::hstring> IndexedProject::ValueIndexedProjectPermissions()
    {
        winrt::com_array<winrt::hstring> out{ value_project_index_permissions.begin(), value_project_index_permissions.end() };

        return out;

    }
    
    void IndexedProject::ValueIndexedProjectPermissions(winrt::array_view<winrt::hstring const> e)
    {
        std::for_each(e.begin(), e.end(), [this](winrt::hstring const& e) { value_project_index_permissions.push_back(e); });

    }
    
    event_token IndexedProject::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void IndexedProject::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

    void IndexedProject::Bootstrap(WF::IInspectable const&, MUX::RoutedEventArgs const&)
    {
    
    
    
    
    }

}
