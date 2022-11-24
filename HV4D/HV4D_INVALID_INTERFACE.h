#pragma once

#include <ctime>

#include "HV4D_INVALID_INTERFACE.g.h"

namespace WF = winrt::Windows::Foundation;

namespace winrt::HV4D::implementation
{
	struct HV4D_INVALID_INTERFACE : HV4D_INVALID_INTERFACET<HV4D_INVALID_INTERFACE>
	{
	public:
		HV4D_INVALID_INTERFACE();

	public:
		winrt::guid ReturnType() { return winrt::guid{ L"{4654BB6C-717A-4509-906F-86BA20D6F9F0}" }; }

	public:
		uint64_t ID() { return 0x4654BB6C717A4509; };

	public:
		winrt::hstring Name() { return L"HV4D_INVALID_INTERFACE"; }

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
	struct HV4D_INVALID_INTERFACE : HV4D_INVALID_INTERFACET<HV4D_INVALID_INTERFACE, implementation::HV4D_INVALID_INTERFACE>
	{

	};

}
