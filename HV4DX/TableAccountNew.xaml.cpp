#include "pch.h"
#include "TableAccountNew.xaml.h"
#if __has_include("TableAccountNew.g.cpp")
#include "TableAccountNew.g.cpp"
#endif

namespace winrt::HV4DX::implementation
{
    TableAccountNew::TableAccountNew()
    {
        InitializeComponent();

        return;

    }

	winrt::hstring TableAccountNew::LabelAccountHVID()
	{
		return label_hvid;

	}

	void TableAccountNew::LabelAccountHVID(winrt::hstring const& e)
	{
		label_hvid = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountHVID()
	{
		return value_hvid;

	}

	void TableAccountNew::ValueAccountHVID(winrt::hstring const& e)
	{
		value_hvid = e;

		return;

	}

	winrt::hstring TableAccountNew::LabelAccountID()
	{
		return label_account_id;

	}

	void TableAccountNew::LabelAccountID(winrt::hstring const& e)
	{
		label_account_id = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountID()
	{
		return value_account_id;

	}

	void TableAccountNew::ValueAccountID(winrt::hstring const& e)
	{
		value_account_id = e;

		return;

	}

	winrt::hstring TableAccountNew::LabelAccountMaxPath()
	{
		return label_maxpath;

	}

	void TableAccountNew::LabelAccountMaxPath(winrt::hstring const& e)
	{
		label_maxpath = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountMaxPath()
	{
		return value_maxpath;

	}

	void TableAccountNew::ValueAccountMaxPath(winrt::hstring const& e)
	{
		value_maxpath = e;

		return;

	}

	winrt::hstring TableAccountNew::LabelAccountCreated()
	{
		return label_created;

	}

	void TableAccountNew::LabelAccountCreated(winrt::hstring const& e)
	{
		label_created = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountCreated()
	{
		return value_created;

	}

	void TableAccountNew::ValueAccountCreated(winrt::hstring const& e)
	{
		value_created = e;

		return;

	}

	winrt::hstring TableAccountNew::LabelAccountUpdated()
	{
		return label_updated;

	}

	void TableAccountNew::LabelAccountUpdated(winrt::hstring const& e)
	{
		label_updated = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountUpdated()
	{
		return value_updated;

	}

	void TableAccountNew::ValueAccountUpdated(winrt::hstring const& e)
	{
		value_updated = e;

		return;

	}

	winrt::hstring TableAccountNew::LabelAccountPassword()
	{
		return label_password;

	}

	void TableAccountNew::LabelAccountPassword(winrt::hstring const& e)
	{
		label_password = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountPassword()
	{
		return value_password;

	}

	void TableAccountNew::ValueAccountPassword(winrt::hstring const& e)
	{
		value_password = e;

		return;

	}

	winrt::hstring TableAccountNew::LabelAccount()
	{

		return label_account;

	}

	void TableAccountNew::LabelAccount(winrt::hstring const& e)
	{
		label_account = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccount()
	{

		return value_account;

	}

	void TableAccountNew::ValueAccount(winrt::hstring const& e)
	{
		value_account = e;

		return;

	}

	winrt::hstring TableAccountNew::LabelAccountAddressOne()
	{

		return label_account_address_one;

	}

	void TableAccountNew::LabelAccountAddressOne(winrt::hstring const& e)
	{
		label_account_address_one = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountAddressOne()
	{

		return value_account_address_one;

	}

	void TableAccountNew::ValueAccountAddressOne(winrt::hstring const& e)
	{
		value_account_address_one = e;

		return;

	}

	winrt::hstring TableAccountNew::LabelAccountAddressTwo()
	{

		return label_account_address_two;

	}

	void TableAccountNew::LabelAccountAddressTwo(winrt::hstring const& e)
	{
		label_account_address_two = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountAddressTwo()
	{

		return value_account_address_two;

	}

	void TableAccountNew::ValueAccountAddressTwo(winrt::hstring const& e)
	{
		value_account_address_two = e;

		return;

	}

	winrt::hstring TableAccountNew::LabelAccountCity()
	{

		return label_account_city;

	}

	void TableAccountNew::LabelAccountCity(winrt::hstring const& e)
	{
		label_account_city = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountCity()
	{

		return value_account_city;

	}

	void TableAccountNew::ValueAccountCity(winrt::hstring const& e)
	{
		value_account_city = e;

		return;

	}

	winrt::hstring TableAccountNew::LabelAccountRegion()
	{

		return label_account_region;

	}

	void TableAccountNew::LabelAccountRegion(winrt::hstring const& e)
	{
		label_account_region = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountRegion()
	{

		return value_account_region;

	}

	void TableAccountNew::ValueAccountRegion(winrt::hstring const& e)
	{
		value_account_region = e;

		return;

	}

	winrt::hstring TableAccountNew::LabelAccountEMail()
	{

		return label_account_email;

	}

	void TableAccountNew::LabelAccountEMail(winrt::hstring const& e)
	{
		label_account_email = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountEMail()
	{

		return value_account_email;

	}

	void TableAccountNew::ValueAccountEMail(winrt::hstring const& e)
	{
		value_account_email = e;

		return;

	}

	winrt::hstring TableAccountNew::LabelAccountPrimaryPhone()
	{

		return label_account_primary_phone;

	}

	void TableAccountNew::LabelAccountPrimaryPhone(winrt::hstring const& e)
	{
		label_account_primary_phone = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountPrimaryPhone()
	{

		return value_account_primary_phone;

	}

	void TableAccountNew::ValueAccountPrimaryPhone(winrt::hstring const& e)
	{
		value_account_primary_phone = e;

		return;

	}

	winrt::hstring TableAccountNew::LabelAccountSecondaryPhone()
	{

		return label_account_secondary_phone;

	}

	void TableAccountNew::LabelAccountSecondaryPhone(winrt::hstring const& e)
	{
		label_account_secondary_phone = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountSecondaryPhone()
	{

		return value_account_secondary_phone;

	}

	void TableAccountNew::ValueAccountSecondaryPhone(winrt::hstring const& e)
	{
		value_account_secondary_phone = e;

		return;

	}

	bool TableAccountNew::AccountIsEditable()
	{

		return account_is_editable;

	}

	void TableAccountNew::AccountIsEditable(bool const& e)
	{
		account_is_editable = e;

		return;

	}

}
