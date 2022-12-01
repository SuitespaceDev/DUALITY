#include "pch.h"
#include "HV4DMAXPATH.h"
#if __has_include("HV4DMAXPATH.g.cpp")
#include "HV4DMAXPATH.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DMAXPATH::HV4DMAXPATH()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DMAXPATH::HV4DMAXPATH(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DMAXPATH::HV4DMAXPATH(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DMAXPATH::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DMAXPATH::HV4DSetUuidOfInstance()
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

	uint64_t HV4DMAXPATH::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	uint64_t HV4DMAXPATH::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DMAXPATH::HV4DSetCreatedDateTime()
	{
		created_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	void HV4DMAXPATH::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DMAXPATH::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DMAXPATH::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DMAXPATH::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DOBJECT HV4DMAXPATH::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DMAXPATH::HV4DSender(HV4D::IHV4DOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DMAXPATH::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{C3D2AA9F-E7FA-4C5D-9A9F-C46C59C354DB}" };

	}

	uint64_t HV4DMAXPATH::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0xC3D2AA9FE7FA4C5D;

	}

	winrt::hstring HV4DMAXPATH::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DMAXPATH";

	}

	winrt::guid HV4DMAXPATH::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DMAXPATH::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DMAXPATH::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DMAXPATH::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DMAXPATH::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DMAXPATH::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DMAXPATH::HV4DFromHstring(winrt::hstring const& mp)
	{
		try
		{
			tagMAXPATH = CTBASIC::CHV4DMAXPATH{ mp.data() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMAXPATH::HV4DFromABI(TBASIC::MAXPATH const& e)
	{
		try
		{
			tagMAXPATH = CTBASIC::CHV4DMAXPATH{ e.mp.data() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMAXPATH::HV4DFromWinRT(TBASIC::HV4DMAXPATH const& e)
	{
		TBASIC::MAXPATH abs{};

		if (e.HV4DToABI(abs) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		try
		{
			tagMAXPATH = CTBASIC::CHV4DMAXPATH{ abs.mp.data() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMAXPATH::HV4DToHstring(winrt::hstring& mp)
	{
		std::wstring maxpath;

		tagMAXPATH.HV4DGetStringMAXPATH(maxpath);

		mp = maxpath;

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMAXPATH::HV4DToABI(TBASIC::MAXPATH& e)
	{
		std::wstring maxpath{};

		tagMAXPATH.HV4DGetStringMAXPATH(maxpath);

		e.mp = maxpath;

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMAXPATH::HV4DToWinRT(TBASIC::HV4DMAXPATH& e)
	{
		std::wstring maxpath{};

		tagMAXPATH.HV4DGetStringMAXPATH(maxpath);

		if (e.HV4DFromHstring(maxpath) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMAXPATH::HV4DIsEqualHstring(winrt::hstring const& mp)
	{
		std::wstring maxpath{};

		tagMAXPATH.HV4DGetStringMAXPATH(maxpath);

		if (maxpath == mp)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

	HV4D::IHV4DRETURN HV4DMAXPATH::HV4DIsEqualABI(TBASIC::MAXPATH const& e)
	{
		std::wstring maxpath{};

		tagMAXPATH.HV4DGetStringMAXPATH(maxpath);

		if (maxpath == e.mp)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

	HV4D::IHV4DRETURN HV4DMAXPATH::HV4DIsEqualWinRT(TBASIC::HV4DMAXPATH const& e)
	{
		std::wstring maxpath{};

		tagMAXPATH.HV4DGetStringMAXPATH(maxpath);

		winrt::hstring winrt_maxpath{};

		e.HV4DToHstring(winrt_maxpath);

		if (maxpath == winrt_maxpath)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

}
