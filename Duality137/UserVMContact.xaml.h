#pragma once

#include "UserVMContact.g.h"

namespace winrt::Duality137::implementation
{
    struct UserVMContact : UserVMContactT<UserVMContact>
	{
	public:
		UserVMContact();

	public:
		hstring LabelUserName();

		void LabelUserName(hstring e);

	private:
		hstring label_user_name{ L"" };

	public:
		hstring ValueUserName();

		void ValueUserName(hstring e);

	private:
		hstring value_user_name{ L". . ." };

	public:
		hstring LabelAddressOne();

		void LabelAddressOne(hstring e);

	private:
		hstring label_address_one{ L"" };

	public:
		hstring ValueAddressOne();

		void ValueAddressOne(hstring e);

	private:
		hstring value_address_one{ L". . ." };

	public:
		hstring LabelAddressTwo();

		void LabelAddressTwo(hstring e);

	private:
		hstring label_address_two{ L"" };

	public:
		hstring ValueAddressTwo();

		void ValueAddressTwo(hstring e);

	private:
		hstring value_address_two{ L". . ." };

	public:
		hstring LabelCity();

		void LabelCity(hstring e);

	private:
		hstring label_city{ L"" };

	public:
		hstring ValueCity();

		void ValueCity(hstring e);

	private:
		hstring value_city{ L". . ." };

	public:
		hstring LabelRegion();

		void LabelRegion(hstring e);

	private:
		hstring label_region{ L"" };

	public:
		hstring ValueRegion();

		void ValueRegion(hstring e);

	private:
		hstring value_region{ L". . ." };

	public:
		hstring LabelEMail();

		void LabelEMail(hstring e);

	private:
		hstring label_email{ L"" };

	public:
		hstring ValueEMail();

		void ValueEMail(hstring e);

	private:
		hstring value_email{ L"you@entangledlogic.com" };

	public:
		hstring LabelPrimaryPhone();

		void LabelPrimaryPhone(hstring e);

	private:
		hstring label_primary_phone{ L"" };

	public:
		hstring ValuePrimaryPhone();

		void ValuePrimaryPhone(hstring e);

	private:
		hstring value_primary_phone{ L"++ (xxx) xxx - xxxx" };

	public:
		hstring LabelSecondaryPhone();

		void LabelSecondaryPhone(hstring e);

	private:
		hstring label_secondary_phone{ L"" };

	public:
		hstring ValueSecondaryPhone();

		void ValueSecondaryPhone(hstring e);

	private:
		hstring value_secondary_phone{ L"++ (xxx) xxx - xxxx" };

	};

}

namespace winrt::Duality137::factory_implementation
{
	struct UserVMContact : UserVMContactT<UserVMContact, implementation::UserVMContact>
	{
	};
}
