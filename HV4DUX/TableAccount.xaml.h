#pragma once

#include "TableAccount.g.h"

namespace winrt::HV4DUX::implementation
{
    struct TableAccount : TableAccountT<TableAccount>
    {
    public:
        TableAccount();

    public:
        winrt::hstring LabelAccountHVID();

        void LabelAccountHVID(winrt::hstring const&);

    private:
        winrt::hstring label_hvid{};

    public:
        winrt::hstring ValueAccountHVID();

        void ValueAccountHVID(winrt::hstring const&);

    private:
        winrt::hstring value_hvid{};

    public:
        winrt::hstring LabelAccountMaxPath();

        void LabelAccountMaxPath(winrt::hstring const&);

    public:
        winrt::hstring LabelAccountID();

        void LabelAccountID(winrt::hstring const&);

    private:
        winrt::hstring label_account_id{};

    public:
        winrt::hstring ValueAccountID();

        void ValueAccountID(winrt::hstring const&);

    private:
        winrt::hstring value_account_id{};

    private:
        winrt::hstring label_maxpath{};

    public:
        winrt::hstring ValueAccountMaxPath();

        void ValueAccountMaxPath(winrt::hstring const&);

    private:
        winrt::hstring value_maxpath{};

    public:
        winrt::hstring LabelAccountCreated();

        void LabelAccountCreated(winrt::hstring const&);

    private:
        winrt::hstring label_created{};

    public:
        winrt::hstring ValueAccountCreated();

        void ValueAccountCreated(winrt::hstring const&);

    private:
        winrt::hstring value_created{};

    public:
        winrt::hstring LabelAccountUpdated();

        void LabelAccountUpdated(winrt::hstring const&);

    private:
        winrt::hstring label_updated{};

    public:
        winrt::hstring ValueAccountUpdated();

        void ValueAccountUpdated(winrt::hstring const&);

    private:
        winrt::hstring value_updated{};

    public:
        winrt::hstring LabelAccountPassword();

        void LabelAccountPassword(winrt::hstring const&);

    private:
        winrt::hstring label_password{};

    public:
        winrt::hstring ValueAccountPassword();

        void ValueAccountPassword(winrt::hstring const&);

    private:
        winrt::hstring value_password{};

    };
}

namespace winrt::HV4DUX::factory_implementation
{
    struct TableAccount : TableAccountT<TableAccount, implementation::TableAccount>
    {
    };
}
