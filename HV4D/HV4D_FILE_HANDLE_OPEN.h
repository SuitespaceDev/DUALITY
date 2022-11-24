#pragma once

#include <ctime>

#include "HV4D_FILE_HANDLE_OPEN.g.h"

namespace WF = winrt::Windows::Foundation;

namespace winrt::HV4D::implementation
{
	struct HV4D_FILE_HANDLE_OPEN : HV4D_FILE_HANDLE_OPENT<HV4D_FILE_HANDLE_OPEN>
	{
	public:
		HV4D_FILE_HANDLE_OPEN();

	public:
		winrt::guid ReturnType() { return winrt::guid{ L"{AA9301B0-018C-45C3-9351-D06FB787D510}" }; }

	public:
		uint64_t ID() { return 0xAA9301B0018C45C3; };

	public:
		winrt::hstring Name() { return L"HV4D_FILE_HANDLE_OPEN"; }

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
		winrt::guid ExtendedType() { return extended_type; }

		void ExtendedType(winrt::guid const& e) { extended_type = e; }

	private:
		winrt::guid extended_type{};

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
	struct HV4D_FILE_HANDLE_OPEN : HV4D_FILE_HANDLE_OPENT<HV4D_FILE_HANDLE_OPEN, implementation::HV4D_FILE_HANDLE_OPEN>
	{

	};

}
