#include "pch.h"
#include "TableAccount.xaml.h"
#if __has_include("TableAccount.g.cpp")
#include "TableAccount.g.cpp"
#endif

namespace winrt::HV4DX::implementation
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

	winrt::hstring TableAccount::LabelAccount()
	{

		return label_account;

	}

	void TableAccount::LabelAccount(winrt::hstring const& e)
	{
		label_account = e;

		return;

	}

	winrt::hstring TableAccount::ValueAccount()
	{

		return value_account;

	}

	void TableAccount::ValueAccount(winrt::hstring const& e)
	{
		value_account = e;

		return;

	}

	winrt::hstring TableAccount::LabelAccountAddressOne()
	{

		return label_account_address_one;

	}

	void TableAccount::LabelAccountAddressOne(winrt::hstring const& e)
	{
		label_account_address_one = e;

		return;

	}

	winrt::hstring TableAccount::ValueAccountAddressOne()
	{

		return value_account_address_one;

	}

	void TableAccount::ValueAccountAddressOne(winrt::hstring const& e)
	{
		value_account_address_one = e;

		return;

	}

	winrt::hstring TableAccount::LabelAccountAddressTwo()
	{

		return label_account_address_two;

	}

	void TableAccount::LabelAccountAddressTwo(winrt::hstring const& e)
	{
		label_account_address_two = e;

		return;

	}

	winrt::hstring TableAccount::ValueAccountAddressTwo()
	{

		return value_account_address_two;

	}

	void TableAccount::ValueAccountAddressTwo(winrt::hstring const& e)
	{
		value_account_address_two = e;

		return;

	}

	winrt::hstring TableAccount::LabelAccountCity()
	{

		return label_account_city;

	}

	void TableAccount::LabelAccountCity(winrt::hstring const& e)
	{
		label_account_city = e;

		return;

	}

	winrt::hstring TableAccount::ValueAccountCity()
	{

		return value_account_city;

	}

	void TableAccount::ValueAccountCity(winrt::hstring const& e)
	{
		value_account_city = e;

		return;

	}

	winrt::hstring TableAccount::LabelAccountRegion()
	{

		return label_account_region;

	}

	void TableAccount::LabelAccountRegion(winrt::hstring const& e)
	{
		label_account_region = e;

		return;

	}

	winrt::hstring TableAccount::ValueAccountRegion()
	{

		return value_account_region;

	}

	void TableAccount::ValueAccountRegion(winrt::hstring const& e)
	{
		value_account_region = e;

		return;

	}

	winrt::hstring TableAccount::LabelAccountEMail()
	{

		return label_account_email;

	}

	void TableAccount::LabelAccountEMail(winrt::hstring const& e)
	{
		label_account_email = e;

		return;

	}

	winrt::hstring TableAccount::ValueAccountEMail()
	{

		return value_account_email;

	}

	void TableAccount::ValueAccountEMail(winrt::hstring const& e)
	{
		value_account_email = e;

		return;

	}

	winrt::hstring TableAccount::LabelAccountPrimaryPhone()
	{

		return label_account_primary_phone;

	}

	void TableAccount::LabelAccountPrimaryPhone(winrt::hstring const& e)
	{
		label_account_primary_phone = e;

		return;

	}

	winrt::hstring TableAccount::ValueAccountPrimaryPhone()
	{

		return value_account_primary_phone;

	}

	void TableAccount::ValueAccountPrimaryPhone(winrt::hstring const& e)
	{
		value_account_primary_phone = e;

		return;

	}

	winrt::hstring TableAccount::LabelAccountSecondaryPhone()
	{

		return label_account_secondary_phone;

	}

	void TableAccount::LabelAccountSecondaryPhone(winrt::hstring const& e)
	{
		label_account_secondary_phone = e;

		return;

	}

	winrt::hstring TableAccount::ValueAccountSecondaryPhone()
	{

		return value_account_secondary_phone;

	}

	void TableAccount::ValueAccountSecondaryPhone(winrt::hstring const& e)
	{
		value_account_secondary_phone = e;

		return;

	}

	bool TableAccount::AccountIsEditable()
	{

		return account_is_editable;

	}

	void TableAccount::AccountIsEditable(bool const& e)
	{
		account_is_editable = e;

		return;

	}

}
