#pragma once

#include "UserVMContact.g.h"

namespace winrt::HV4DUX::implementation
{
    struct UserVMContact : UserVMContactT<UserVMContact>
	{
	public:
		UserVMContact();

	public:
		hstring LabelUserName();

		void LabelUserName(winrt::hstring const&);

	private:
		hstring label_user_name{ L"" };

	public:
		hstring ValueUserName();

		void ValueUserName(winrt::hstring const&);

	private:
		hstring value_user_name{ L". . ." };

	public:
		hstring LabelAddressOne();

		void LabelAddressOne(winrt::hstring const&);

	private:
		hstring label_address_one{ L"" };

	public:
		hstring ValueAddressOne();

		void ValueAddressOne(winrt::hstring const&);

	private:
		hstring value_address_one{ L". . ." };

	public:
		hstring LabelAddressTwo();

		void LabelAddressTwo(winrt::hstring const&);

	private:
		hstring label_address_two{ L"" };

	public:
		hstring ValueAddressTwo();

		void ValueAddressTwo(winrt::hstring const&);

	private:
		hstring value_address_two{ L". . ." };

	public:
		hstring LabelCity();

		void LabelCity(winrt::hstring const&);

	private:
		hstring label_city{ L"" };

	public:
		hstring ValueCity();

		void ValueCity(winrt::hstring const&);

	private:
		hstring value_city{ L". . ." };

	public:
		hstring LabelRegion();

		void LabelRegion(winrt::hstring const&);

	private:
		hstring label_region{ L"" };

	public:
		hstring ValueRegion();

		void ValueRegion(winrt::hstring const&);

	private:
		hstring value_region{ L". . ." };

	public:
		hstring LabelEMail();

		void LabelEMail(winrt::hstring const&);

	private:
		hstring label_email{ L"" };

	public:
		hstring ValueEMail();

		void ValueEMail(winrt::hstring const&);

	private:
		hstring value_email{ L"you@entangledlogic.com" };

	public:
		hstring LabelPrimaryPhone();

		void LabelPrimaryPhone(winrt::hstring const&);

	private:
		hstring label_primary_phone{ L"" };

	public:
		hstring ValuePrimaryPhone();

		void ValuePrimaryPhone(winrt::hstring const&);

	private:
		hstring value_primary_phone{ L"++ (xxx) xxx - xxxx" };

	public:
		hstring LabelSecondaryPhone();

		void LabelSecondaryPhone(winrt::hstring const&);

	private:
		hstring label_secondary_phone{ L"" };

	public:
		hstring ValueSecondaryPhone();

		void ValueSecondaryPhone(winrt::hstring const&);

	private:
		hstring value_secondary_phone{ L"++ (xxx) xxx - xxxx" };

	};

}

namespace winrt::HV4DUX::factory_implementation
{
	struct UserVMContact : UserVMContactT<UserVMContact, implementation::UserVMContact>
	{
	};
}
