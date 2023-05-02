﻿#include "pch.h"
#include "HV4DSUBJECT.h"
#if __has_include("HV4DSUBJECT.g.cpp")
#include "HV4DSUBJECT.g.cpp"
#endif

namespace winrt::HV4DCONTRACT::implementation
{
	HV4DSUBJECT::HV4DSUBJECT()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DSUBJECT::HV4DSUBJECT(HV4D::IHV4DCOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DSUBJECT::HV4DSUBJECT(HV4D::IHV4DCOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DSUBJECT::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DSUBJECT::HV4DSetUuidOfInstance()
	{
		GUID uid;

		HRESULT hr = CoCreateGuid(&uid);

		if (SUCCEEDED(hr))
		{
			uuid_of_instance = uid;

			return;
		}
		else
		{
			throw HV4D::HV4D_OPERATION_FAILED{};

		}

	}

	uint64_t HV4DSUBJECT::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	uint64_t HV4DSUBJECT::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DSUBJECT::HV4DSetCreatedDateTime()
	{
		created_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	void HV4DSUBJECT::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DSUBJECT::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DSUBJECT::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DSUBJECT::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_CONTRACT{ nullptr, winrt::guid{L"{0034EB60-089C-4B10-96FB-8F2FF99F4EC7}"}, nullptr};

	};

	HV4D::IHV4DCOBJECT HV4DSUBJECT::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DSUBJECT::HV4DSender(HV4D::IHV4DCOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DSUBJECT::HV4DTType()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"" };

	}

	uint64_t HV4DSUBJECT::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0x;

	}

	winrt::hstring HV4DSUBJECT::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"";

	}

	winrt::guid HV4DSUBJECT::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DSUBJECT::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DSUBJECT::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DSUBJECT::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DSUBJECT::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DSUBJECT::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

}
