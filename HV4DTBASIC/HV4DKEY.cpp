#include "pch.h"
#include "HV4DKEY.h"
#if __has_include("HV4DKEY.g.cpp")
#include "HV4DKEY.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DKEY::HV4DKEY()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DKEY::HV4DKEY(HV4D::IHV4DCOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DKEY::HV4DKEY(HV4D::IHV4DCOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DKEY::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DKEY::HV4DSetUuidOfInstance()
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

	std::uint64_t HV4DKEY::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	std::uint64_t HV4DKEY::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DKEY::HV4DSetCreatedDateTime()
	{
		created_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	void HV4DKEY::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DKEY::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DKEY::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DKEY::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DCOBJECT HV4DKEY::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DKEY::HV4DSender(HV4D::IHV4DCOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DKEY::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{559EFDB0-A8A1-46C4-B681-E3DE415C142F}" };

	}

	std::uint64_t HV4DKEY::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0x559EFDB0A8A146C4;

	}

	winrt::hstring HV4DKEY::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DKEY";

	}

	winrt::guid HV4DKEY::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DKEY::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DKEY::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DKEY::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DKEY::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DKEY::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DKEY::HV4DKEYFromHstring(winrt::hstring const& uid, winrt::hstring const& n)
	{
		try
		{
			tagKEY = { uid.data(), n.data() };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DKEY::HV4DKEYFromGuid(winrt::guid const& uid, winrt::hstring const& n)
	{
		try
		{
			tagKEY = { uid, n.data() };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DKEY::HV4DKEYFromHV4D(TBASIC::HV4DHVID const& uid, TBASIC::HV4DMAXPATH const& n)
	{
		winrt::guid uuid{};

		winrt::hstring name{};

		uid.HV4DHVIDToGuid(uuid);

		n.HV4DMAXPATHToHstring(name);

		try
		{
			tagKEY = { uuid, name.data() };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DKEY::HV4DKEYFromProj(TBASIC::HV4DKEY const& e)
	{
		winrt::guid uuid{};

		winrt::hstring name{};

		e.HV4DKEYToGuid(uuid, name);

		try
		{
			tagKEY = { uuid, name.data() };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DKEY::HV4DKEYToHstring(winrt::hstring& uid, winrt::hstring& n)
	{
		std::tuple<std::wstring, std::wstring> key = tagKEY;

		uid = std::get<0>(key);

		n = std::get<1>(key);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DKEY::HV4DKEYToGuid(winrt::guid& uid, winrt::hstring& n)
	{
		std::tuple<GUID, std::wstring> key = tagKEY;

		uid = std::get<0>(key);

		n = std::get<1>(key);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DKEY::HV4DKEYToHV4D(TBASIC::HV4DHVID& uid, TBASIC::HV4DMAXPATH& n)
	{
		std::tuple<GUID, std::wstring> key = tagKEY;

		uid.HV4DHVIDFromGuid(std::get<0>(key));

		n.HV4DMAXPATHFromHstring(std::get<1>(key));

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DKEY::HV4DKEYToProj(TBASIC::HV4DKEY& e)
	{
		std::tuple<GUID, std::wstring> key = tagKEY;

		e.HV4DKEYFromGuid(std::get<0>(key), std::get<1>(key));

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DKEY::HV4DKEYIsEqualHstring(winrt::hstring const& uid, winrt::hstring const& n)
	{
		CTBASIC::CHV4DKEY key{};

		try
		{
			key = { uid.data(), n.data()};

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagKEY == key)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagKEY < key)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DKEY::HV4DKEYIsEqualGuid(winrt::guid const& uid, winrt::hstring const& n)
	{
		CTBASIC::CHV4DKEY key{};

		try
		{
			key = { uid, n.data() };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagKEY == key)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagKEY < key)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DKEY::HV4DKEYIsEqualHV4D(TBASIC::HV4DHVID const& uid, TBASIC::HV4DMAXPATH const& n)
	{
		winrt::guid uuid{};

		winrt::hstring name{};

		uid.HV4DHVIDToGuid(uuid);
		
		n.HV4DMAXPATHToHstring(name);

		CTBASIC::CHV4DKEY key{};

		try
		{
			key = { uuid, name.data() };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagKEY == key)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagKEY < key)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DKEY::HV4DKEYIsEqualProj(TBASIC::HV4DKEY const& e)
	{
		winrt::guid uuid{};

		winrt::hstring name{};

		e.HV4DKEYToGuid(uuid, name);

		CTBASIC::CHV4DKEY key{};

		try
		{
			key = { uuid, name.data() };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagKEY == key)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagKEY < key)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

}
