#include "pch.h"
#include "TableAccountPostgreSQL.xaml.h"
#if __has_include("TableAccountPostgreSQL.g.cpp")
#include "TableAccountPostgreSQL.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableAccountPostgreSQL::TableAccountPostgreSQL()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableAccountPostgreSQL::LabelAccountDBHost()
    {
        return label_accountdb_host;

    }

    void TableAccountPostgreSQL::LabelAccountDBHost(winrt::hstring const& e)
    {
        label_accountdb_host = e;

        return;

    }

    winrt::hstring TableAccountPostgreSQL::ValueAccountDBHost()
    {
        return value_accountdb_host;

    }

    void TableAccountPostgreSQL::ValueAccountDBHost(winrt::hstring const& e)
    {
        value_accountdb_host = e;

        return;

    }

    winrt::hstring TableAccountPostgreSQL::LabelAccountDBRole()
    {
        return label_accountdb_role;

    }

    void TableAccountPostgreSQL::LabelAccountDBRole(winrt::hstring const& e)
    {
        label_accountdb_role = e;

        return;

    }

    winrt::hstring TableAccountPostgreSQL::ValueAccountDBRole()
    {
        return value_accountdb_role;

    }

    void TableAccountPostgreSQL::ValueAccountDBRole(winrt::hstring const& e)
    {
        value_accountdb_role = e;

        return;

    }

    winrt::hstring TableAccountPostgreSQL::LabelAccountDBPort()
    {
        return label_accountdb_port;

    }

    void TableAccountPostgreSQL::LabelAccountDBPort(winrt::hstring const& e)
    {
        label_accountdb_port = e;

        return;

    }

    winrt::hstring TableAccountPostgreSQL::ValueAccountDBPort()
    {
        return value_accountdb_port;

    }

    void TableAccountPostgreSQL::ValueAccountDBPort(winrt::hstring const& e)
    {
        value_accountdb_port = e;

        return;

    }

    winrt::hstring TableAccountPostgreSQL::LabelAccountDBService()
    {
        return label_accountdb_service;

    }

    void TableAccountPostgreSQL::LabelAccountDBService(winrt::hstring const& e)
    {
        label_accountdb_service = e;

        return;

    }

    winrt::hstring TableAccountPostgreSQL::ValueAccountDBService()
    {
        return value_accountdb_service;

    }

    void TableAccountPostgreSQL::ValueAccountDBService(winrt::hstring const& e)
    {
        value_accountdb_service = e;

        return;

    }

    winrt::hstring TableAccountPostgreSQL::LabelAccountDBSSLMode()
    {
        return label_accountdb_ssl_mode;

    }

    void TableAccountPostgreSQL::LabelAccountDBSSLMode(winrt::hstring const& e)
    {
        label_accountdb_ssl_mode = e;

        return;

    }

    winrt::hstring TableAccountPostgreSQL::ValueAccountDBSSLMode()
    {
        return value_accountdb_ssl_mode;

    }

    void TableAccountPostgreSQL::ValueAccountDBSSLMode(winrt::hstring const& e)
    {
        value_accountdb_ssl_mode = e;

        return;

    }

    winrt::hstring TableAccountPostgreSQL::LabelAccountDBSSLClientCert()
    {
        return label_accountdb_ssl_client_cert;

    }

    void TableAccountPostgreSQL::LabelAccountDBSSLClientCert(winrt::hstring const& e)
    {
        label_accountdb_ssl_client_cert = e;

        return;

    }

    winrt::hstring TableAccountPostgreSQL::ValueAccountDBSSLClientCert()
    {
        return value_accountdb_ssl_client_cert;

    }

    void TableAccountPostgreSQL::ValueAccountDBSSLClientCert(winrt::hstring const& e)
    {
        value_accountdb_ssl_client_cert = e;

        return;

    }

    winrt::hstring TableAccountPostgreSQL::LabelAccountDBSSLClientKey()
    {
        return label_accountdb_ssl_client_key;

    }

    void TableAccountPostgreSQL::LabelAccountDBSSLClientKey(winrt::hstring const& e)
    {
        label_accountdb_ssl_client_key = e;

        return;

    }

    winrt::hstring TableAccountPostgreSQL::ValueAccountDBSSLClientKey()
    {
        return value_accountdb_ssl_client_key;

    }

    void TableAccountPostgreSQL::ValueAccountDBSSLClientKey(winrt::hstring const& e)
    {
        value_accountdb_ssl_client_key = e;

        return;

    }

    winrt::hstring TableAccountPostgreSQL::LabelAccountDBSSLRootCert()
    {
        return label_accountdb_ssl_root_cert;

    }

    void TableAccountPostgreSQL::LabelAccountDBSSLRootCert(winrt::hstring const& e)
    {
        label_accountdb_ssl_root_cert = e;

        return;

    }

    winrt::hstring TableAccountPostgreSQL::ValueAccountDBSSLRootCert()
    {
        return value_accountdb_ssl_root_cert;

    }

    void TableAccountPostgreSQL::ValueAccountDBSSLRootCert(winrt::hstring const& e)
    {
        value_accountdb_ssl_root_cert = e;

        return;

    }

}
