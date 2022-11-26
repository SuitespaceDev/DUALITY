#pragma once

#include <ctime>

#include "HV4DT_TYPE_TABLE.g.h"

namespace WF = winrt::Windows::Foundation;

namespace winrt::HV4D::implementation
{
	struct HV4DT_TYPE_TABLE : HV4DT_TYPE_TABLET<HV4DT_TYPE_TABLE>
	{
	public:
		HV4DT_TYPE_TABLE();

	public:
		winrt::guid TType() { return winrt::guid{ L"B9170943-F1E8-4CBD" }; }

	public:
		uint64_t ID() { return 0xB9170943F1E84CBD; };

	public:
		winrt::hstring Name() { return L"HV4DT_TYPE_TABLE"; }

	public:
		uint64_t DateTime() { return (uint64_t)std::time(nullptr); }

	public:
		winrt::guid SenderType() { return sender_type; }

		void SenderType(winrt::guid const& e) { sender_type = e; }

	private:
		winrt::guid sender_type{};

	public:
		winrt::guid SenderHVID() { return sender_hvid; }

		void SenderHVID(winrt::guid const& e) { sender_hvid = e; }

	private:
		winrt::guid sender_hvid{};

	public:
		WF::IInspectable Sender() { return sender; }

		void Sender(WF::IInspectable const& e) { sender = e; }

	private:
		WF::IInspectable sender{};

	public:
		winrt::guid ExtendedArgsType() { return extended_args_type; }

		void ExtendedArgsType(winrt::guid const& e) { extended_args_type = e; }

	private:
		winrt::guid extended_args_type{};

	public:
		WF::IInspectable ExtendedArgs() { return extended_args; }

		void ExtendedArgs(WF::IInspectable const& e) { extended_args = e; }

	private:
		WF::IInspectable extended_args{};

	public:
		winrt::hstring Comments() { return comments; }

		void Comments(winrt::hstring const& e) { comments = e; }

	private:
		winrt::hstring comments{};

	};

}

namespace winrt::HV4D::factory_implementation
{
	struct HV4DT_TYPE_TABLE : HV4DT_TYPE_TABLET<HV4DT_TYPE_TABLE, implementation::HV4DT_TYPE_TABLE>
	{

	};

}
