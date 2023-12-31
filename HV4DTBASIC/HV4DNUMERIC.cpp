﻿#include "pch.h"
#include "HV4DNUMERIC.h"
#if __has_include("HV4DNUMERIC.g.cpp")
#include "HV4DNUMERIC.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DNUMERIC::HV4DNUMERIC()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DNUMERIC::HV4DNUMERIC(HV4D::IHV4DCOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DNUMERIC::HV4DNUMERIC(HV4D::IHV4DCOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DNUMERIC::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DNUMERIC::HV4DSetUuidOfInstance()
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

	std::uint64_t HV4DNUMERIC::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	std::uint64_t HV4DNUMERIC::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DNUMERIC::HV4DSetCreatedDateTime()
	{
		created_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	void HV4DNUMERIC::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DNUMERIC::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DNUMERIC::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DNUMERIC::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DCOBJECT HV4DNUMERIC::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DNUMERIC::HV4DSender(HV4D::IHV4DCOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DNUMERIC::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{3A42CCFC-8D5F-495E-BA64-39B7F18F659A}" };

	}

	std::uint64_t HV4DNUMERIC::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0x3A42CCFC8D5F495E;

	}

	winrt::hstring HV4DNUMERIC::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DNUMERIC";

	}

	winrt::guid HV4DNUMERIC::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DNUMERIC::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DNUMERIC::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DNUMERIC::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DNUMERIC::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DNUMERIC::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DNUMERICFromNUM(std::uint64_t const& n)
	{
		try
		{
			tagNUMERIC = n;

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DNUMERICFromHstring(winrt::hstring const& n)
	{
		try
		{
			tagNUMERIC = n.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DNUMERICFromProj(TBASIC::HV4DNUMERIC const& e)
	{
		std::uint64_t num{};

		e.HV4DNUMERICToNUM(num);

		try
		{
			tagNUMERIC = num;

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DNUMERICToNUM(std::uint64_t& n)
	{
		n = tagNUMERIC;

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DNUMERICToHstring(winrt::hstring& n)
	{
		n = tagNUMERIC.operator std::wstring();

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DNUMERICToProj(TBASIC::HV4DNUMERIC& e)
	{
		e.HV4DNUMERICFromHstring(tagNUMERIC.operator std::wstring());

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DNUMERICIsEqualNUM(std::uint64_t const& n)
	{
		CTBASIC::CHV4DNUMERIC num{};

		try
		{
			num = n;

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagNUMERIC == num)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagNUMERIC < num)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DNUMERICIsEqualHstring(winrt::hstring const& n)
	{
		CTBASIC::CHV4DNUMERIC num{};

		try
		{
			num = n.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagNUMERIC == num)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagNUMERIC < num)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DNUMERIC::HV4DNUMERICIsEqualProj(TBASIC::HV4DNUMERIC const& e)
	{
		CTBASIC::CHV4DNUMERIC num{};

		std::uint64_t val{};

		e.HV4DNUMERICToNUM(val);

		try
		{
			num = val;

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagNUMERIC == num)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagNUMERIC < num)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

}
