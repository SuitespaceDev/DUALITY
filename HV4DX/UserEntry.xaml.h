#pragma once

#include "UserEntry.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace WUX = winrt::Windows::UI::Xaml;
namespace WUXI = winrt::Windows::UI::Xaml::Interop;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;
namespace MUXD = winrt::Microsoft::UI::Xaml::Data;

namespace winrt::HV4DX::implementation
{
	struct UserEntry : UserEntryT<UserEntry>
	{
	public:
		UserEntry();

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

	public:
		winrt::hstring Placeholder();

	private:
		winrt::hstring placeholder{};

	public:
		bool ReadOnly();

		void ReadOnly(bool const&);

	private:
		bool read_only{};

	public:
		winrt::event_token PropertyChanged(MUXD::PropertyChangedEventHandler const&);

		void PropertyChanged(winrt::event_token const&) noexcept;

	private:
		winrt::event<MUXD::PropertyChangedEventHandler> property_changed_event;

	};

}

namespace winrt::HV4DX::factory_implementation
{
	struct UserEntry : UserEntryT<UserEntry, implementation::UserEntry>
	{
	};
}
