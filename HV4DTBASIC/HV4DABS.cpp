#include "pch.h"
#include "HV4DABS.h"
#if __has_include("HV4DABS.g.cpp")
#include "HV4DABS.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DABS::HV4DABS()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DABS::HV4DABS(HV4D::IHV4DCOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DABS::HV4DABS(HV4D::IHV4DCOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DABS::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DABS::HV4DSetUuidOfInstance()
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

	std::uint64_t HV4DABS::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	std::uint64_t HV4DABS::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DABS::HV4DSetCreatedDateTime()
	{
		created_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	void HV4DABS::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DABS::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DABS::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DABS::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DCOBJECT HV4DABS::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DABS::HV4DSender(HV4D::IHV4DCOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DABS::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{B17B5355-3208-4C7B-B4DC-C6DCF4CEA29F}" };

	}

	std::uint64_t HV4DABS::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0xB17B535532084C7B;

	}

	winrt::hstring HV4DABS::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DABS";

	}

	winrt::guid HV4DABS::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DABS::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DABS::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DABS::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DABS::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DABS::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DABSFromHstring(winrt::hstring const& p, winrt::hstring const& f)
	{
		try
		{
			tagABS = std::tuple{ p.data(), f.data() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DABSFromMAXPATH(TBASIC::HV4DMAXPATH const& p, TBASIC::HV4DMAXPATH const& f)
	{
		winrt::hstring path{}, file{};

		p.HV4DMAXPATHToHstring(path);

		f.HV4DMAXPATHToHstring(file);

		try
		{
			tagABS = std::tuple{ path.data(), file.data() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DABSFromProj(TBASIC::HV4DABS const& e)
	{
		winrt::hstring path{}, file{};

		e.HV4DABSToHstring(path, file);

		try
		{
			tagABS = std::tuple{ path.data(), file.data() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DABSToHstring(winrt::hstring& p, winrt::hstring& f)
	{
		std::tuple<std::wstring, std::wstring> abs = tagABS;

		p = std::get<0>(abs);

		f = std::get<1>(abs);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DABSToMAXPATH(TBASIC::HV4DMAXPATH& p, TBASIC::HV4DMAXPATH& f)
	{
		std::tuple<std::wstring, std::wstring> abs = tagABS;

		p.HV4DMAXPATHFromHstring(std::get<0>(abs));

		f.HV4DMAXPATHFromHstring(std::get<1>(abs));

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DABSToProj(TBASIC::HV4DABS& e)
	{
		std::tuple<std::wstring, std::wstring> abs = tagABS;

		e.HV4DABSFromHstring(std::get<0>(abs), std::get<1>(abs));

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}


	HV4D::IHV4DRETURN HV4DABS::HV4DABSIsEqualHstring(winrt::hstring const& p, winrt::hstring const& f)
	{
		std::tuple<std::wstring, std::wstring> abs = tagABS;

		if (std::get<0>(abs) == p && std::get<1>(abs) == f)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DABSIsEqualMAXPATH(TBASIC::HV4DMAXPATH const& p, TBASIC::HV4DMAXPATH const& f)
	{
		winrt::hstring path{}, file{};

		p.HV4DMAXPATHToHstring(path);

		f.HV4DMAXPATHToHstring(file);

		std::tuple<std::wstring, std::wstring> abs = tagABS;

		if (std::get<0>(abs) == path && std::get<1>(abs) == file)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DABSIsEqualProj(TBASIC::HV4DABS const& e)
	{
		winrt::hstring path{}, file{};

		e.HV4DABSToHstring(path, file);

		std::tuple<std::wstring, std::wstring> abs = tagABS;

		if (std::get<0>(abs) == path && std::get<1>(abs) == file)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

}
