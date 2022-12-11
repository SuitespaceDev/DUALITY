#pragma once

#include "TableAccountPostgreSQL.g.h"

namespace winrt::HV4DX::implementation
{
    struct TableAccountPostgreSQL : TableAccountPostgreSQLT<TableAccountPostgreSQL>
    {
    public:
        TableAccountPostgreSQL();

    public:
        winrt::hstring LabelAccountDBHost();

        void LabelAccountDBHost(winrt::hstring const&);

    private:
        winrt::hstring label_accountdb_host{};

    public:
        winrt::hstring ValueAccountDBHost();

        void ValueAccountDBHost(winrt::hstring const&);

    private:
        winrt::hstring value_accountdb_host{};

    public:
        winrt::hstring LabelAccountDBRole();

        void LabelAccountDBRole(winrt::hstring const&);

    private:
        winrt::hstring label_accountdb_role{};

    public:
        winrt::hstring ValueAccountDBRole();

        void ValueAccountDBRole(winrt::hstring const&);

    private:
        winrt::hstring value_accountdb_role{};

    public:
        winrt::hstring LabelAccountDBPort();

        void LabelAccountDBPort(winrt::hstring const&);

    private:
        winrt::hstring label_accountdb_port{};

    public:
        winrt::hstring ValueAccountDBPort();

        void ValueAccountDBPort(winrt::hstring const&);

    private:
        winrt::hstring value_accountdb_port{};

    public:
        winrt::hstring LabelAccountDBService();

        void LabelAccountDBService(winrt::hstring const&);

    private:
        winrt::hstring label_accountdb_service{};

    public:
        winrt::hstring ValueAccountDBService();

        void ValueAccountDBService(winrt::hstring const&);

    private:
        winrt::hstring value_accountdb_service{};

    public:
        winrt::hstring LabelAccountDBSSLMode();

        void LabelAccountDBSSLMode(winrt::hstring const&);

    private:
        winrt::hstring label_accountdb_ssl_mode{};

    public:
        winrt::hstring ValueAccountDBSSLMode();

        void ValueAccountDBSSLMode(winrt::hstring const&);

    private:
        winrt::hstring value_accountdb_ssl_mode{};

    public:
        winrt::hstring LabelAccountDBSSLClientCert();

        void LabelAccountDBSSLClientCert(winrt::hstring const&);

    private:
        winrt::hstring label_accountdb_ssl_client_cert{};

    public:
        winrt::hstring ValueAccountDBSSLClientCert();

        void ValueAccountDBSSLClientCert(winrt::hstring const&);

    private:
        winrt::hstring value_accountdb_ssl_client_cert{};

    public:
        winrt::hstring LabelAccountDBSSLClientKey();

        void LabelAccountDBSSLClientKey(winrt::hstring const&);

    private:
        winrt::hstring label_accountdb_ssl_client_key{};

    public:
        winrt::hstring ValueAccountDBSSLClientKey();

        void ValueAccountDBSSLClientKey(winrt::hstring const&);

    private:
        winrt::hstring value_accountdb_ssl_client_key{};

    public:
        winrt::hstring LabelAccountDBSSLRootCert();

        void LabelAccountDBSSLRootCert(winrt::hstring const&);

    private:
        winrt::hstring label_accountdb_ssl_root_cert{};

    public:
        winrt::hstring ValueAccountDBSSLRootCert();

        void ValueAccountDBSSLRootCert(winrt::hstring const&);

    private:
        winrt::hstring value_accountdb_ssl_root_cert{};

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableAccountPostgreSQL : TableAccountPostgreSQLT<TableAccountPostgreSQL, implementation::TableAccountPostgreSQL>
    {
    };
}
