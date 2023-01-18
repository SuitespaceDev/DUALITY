#pragma once

#include "UserFilterHVID.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXN = winrt::Microsoft::UI::Xaml::Navigation;

namespace winrt::HV4DX::implementation
{
    struct UserFilterHVID : UserFilterHVIDT<UserFilterHVID>
    {
    public:
        UserFilterHVID();

	public:
		winrt::hstring Label();

		void Label(winrt::hstring const&);

	private:
		winrt::hstring label{};

	public:
		winrt::hstring Value();

		void Value(winrt::hstring const&);

	private:
		winrt::hstring value{};

		uint32_t index{};

	public:
		void IncrementIndex(WF::IInspectable const&, MUX::RoutedEventArgs const&);

		void DecrementIndex(WF::IInspectable const&, MUX::RoutedEventArgs const&);

	public:
		WFITT::IObservableVector<winrt::hstring> ItemList();

	private:
		WFITT::IObservableVector<winrt::hstring> item_list{ winrt::single_threaded_observable_vector<winrt::hstring>() };

	public:
		winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

		void PropertyChanged(winrt::event_token const&) noexcept;

	private:
		winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

	};

}

namespace winrt::HV4DX::factory_implementation
{
    struct UserFilterHVID : UserFilterHVIDT<UserFilterHVID, implementation::UserFilterHVID>
    {
    };
}
