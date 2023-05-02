#include "pch.h"
#include "HV4DTEXTBLOBA.h"
#if __has_include("HV4DTEXTBLOBA.g.cpp")
#include "HV4DTEXTBLOBA.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DTEXTBLOBA::HV4DTEXTBLOBA()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DTEXTBLOBA::HV4DTEXTBLOBA(HV4D::IHV4DCOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DTEXTBLOBA::HV4DTEXTBLOBA(HV4D::IHV4DCOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DTEXTBLOBA::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DTEXTBLOBA::HV4DSetUuidOfInstance()
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

	std::uint64_t HV4DTEXTBLOBA::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	std::uint64_t HV4DTEXTBLOBA::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DTEXTBLOBA::HV4DSetCreatedDateTime()
	{
		created_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	void HV4DTEXTBLOBA::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DTEXTBLOBA::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DTEXTBLOBA::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DTEXTBLOBA::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DCOBJECT HV4DTEXTBLOBA::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DTEXTBLOBA::HV4DSender(HV4D::IHV4DCOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DTEXTBLOBA::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{33DBC17E-2ECC-4A02-B976-3A89D7EB189C}" };

	}

	std::uint64_t HV4DTEXTBLOBA::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0x33DBC17E2ECC4A02;

	}

	winrt::hstring HV4DTEXTBLOBA::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DTEXTBLOBA";

	}

	winrt::guid HV4DTEXTBLOBA::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DTEXTBLOBA::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DTEXTBLOBA::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DTEXTBLOBA::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DTEXTBLOBA::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DTEXTBLOBA::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DTEXTBLOBA::HV4DTEXTBLOBAFromHstring(winrt::hstring const& t)
	{
		try
		{
			tagTEXT = t.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DTEXTBLOBA::HV4DTEXTBLOBAFromProj(TBASIC::HV4DTEXTBLOBA const& e)
	{
		winrt::hstring str{};

		e.HV4DTEXTBLOBAToHstring(str);

		try
		{
			tagTEXT = str.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DTEXTBLOBA::HV4DTEXTBLOBAToHstring(winrt::hstring& t)
	{
		t = tagTEXT.operator std::wstring();

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DTEXTBLOBA::HV4DTEXTBLOBAToProj(TBASIC::HV4DTEXTBLOBA& e)
	{
		e.HV4DTEXTBLOBAFromHstring(tagTEXT.operator std::wstring());

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DTEXTBLOBA::HV4DTEXTBLOBAIsEqualHstring(winrt::hstring const& t)
	{
		CTBASIC::CHV4DTEXTBLOBA text{};

		try
		{
			text = t.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagTEXT == text)
		{
			return HV4D::HV4D_TRUE{};

		}
		else
		{
			return HV4D::HV4D_FALSE{};

		}

	}

	HV4D::IHV4DRETURN HV4DTEXTBLOBA::HV4DTEXTBLOBAIsEqualProj(TBASIC::HV4DTEXTBLOBA const& e)
	{
		CTBASIC::CHV4DTEXTBLOBA text{};

		winrt::hstring str{};

		e.HV4DTEXTBLOBAToHstring(str);

		try
		{
			text = str.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagTEXT == text)
		{
			return HV4D::HV4D_TRUE{};

		}
		else
		{
			return HV4D::HV4D_FALSE{};

		}

	}

	HV4D::IHV4DRETURN HV4DTEXTBLOBA::HV4DTEXTBLOBASubStr(std::uint64_t const& i, std::uint64_t const& l, TBASIC::HV4DTEXTBLOBA& o)
	{
		CTBASIC::CHV4DTEXTBLOBA subtext = tagTEXT(i, l);

		o.HV4DTEXTBLOBAFromHstring(subtext.operator std::wstring());

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}
