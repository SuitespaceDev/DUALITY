#pragma once

#include <ctime>

#include "HV4DT_TYPE_NODE.g.h"

namespace WF = winrt::Windows::Foundation;

namespace winrt::HV4D::implementation
{
	struct HV4DT_TYPE_NODE : HV4DT_TYPE_NODET<HV4DT_TYPE_NODE>
	{
	public:
		HV4DT_TYPE_NODE();

	public:
		winrt::guid TType() { return winrt::guid{ L"{4E39EF3F-0C48-421F-9630-9FD848221413}" }; }

	public:
		uint64_t ID() { return 0x4E39EF3F0C48421F; };

	public:
		winrt::hstring Name() { return L"HV4DT_TYPE_NODE"; }

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
	struct HV4DT_TYPE_NODE : HV4DT_TYPE_NODET<HV4DT_TYPE_NODE, implementation::HV4DT_TYPE_NODE>
	{

	};

}
