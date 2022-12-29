#pragma once

#include "UserFilterGoTo.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace WUX = winrt::Windows::UI::Xaml;
namespace WUXI = winrt::Windows::UI::Xaml::Interop;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;

namespace winrt::HV4DX::implementation
{
    struct UserFilterGoTo : UserFilterGoToT<UserFilterGoTo>
    {
    public:
        UserFilterGoTo();

	public:
		winrt::hstring Label();

		void Label(winrt::hstring const&);

	private:
		winrt::hstring label{};

	public:
		void IncrementIndex(WF::IInspectable const&, MUX::RoutedEventArgs const&);

		void DecrementIndex(WF::IInspectable const&, MUX::RoutedEventArgs const&);

		int32_t SelectedItem();

		void SelectedItem(int32_t const&);

	private:
		int32_t selected_item{};

	public:
		void GoTo(WF::IInspectable const&, MUX::RoutedEventArgs const&);

	public:
		WFITT::IObservableVector<winrt::hstring> ItemList();

	private:
		WFITT::IObservableVector<winrt::hstring> item_list{ winrt::single_threaded_observable_vector<winrt::hstring>() };

	public:
		bool IsEditable();

		void IsEditable(bool const&);

	private:
		bool is_editable{ false };

	public:
		winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

		void PropertyChanged(winrt::event_token const&) noexcept;

	private:
		winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

    };
}

namespace winrt::HV4DX::factory_implementation
{
    struct UserFilterGoTo : UserFilterGoToT<UserFilterGoTo, implementation::UserFilterGoTo>
    {
    };
}
