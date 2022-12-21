#pragma once

#include "TableAccountNew.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::HV4DX::implementation
{
    struct TableAccountNew : TableAccountNewT<TableAccountNew>
    {
	public:
        TableAccountNew();

	public:
		winrt::hstring LabelAccountHVID();

		void LabelAccountHVID(winrt::hstring const&);

	private:
		winrt::hstring label_account_hvid{};

	public:
		uint32_t IndexAccountHVID();

		void IndexAccountHVID(uint32_t const&);

	private:
		uint32_t index_account_hvid{};

	public:
		WFITT::IObservableVector<winrt::hstring> ListAccountHVID();

		void ListAccountHVID(WFITT::IObservableVector<winrt::hstring> const&);

	private:
		WFITT::IObservableVector<winrt::hstring> list_account_hvid{ winrt::single_threaded_observable_vector<winrt::hstring>() };

	public:
		winrt::hstring LabelAccountID();

		void LabelAccountID(winrt::hstring const&);

	private:
		winrt::hstring label_account_id{};

	public:
		uint32_t IndexAccountID();

		void IndexAccountID(uint32_t const&);

	private:
		uint32_t index_account_id{};

	public:
		WFITT::IObservableVector<winrt::hstring> ListAccountID();

		void ListAccountID(WFITT::IObservableVector<winrt::hstring> const&);

	private:
		WFITT::IObservableVector<winrt::hstring> list_account_id{ winrt::single_threaded_observable_vector<winrt::hstring>() };

	public:
		winrt::hstring LabelAccountMaxPath();

		void LabelAccountMaxPath(winrt::hstring const&);

	private:
		winrt::hstring label_account_maxpath{};

	public:
		uint32_t IndexAccountMaxPath();

		void IndexAccountMaxPath(uint32_t const&);

	private:
		uint32_t index_account_maxpath{};

	public:
		WFITT::IObservableVector<winrt::hstring> ListAccountMaxPath();

		void ListAccountMaxPath(WFITT::IObservableVector<winrt::hstring> const&);

	private:
		WFITT::IObservableVector<winrt::hstring> list_account_maxpath{ winrt::single_threaded_observable_vector<winrt::hstring>() };

	public:
		winrt::hstring LabelAccountCreated();

		void LabelAccountCreated(winrt::hstring const&);

	private:
		winrt::hstring label_account_created{};

	public:
		winrt::hstring ValueAccountCreated();

		void ValueAccountCreated(winrt::hstring const&);

	private:
		winrt::hstring value_account_created{};

	public:
		winrt::hstring LabelAccountUpdated();

		void LabelAccountUpdated(winrt::hstring const&);

	private:
		winrt::hstring label_account_updated{};

	public:
		winrt::hstring ValueAccountUpdated();

		void ValueAccountUpdated(winrt::hstring const&);

	private:
		winrt::hstring value_account_updated{};

	public:
		winrt::hstring LabelAccountPassword();

		void LabelAccountPassword(winrt::hstring const&);

	private:
		winrt::hstring label_account_password{};

	public:
		winrt::hstring ValueAccountPassword();

		void ValueAccountPassword(winrt::hstring const&);

	private:
		winrt::hstring value_account_password{};

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

	public:
		winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

		void PropertyChanged(winrt::event_token const&) noexcept;

	private:
		winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct TableAccountNew : TableAccountNewT<TableAccountNew, implementation::TableAccountNew>
    {
    };
}
