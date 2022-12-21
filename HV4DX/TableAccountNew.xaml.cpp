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
		return label_account_hvid;

	}

	void TableAccountNew::LabelAccountHVID(winrt::hstring const& e)
	{
		label_account_hvid = e;

		return;

	}

	uint32_t TableAccountNew::IndexAccountHVID()
	{
		return index_account_hvid;

	}

	void TableAccountNew::IndexAccountHVID(uint32_t const& e)
	{
		index_account_hvid = e;

		return;

	}

	WFITT::IObservableVector<winrt::hstring> TableAccountNew::ListAccountHVID()
	{
		if (list_account_hvid.Size() == 0)
		{
			list_account_hvid.Append(L"Empty");

			index_account_hvid = 0;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"IndexAccountHVID" });

			return list_account_hvid;

		}
		else
		{
			return list_account_hvid;

		}

	}

	void TableAccountNew::ListAccountHVID(WFITT::IObservableVector<winrt::hstring> const& e)
	{
		if (e.Size() != 0)
		{
			list_account_hvid.Clear();

			list_account_hvid = e;

			index_account_hvid = 0;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"IndexAccountHVID" });

			return;

		}

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

	uint32_t TableAccountNew::IndexAccountID()
	{
		return index_account_id;

	}

	void TableAccountNew::IndexAccountID(uint32_t const& e)
	{
		index_account_id = e;

		return;

	}

	WFITT::IObservableVector<winrt::hstring> TableAccountNew::ListAccountID()
	{
		if (list_account_id.Size() == 0)
		{
			list_account_id.Append(L"Empty");

			index_account_id = 0;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"IndexAccountID" });

			return list_account_id;

		}
		else
		{
			return list_account_id;

		}

	}

	void TableAccountNew::ListAccountID(WFITT::IObservableVector<winrt::hstring> const& e)
	{
		if (e.Size() != 0)
		{
			list_account_id.Clear();

			list_account_id = e;

			index_account_id = 0;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"IndexAccountID" });

			return;

		}

		return;

	}

	winrt::hstring TableAccountNew::LabelAccountMaxPath()
	{
		return label_account_maxpath;

	}

	void TableAccountNew::LabelAccountMaxPath(winrt::hstring const& e)
	{
		label_account_maxpath = e;

		return;

	}

	uint32_t TableAccountNew::IndexAccountMaxPath()
	{
		return index_account_maxpath;

	}

	void TableAccountNew::IndexAccountMaxPath(uint32_t const& e)
	{
		index_account_maxpath = e;

		return;

	}

	WFITT::IObservableVector<winrt::hstring> TableAccountNew::ListAccountMaxPath()
	{
		if (list_account_maxpath.Size() == 0)
		{
			list_account_maxpath.Append(L"Empty");

			index_account_maxpath = 0;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"IndexAccountID" });

			return list_account_maxpath;

		}
		else
		{
			return list_account_maxpath;

		}

	}

	void TableAccountNew::ListAccountMaxPath(WFITT::IObservableVector<winrt::hstring> const& e)
	{
		if (e.Size() != 0)
		{
			list_account_maxpath.Clear();

			list_account_maxpath = e;

			index_account_maxpath = 0;

			property_changed_event(*this, MUXD::PropertyChangedEventArgs{ L"IndexAccountID" });

			return;

		}

		return;

	}
	
	winrt::hstring TableAccountNew::LabelAccountCreated()
	{
		return label_account_created;

	}

	void TableAccountNew::LabelAccountCreated(winrt::hstring const& e)
	{
		label_account_created = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountCreated()
	{
		return value_account_created;

	}

	void TableAccountNew::ValueAccountCreated(winrt::hstring const& e)
	{
		value_account_created = e;

		return;

	}

	winrt::hstring TableAccountNew::LabelAccountUpdated()
	{
		return label_account_updated;

	}

	void TableAccountNew::LabelAccountUpdated(winrt::hstring const& e)
	{
		label_account_updated = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountUpdated()
	{
		return value_account_updated;

	}

	void TableAccountNew::ValueAccountUpdated(winrt::hstring const& e)
	{
		value_account_updated = e;

		return;

	}

	winrt::hstring TableAccountNew::LabelAccountPassword()
	{
		return label_account_password;

	}

	void TableAccountNew::LabelAccountPassword(winrt::hstring const& e)
	{
		label_account_password = e;

		return;

	}

	winrt::hstring TableAccountNew::ValueAccountPassword()
	{
		return value_account_password;

	}

	void TableAccountNew::ValueAccountPassword(winrt::hstring const& e)
	{
		value_account_password = e;

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

	event_token TableAccountNew::PropertyChanged(MUXD::PropertyChangedEventHandler const& handler)
	{

		return property_changed_event.add(handler);

	}

	void TableAccountNew::PropertyChanged(winrt::event_token const& token) noexcept
	{
		property_changed_event.remove(token);

		return;

	}

}
