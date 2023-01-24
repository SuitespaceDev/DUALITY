#include "pch.h"
#include "HV4DALPHANUMERIC.h"
#if __has_include("HV4DALPHANUMERIC.g.cpp")
#include "HV4DALPHANUMERIC.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DALPHANUMERIC::HV4DALPHANUMERIC()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DALPHANUMERIC::HV4DALPHANUMERIC(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DALPHANUMERIC::HV4DALPHANUMERIC(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DALPHANUMERIC::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DALPHANUMERIC::HV4DSetUuidOfInstance()
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

	std::uint64_t HV4DALPHANUMERIC::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	std::uint64_t HV4DALPHANUMERIC::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DALPHANUMERIC::HV4DSetCreatedDateTime()
	{
		created_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	void HV4DALPHANUMERIC::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DALPHANUMERIC::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DALPHANUMERIC::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DALPHANUMERIC::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DOBJECT HV4DALPHANUMERIC::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DALPHANUMERIC::HV4DSender(HV4D::IHV4DOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DALPHANUMERIC::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{D28B4200-8226-4322-A571-31EF4A1ED390}" };

	}

	std::uint64_t HV4DALPHANUMERIC::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0xD28B420082264322;

	}

	winrt::hstring HV4DALPHANUMERIC::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DALPHANUMERIC";

	}

	winrt::guid HV4DALPHANUMERIC::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DALPHANUMERIC::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DALPHANUMERIC::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DALPHANUMERIC::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DALPHANUMERIC::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DALPHANUMERIC::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DALPHANUMERIC::HV4DALPHANUMERICFromHstring(winrt::hstring const& n)
	{
		try
		{
			tagANUM = CTBASIC::CHV4DALPHANUMERIC{ n.data() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DALPHANUMERIC::HV4DALPHANUMERICFromProj(TBASIC::HV4DALPHANUMERIC const& e)
	{
		winrt::hstring num{};

		e.HV4DALPHANUMERICToHstring(num);

		try
		{
			tagANUM = CTBASIC::CHV4DALPHANUMERIC{ num.data() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DALPHANUMERIC::HV4DALPHANUMERICToHstring(winrt::hstring& n)
	{
		n = tagANUM.operator std::wstring();

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DALPHANUMERIC::HV4DALPHANUMERICToProj(TBASIC::HV4DALPHANUMERIC& e)
	{
		e.HV4DALPHANUMERICFromHstring(tagANUM.operator std::wstring());

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}


	HV4D::IHV4DRETURN HV4DALPHANUMERIC::HV4DALPHANUMERICIsEqualHstring(winrt::hstring const& n)
	{
		if (tagANUM == n)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

	HV4D::IHV4DRETURN HV4DALPHANUMERIC::HV4DALPHANUMERICIsEqualProj(TBASIC::HV4DALPHANUMERIC const& e)
	{
		winrt::hstring num{};

		e.HV4DALPHANUMERICToHstring(num);

		if (tagANUM == num)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

}
