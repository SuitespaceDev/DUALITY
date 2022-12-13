#pragma once

#include "TableAccount.g.h"

namespace winrt::HV4DX::implementation
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

	public:
		winrt::hstring LabelAccount();

		void LabelAccount(winrt::hstring const&);

	private:
		winrt::hstring label_account{};

	public:
		winrt::hstring ValueAccount();

		void ValueAccount(winrt::hstring const&);

	private:
		winrt::hstring value_account{};

	public:
		winrt::hstring LabelAccountAddressOne();

		void LabelAccountAddressOne(winrt::hstring const&);

	private:
		winrt::hstring label_account_address_one{};

	public:
		winrt::hstring ValueAccountAddressOne();

		void ValueAccountAddressOne(winrt::hstring const&);

	private:
		winrt::hstring value_account_address_one{};

	public:
		winrt::hstring LabelAccountAddressTwo();

		void LabelAccountAddressTwo(winrt::hstring const&);

	private:
		winrt::hstring label_account_address_two{};

	public:
		winrt::hstring ValueAccountAddressTwo();

		void ValueAccountAddressTwo(winrt::hstring const&);

	private:
		winrt::hstring value_account_address_two{};

	public:
		winrt::hstring LabelAccountCity();

		void LabelAccountCity(winrt::hstring const&);

	private:
		winrt::hstring label_account_city{};

	public:
		winrt::hstring ValueAccountCity();

		void ValueAccountCity(winrt::hstring const&);

	private:
		winrt::hstring value_account_city{};

	public:
		winrt::hstring LabelAccountRegion();

		void LabelAccountRegion(winrt::hstring const&);

	private:
		winrt::hstring label_account_region{};

	public:
		winrt::hstring ValueAccountRegion();

		void ValueAccountRegion(winrt::hstring const&);

	private:
		winrt::hstring value_account_region{};

	public:
		winrt::hstring LabelAccountEMail();

		void LabelAccountEMail(winrt::hstring const&);

	private:
		winrt::hstring label_account_email{};

	public:
		winrt::hstring ValueAccountEMail();

		void ValueAccountEMail(winrt::hstring const&);

	private:
		winrt::hstring value_account_email{};

	public:
		winrt::hstring LabelAccountPrimaryPhone();

		void LabelAccountPrimaryPhone(winrt::hstring const&);

	private:
		winrt::hstring label_account_primary_phone{};

	public:
		winrt::hstring ValueAccountPrimaryPhone();

		void ValueAccountPrimaryPhone(winrt::hstring const&);

	private:
		winrt::hstring value_account_primary_phone{};

	public:
		winrt::hstring LabelAccountSecondaryPhone();

		void LabelAccountSecondaryPhone(winrt::hstring const&);

	private:
		winrt::hstring label_account_secondary_phone{};

	public:
		winrt::hstring ValueAccountSecondaryPhone();

		void ValueAccountSecondaryPhone(winrt::hstring const&);

	private:
		winrt::hstring value_account_secondary_phone{};

	public:
		bool AccountIsEditable();

		void AccountIsEditable(bool const&);

	private:
		bool account_is_editable{};

	};
}

namespace winrt::HV4DX::factory_implementation
{
	struct TableAccount : TableAccountT<TableAccount, implementation::TableAccount>
	{
	};
}
