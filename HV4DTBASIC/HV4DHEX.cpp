#include "pch.h"
#include "HV4DHEX.h"
#if __has_include("HV4DHEX.g.cpp")
#include "HV4DHEX.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DHEX::HV4DHEX()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DHEX::HV4DHEX(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DHEX::HV4DHEX(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DHEX::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DHEX::HV4DSetUuidOfInstance()
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

	uint64_t HV4DHEX::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	uint64_t HV4DHEX::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DHEX::HV4DSetCreatedDateTime()
	{
		created_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	void HV4DHEX::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DHEX::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DHEX::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DHEX::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DOBJECT HV4DHEX::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DHEX::HV4DSender(HV4D::IHV4DOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DHEX::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{DBEB1D03-A915-44FB-B7D9-0B2F075759C9}" };

	}

	uint64_t HV4DHEX::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0xDBEB1D03A91544FB;

	}

	winrt::hstring HV4DHEX::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DHEX";

	}

	winrt::guid HV4DHEX::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DHEX::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DHEX::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DHEX::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DHEX::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DHEX::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DHEX::HV4DHEXFromHstring(winrt::hstring const& n)
	{
		try
		{
			tagHEX = n.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHEX::HV4DHEXFromNUM(uint64_t const& n)
	{
		try
		{
			tagHEX = n;

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHEX::HV4DHEXFromProj(TBASIC::HV4DHEX const& e)
	{
		uint64_t num{};

		e.HV4DHEXToNUM(num);

		try
		{
			tagHEX = num;

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHEX::HV4DHEXToHstring(winrt::hstring& n)
	{
		n = tagHEX.operator std::wstring();

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHEX::HV4DHEXToNUM(uint64_t& n)
	{
		n = tagHEX;

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHEX::HV4DHEXToProj(TBASIC::HV4DHEX& e)
	{
		e.HV4DHEXFromNUM(tagHEX);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHEX::HV4DHEXIsEqualHstring(winrt::hstring const& n)
	{
		CTBASIC::CHV4DHEX hex{ n.data() };

		if (tagHEX == hex)
		{
			return HV4D::HV4D_TRUE{};

		}
		else
		{
			return HV4D::HV4D_FALSE{};

		}

	}

	HV4D::IHV4DRETURN HV4DHEX::HV4DHEXIsEqualNUM(uint64_t const& n)
	{
		CTBASIC::CHV4DHEX hex{ n };

		if (tagHEX == hex)
		{
			return HV4D::HV4D_TRUE{};

		}
		else
		{
			return HV4D::HV4D_FALSE{};

		}

	}

	HV4D::IHV4DRETURN HV4DHEX::HV4DHEXIsEqualProj(TBASIC::HV4DHEX const& e)
	{
		uint64_t num{};

		e.HV4DHEXToNUM(num);

		CTBASIC::CHV4DHEX hex{ num };

		if (tagHEX == hex)
		{
			return HV4D::HV4D_TRUE{};

		}
		else
		{
			return HV4D::HV4D_FALSE{};

		}

	}

}
