#include "pch.h"
#include "TableAccount.xaml.h"
#if __has_include("TableAccount.g.cpp")
#include "TableAccount.g.cpp"
#endif

namespace winrt::HV4DUX::implementation
{
    TableAccount::TableAccount()
    {
        InitializeComponent();

        return;

    }

    winrt::hstring TableAccount::LabelAccountHVID()
    {
        return label_hvid;

    }

    void TableAccount::LabelAccountHVID(winrt::hstring const& e)
    {
        label_hvid = e;

        return;

    }

    winrt::hstring TableAccount::ValueAccountHVID()
    {
        return value_hvid;

    }

    void TableAccount::ValueAccountHVID(winrt::hstring const& e)
    {
        value_hvid = e;

        return;

    }

    winrt::hstring TableAccount::LabelAccountID()
    {
        return label_account_id;

    }

    void TableAccount::LabelAccountID(winrt::hstring const& e)
    {
        label_account_id = e;

        return;

    }

    winrt::hstring TableAccount::ValueAccountID()
    {
        return value_account_id;

    }

    void TableAccount::ValueAccountID(winrt::hstring const& e)
    {
        value_account_id = e;

        return;

    }

    winrt::hstring TableAccount::LabelAccountMaxPath()
    {
        return label_maxpath;

    }

    void TableAccount::LabelAccountMaxPath(winrt::hstring const& e)
    {
        label_maxpath = e;

        return;

    }

    winrt::hstring TableAccount::ValueAccountMaxPath()
    {
        return value_maxpath;

    }

    void TableAccount::ValueAccountMaxPath(winrt::hstring const& e)
    {
        value_maxpath = e;

        return;

    }

    winrt::hstring TableAccount::LabelAccountCreated()
    {
        return label_created;

    }

    void TableAccount::LabelAccountCreated(winrt::hstring const& e)
    {
        label_created = e;

        return;

    }

    winrt::hstring TableAccount::ValueAccountCreated()
    {
        return value_created;

    }

    void TableAccount::ValueAccountCreated(winrt::hstring const& e)
    {
        value_created = e;

        return;

    }

    winrt::hstring TableAccount::LabelAccountUpdated()
    {
        return label_updated;

    }

    void TableAccount::LabelAccountUpdated(winrt::hstring const& e)
    {
        label_updated = e;

        return;

    }

    winrt::hstring TableAccount::ValueAccountUpdated()
    {
        return value_updated;

    }

    void TableAccount::ValueAccountUpdated(winrt::hstring const& e)
    {
        value_updated = e;

        return;

    }

    winrt::hstring TableAccount::LabelAccountPassword()
    {
        return label_password;

    }

    void TableAccount::LabelAccountPassword(winrt::hstring const& e)
    {
        label_password = e;

        return;

    }

    winrt::hstring TableAccount::ValueAccountPassword()
    {
        return value_password;

    }

    void TableAccount::ValueAccountPassword(winrt::hstring const& e)
    {
        value_password = e;

        return;

    }

}
