#include "pch.h"
#include "HV4DTEXTBLOBW.h"
#if __has_include("HV4DTEXTBLOBW.g.cpp")
#include "HV4DTEXTBLOBW.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DTEXTBLOBW::HV4DTEXTBLOBW()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DTEXTBLOBW::HV4DTEXTBLOBW(HV4D::IHV4DCOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DTEXTBLOBW::HV4DTEXTBLOBW(HV4D::IHV4DCOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DTEXTBLOBW::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DTEXTBLOBW::HV4DSetUuidOfInstance()
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

	std::uint64_t HV4DTEXTBLOBW::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	std::uint64_t HV4DTEXTBLOBW::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DTEXTBLOBW::HV4DSetCreatedDateTime()
	{
		created_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	void HV4DTEXTBLOBW::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DTEXTBLOBW::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DTEXTBLOBW::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DTEXTBLOBW::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DCOBJECT HV4DTEXTBLOBW::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DTEXTBLOBW::HV4DSender(HV4D::IHV4DCOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DTEXTBLOBW::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{F6582DFD-3BDF-4CEF-B514-E22EBCFFE8D4}" };

	}

	std::uint64_t HV4DTEXTBLOBW::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0xF6582DFD3BDF4CEF;

	}

	winrt::hstring HV4DTEXTBLOBW::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DTEXTBLOBW";

	}

	winrt::guid HV4DTEXTBLOBW::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DTEXTBLOBW::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DTEXTBLOBW::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DTEXTBLOBW::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DTEXTBLOBW::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DTEXTBLOBW::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DTEXTBLOBW::HV4DTEXTBLOBWFromHstring(winrt::hstring const& t)
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

	HV4D::IHV4DRETURN HV4DTEXTBLOBW::HV4DTEXTBLOBWFromProj(TBASIC::HV4DTEXTBLOBW const& e)
	{
		winrt::hstring str{};

		e.HV4DTEXTBLOBWToHstring(str);

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

	HV4D::IHV4DRETURN HV4DTEXTBLOBW::HV4DTEXTBLOBWToHstring(winrt::hstring& t)
	{
		t = tagTEXT.operator std::wstring();

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DTEXTBLOBW::HV4DTEXTBLOBWToProj(TBASIC::HV4DTEXTBLOBW& e)
	{
		e.HV4DTEXTBLOBWFromHstring(tagTEXT.operator std::wstring());

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DTEXTBLOBW::HV4DTEXTBLOBWIsEqualHstring(winrt::hstring const& t)
	{
		CTBASIC::CHV4DTEXTBLOBW text{};

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

	HV4D::IHV4DRETURN HV4DTEXTBLOBW::HV4DTEXTBLOBWIsEqualProj(TBASIC::HV4DTEXTBLOBW const& e)
	{
		CTBASIC::CHV4DTEXTBLOBW text{};

		winrt::hstring str{};

		e.HV4DTEXTBLOBWToHstring(str);

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

	HV4D::IHV4DRETURN HV4DTEXTBLOBW::HV4DTEXTBLOBWSubStr(std::uint64_t const& i, std::uint64_t const& l, TBASIC::HV4DTEXTBLOBW& o)
	{
		CTBASIC::CHV4DTEXTBLOBW subtext = tagTEXT(i, l);

		o.HV4DTEXTBLOBWFromHstring(subtext.operator std::wstring());

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}
