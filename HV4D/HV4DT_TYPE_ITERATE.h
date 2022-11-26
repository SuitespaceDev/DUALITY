#pragma once

#include <ctime>

#include "HV4DT_TYPE_ITERATE.g.h"

namespace WF = winrt::Windows::Foundation;

namespace winrt::HV4D::implementation
{
	struct HV4DT_TYPE_ITERATE : HV4DT_TYPE_ITERATET<HV4DT_TYPE_ITERATE>
	{
	public:
		HV4DT_TYPE_ITERATE();

	public:
		winrt::guid HV4DTType() { return winrt::guid{ L"{14CF9DCF-138E-402D-8186-79A53806BD68}" }; }

	public:
		uint64_t HV4DTTypeID() { return 0x14CF9DCF138E402D; };

	public:
		winrt::hstring HV4DTTypeName() { return L"HV4DT_TYPE_ITERATE"; }

	public:
		uint64_t HV4DDateTime() { return (uint64_t)std::time(nullptr); }

	public:
		winrt::guid HV4DSenderType() { return sender_type; }

		void HV4DSenderType(winrt::guid const& e) { sender_type = e; }

	private:
		winrt::guid sender_type{};

	public:
		winrt::guid HV4DSenderHVID() { return sender_hvid; }

		void HV4DSenderHVID(winrt::guid const& e) { sender_hvid = e; }

	private:
		winrt::guid sender_hvid{};

	public:
		WF::IInspectable HV4DSender() { return sender; }

		void HV4DSender(WF::IInspectable const& e) { sender = e; }

	private:
		WF::IInspectable sender{};

	public:
		winrt::guid HV4DExtendedArgsType() { return extended_args_type; }

		void HV4DExtendedArgsType(winrt::guid const& e) { extended_args_type = e; }

	private:
		winrt::guid extended_args_type{};

	public:
		WF::IInspectable HV4DExtendedArgs() { return extended_args; }

		void HV4DExtendedArgs(WF::IInspectable const& e) { extended_args = e; }

	private:
		WF::IInspectable extended_args{};

	public:
		winrt::hstring HV4DComments() { return comments; }

		void HV4DComments(winrt::hstring const& e) { comments = e; }

	private:
		winrt::hstring comments{};

	};

}

namespace winrt::HV4D::factory_implementation
{
	struct HV4DT_TYPE_ITERATE : HV4DT_TYPE_ITERATET<HV4DT_TYPE_ITERATE, implementation::HV4DT_TYPE_ITERATE>
	{

	};

}
