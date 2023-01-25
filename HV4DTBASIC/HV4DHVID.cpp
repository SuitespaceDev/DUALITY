#include "pch.h"
#include "HV4DHVID.h"
#if __has_include("HV4DHVID.g.cpp")
#include "HV4DHVID.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DHVID::HV4DHVID()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DHVID::HV4DHVID(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DHVID::HV4DHVID(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DHVID::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DHVID::HV4DSetUuidOfInstance()
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

	std::uint64_t HV4DHVID::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	std::uint64_t HV4DHVID::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DHVID::HV4DSetCreatedDateTime()
	{
		created_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	void HV4DHVID::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DHVID::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DHVID::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DHVID::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DOBJECT HV4DHVID::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DHVID::HV4DSender(HV4D::IHV4DOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DHVID::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{493BEFB6-88CA-4D84-A27A-9D735C89C443}" };

	}

	std::uint64_t HV4DHVID::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0x493BEFB688CA4D84;

	}

	winrt::hstring HV4DHVID::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DHVID";

	}

	winrt::guid HV4DHVID::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DHVID::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DHVID::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DHVID::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DHVID::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DHVID::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DHVIDFromHstring(winrt::hstring const& uid)
	{
		try
		{
			tagHVID = uid.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DHVIDFromGuid(winrt::guid const& uid)
	{
		try
		{
			tagHVID = uid;

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DHVIDFromProj(TBASIC::HV4DHVID const& e)
	{
		winrt::hstring uid{};

		e.HV4DHVIDToHstring(uid);

		try
		{
			tagHVID = uid.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DHVIDToHstring(winrt::hstring& uid)
	{
		uid = tagHVID.operator std::wstring();

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DHVIDToGuid(winrt::guid& uid)
	{
		uid = tagHVID.operator GUID();

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DHVIDToProj(TBASIC::HV4DHVID& e)
	{
		e.HV4DHVIDFromGuid(tagHVID.operator GUID());

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DHVIDIsEqualHstring(winrt::hstring const& uid)
	{
		CTBASIC::CHV4DHVID clsid{};

		try
		{
			clsid = uid.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagHVID == clsid)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagHVID < clsid)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DHVIDIsEqualGuid(winrt::guid const& uid)
	{
		CTBASIC::CHV4DHVID clsid{};

		try
		{
			clsid = uid;

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagHVID == clsid)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagHVID < clsid)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DHHVIDIsEqualProj(TBASIC::HV4DHVID const& e)
	{
		winrt::hstring uuid{};

		e.HV4DHVIDToHstring(uuid);

		CTBASIC::CHV4DHVID clsid{};

		try
		{
			clsid = uuid.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagHVID == clsid)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagHVID < clsid)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DHVID::HV4DSetToRandomHVID()
	{
		try
		{
			tagHVID();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_OPERATION_FAILED{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}
