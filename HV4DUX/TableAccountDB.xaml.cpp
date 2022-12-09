#include "pch.h"
#include "TableAccountDB.xaml.h"
#if __has_include("TableAccountDB.g.cpp")
#include "TableAccountDB.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
{
    TableAccountDB::TableAccountDB()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableAccountDB::LabelAccountDBHost()
    {
        return label_accountdb_host;

    }

    void TableAccountDB::LabelAccountDBHost(winrt::hstring const& e)
    {
        label_accountdb_host = e;

        return;

    }

    winrt::hstring TableAccountDB::ValueAccountDBHost()
    {
        return value_accountdb_host;

    }

    void TableAccountDB::ValueAccountDBHost(winrt::hstring const& e)
    {
        value_accountdb_host = e;

        return;

    }

    winrt::hstring TableAccountDB::LabelAccountDBRole()
    {
        return label_accountdb_role;

    }

    void TableAccountDB::LabelAccountDBRole(winrt::hstring const& e)
    {
        label_accountdb_role = e;

        return;

    }

    winrt::hstring TableAccountDB::ValueAccountDBRole()
    {
        return value_accountdb_role;

    }

    void TableAccountDB::ValueAccountDBRole(winrt::hstring const& e)
    {
        value_accountdb_role = e;

        return;

    }

    winrt::hstring TableAccountDB::LabelAccountDBPort()
    {
        return label_accountdb_port;

    }

    void TableAccountDB::LabelAccountDBPort(winrt::hstring const& e)
    {
        label_accountdb_port = e;

        return;

    }

    winrt::hstring TableAccountDB::ValueAccountDBPort()
    {
        return value_accountdb_port;

    }

    void TableAccountDB::ValueAccountDBPort(winrt::hstring const& e)
    {
        value_accountdb_port = e;

        return;

    }

    winrt::hstring TableAccountDB::LabelAccountDBService()
    {
        return label_accountdb_service;

    }

    void TableAccountDB::LabelAccountDBService(winrt::hstring const& e)
    {
        label_accountdb_service = e;

        return;

    }

    winrt::hstring TableAccountDB::ValueAccountDBService()
    {
        return value_accountdb_service;

    }

    void TableAccountDB::ValueAccountDBService(winrt::hstring const& e)
    {
        value_accountdb_service = e;

        return;

    }

    winrt::hstring TableAccountDB::LabelAccountDBSSLMode()
    {
        return label_accountdb_ssl_mode;

    }

    void TableAccountDB::LabelAccountDBSSLMode(winrt::hstring const& e)
    {
        label_accountdb_ssl_mode = e;

        return;

    }

    winrt::hstring TableAccountDB::ValueAccountDBSSLMode()
    {
        return value_accountdb_ssl_mode;

    }

    void TableAccountDB::ValueAccountDBSSLMode(winrt::hstring const& e)
    {
        value_accountdb_ssl_mode = e;

        return;

    }

    winrt::hstring TableAccountDB::LabelAccountDBSSLClientCert()
    {
        return label_accountdb_ssl_client_cert;

    }

    void TableAccountDB::LabelAccountDBSSLClientCert(winrt::hstring const& e)
    {
        label_accountdb_ssl_client_cert = e;

        return;

    }

    winrt::hstring TableAccountDB::ValueAccountDBSSLClientCert()
    {
        return value_accountdb_ssl_client_cert;

    }

    void TableAccountDB::ValueAccountDBSSLClientCert(winrt::hstring const& e)
    {
        value_accountdb_ssl_client_cert = e;

        return;

    }

    winrt::hstring TableAccountDB::LabelAccountDBSSLClientKey()
    {
        return label_accountdb_ssl_client_key;

    }

    void TableAccountDB::LabelAccountDBSSLClientKey(winrt::hstring const& e)
    {
        label_accountdb_ssl_client_key = e;

        return;

    }

    winrt::hstring TableAccountDB::ValueAccountDBSSLClientKey()
    {
        return value_accountdb_ssl_client_key;

    }

    void TableAccountDB::ValueAccountDBSSLClientKey(winrt::hstring const& e)
    {
        value_accountdb_ssl_client_key = e;

        return;

    }

    winrt::hstring TableAccountDB::LabelAccountDBSSLRootCert()
    {
        return label_accountdb_ssl_root_cert;

    }

    void TableAccountDB::LabelAccountDBSSLRootCert(winrt::hstring const& e)
    {
        label_accountdb_ssl_root_cert = e;

        return;

    }

    winrt::hstring TableAccountDB::ValueAccountDBSSLRootCert()
    {
        return value_accountdb_ssl_root_cert;

    }

    void TableAccountDB::ValueAccountDBSSLRootCert(winrt::hstring const& e)
    {
        value_accountdb_ssl_root_cert = e;

        return;

    }

}
