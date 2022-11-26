#pragma once

#include <Objbase.h>

#include <ctime>

#include "HV4D_DIR_DOESNT_EXIST.g.h"

namespace WF = winrt::Windows::Foundation;

namespace HV4D = winrt::HV4D;

namespace winrt::HV4D::implementation
{
	struct HV4D_DIR_DOESNT_EXIST : HV4D_DIR_DOESNT_EXISTT<HV4D_DIR_DOESNT_EXIST>
	{
	public:
		HV4D_DIR_DOESNT_EXIST();

	public:
		virtual winrt::guid HV4DSpecializationType() { return winrt::guid{ L"" }; }

		virtual uint64_t HV4DSpecializationID() { return 0x; }

		virtual winrt::hstring HV4DSpecializationName() { return L""; }

	public:
		virtual winrt::guid HV4DInstanceHVID() { return instance_hvid; }

	private:
		void HV4DCreateInstanceHVID()
		{
			GUID uid;

			HRESULT hr = CoCreateGuid(&uid);
			
			if (SUCCEEDED(hr))
			{
				instance_hvid = uid;

				return;
			}
			else
			{
				throw HV4D::HV4D_OPERATION_FAILED{};

			}

			return;

		}

		winrt::guid instance_hvid{ L"00000000-0000-0000-0000-000000000000" };

	public:
		virtual uint64_t HV4DCreatedDateTime() { return created_date_time; }

		virtual uint64_t HV4DUpdatedDateTime() { return updated_date_time; }

	private:
		void HV4DSetCreatedDateTime()
		{
			created_date_time = (uint64_t)std::time(nullptr);

			return;

		}

		void HV4DSetUpdatedDateTime()
		{
			updated_date_time = (uint64_t)std::time(nullptr);

			return;

		}

		uint64_t created_date_time{ 0 };

		uint64_t updated_date_time{ 0 };

	public:
		virtual WF::IInspectable HV4DSender() { return sender; }

		virtual void HV4DSender(WF::IInspectable const& e) { sender = e; }

	private:
		WF::IInspectable sender{};

	public:
		virtual winrt::guid HV4DReturnType() { return winrt::guid{ L"{37B05099-D725-48A6-B1B2-39614BDC6D67}" }; }

		virtual uint64_t HV4DReturnTypeID() { return 0x37B05099D72548A6; };

		virtual winrt::hstring HV4DReturnTypeName() { return L"HV4DT_TYPE_ITERATOR"; }

	public:
		virtual winrt::guid HV4DExtendedArgsType() { return extended_args_type; }

		virtual void HV4DExtendedArgsType(winrt::guid const& e) { extended_args_type = e; }

	private:
		winrt::guid extended_args_type{};

	public:
		virtual WF::IInspectable HV4DExtendedArgs() { return extended_args; }

		virtual void HV4DExtendedArgs(WF::IInspectable const& e) { extended_args = e; }

	private:
		WF::IInspectable extended_args{};

	public:
		virtual winrt::hstring HV4DComments() { return comments; }

		virtual void HV4DComments(winrt::hstring const& e) { comments = e; }

	private:
		winrt::hstring comments{};

	};

}

namespace winrt::HV4D::factory_implementation
{
	struct HV4D_DIR_DOESNT_EXIST : HV4D_DIR_DOESNT_EXISTT<HV4D_DIR_DOESNT_EXIST, implementation::HV4D_DIR_DOESNT_EXIST>
	{

	};

}
