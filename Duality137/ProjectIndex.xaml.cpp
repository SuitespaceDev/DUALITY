#include "pch.h"
#include "ProjectIndex.xaml.h"
#if __has_include("ProjectIndex.g.cpp")
#include "ProjectIndex.g.cpp"
#endif

namespace winrt::Duality137::implementation
{
    ProjectIndex::ProjectIndex()
    {
        InitializeComponent();

    }

    winrt::hstring ProjectIndex::ValueProjectIndexHVID()
    {

        return value_project_index_hvid;

    }

    void ProjectIndex::ValueProjectIndexHVID(winrt::hstring const& e)
    {
        value_project_index_hvid = e;

    }

    winrt::hstring ProjectIndex::ValueProjectIndexMMM()
    {

        return value_project_index_mmm;

    }

    void ProjectIndex::ValueProjectIndexMMM(winrt::hstring const& e)
    {
        value_project_index_mmm = e;

    }

    winrt::hstring ProjectIndex::ValueProjectIndexTag()
    {

        return value_project_index_tag;

    }

    void ProjectIndex::ValueProjectIndexTag(winrt::hstring const& e)
    {
        value_project_index_tag = e;

    }

    winrt::hstring ProjectIndex::ValueProjectIndexCreated()
    {

        return value_project_index_created;

    }

    void ProjectIndex::ValueProjectIndexCreated(winrt::hstring const& e)
    {
        value_project_index_created = e;

    }

    winrt::hstring ProjectIndex::ValueProjectIndexUpdated()
    {

        return value_project_index_updated;

    }

    void ProjectIndex::ValueProjectIndexUpdated(winrt::hstring const& e)
    {
        value_project_index_updated = e;

    }

    winrt::hstring ProjectIndex::ValueProjectIndexDatabase()
    {

        return value_project_index_database;

    }

    void ProjectIndex::ValueProjectIndexDatabase(winrt::hstring const& e)
    {
        value_project_index_database = e;

    }

    winrt::hstring ProjectIndex::ValueProjectIndexSchema()
    {

        return value_project_index_schema;

    }

    void ProjectIndex::ValueProjectIndexSchema(winrt::hstring const& e)
    {
        value_project_index_schema = e;

    }

    winrt::hstring ProjectIndex::ValueProjectIndexAccessLevel()
    {

        return value_project_index_access_level;

    }

    void ProjectIndex::ValueProjectIndexAccessLevel(winrt::hstring const& e)
    {
        value_project_index_access_level = e;

    }

    winrt::hstring ProjectIndex::ValueProjectIndexAdministratorHVID()
    {

        return value_project_index_administrator_hvid;

    }

    void ProjectIndex::ValueProjectIndexAdministratorHVID(winrt::hstring const& e)
    {
        value_project_index_administrator_hvid = e;

    }

    winrt::hstring ProjectIndex::ValueProjectIndexAdministratorTag()
    {

        return value_project_index_administrator_tag;

    }

    void ProjectIndex::ValueProjectIndexAdministratorTag(winrt::hstring const& e)
    {
        value_project_index_administrator_tag = e;

    }

    winrt::com_array<winrt::hstring>& ProjectIndex::ValueProjectIndexPermissions()
    {
        winrt::com_array<winrt::hstring> out{ value_project_index_permissions };

        return out;

    }

    void ProjectIndex::ValueProjectIndexPermissions(winrt::array_view<winrt::hstring const> e)
    {
        std::for_each(e.begin(), e.end(), [this](winrt::hstring const& e) { value_project_index_permissions.push_back(e); });

    }

    event_token ProjectIndex::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
    {

        return property_changed_event.add(handler);

    }

    void ProjectIndex::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_event.remove(token);

        return;

    }

}
