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

	HV4DABS::HV4DABS(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DABS::HV4DABS(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
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

	uint64_t HV4DABS::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	uint64_t HV4DABS::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DABS::HV4DSetCreatedDateTime()
	{
		created_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	void HV4DABS::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (uint64_t)std::time(nullptr);

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

	HV4D::IHV4DOBJECT HV4DABS::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DABS::HV4DSender(HV4D::IHV4DOBJECT const& e)
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

	uint64_t HV4DABS::HV4DTTypeID()
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

	HV4D::IHV4DRETURN HV4DABS::HV4DFromHstring(winrt::hstring const& p, winrt::hstring const& f)
	{
		try
		{
			tagABS = CTBASIC::CHV4DABS{ p.c_str(), f.c_str() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DFromABI(TBASIC::ABS const& e)
	{
		try
		{
			tagABS = CTBASIC::CHV4DABS{ e.p.c_str(), e.f.c_str() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DFromWinRT(TBASIC::HV4DABS const& e)
	{
		TBASIC::ABS abs{};

		if (e.HV4DToABI(abs) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		try
		{
			tagABS = CTBASIC::CHV4DABS{ abs.p.c_str(), abs.f.c_str() };

		}
		catch (std::invalid_argument)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DToHstring(winrt::hstring& p, winrt::hstring& f)
	{
		std::wstring path{}, file{};

		tagABS.HV4DGetStringABS(path, file);

		p = path;

		f = file;

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DToABI(ABS& e)
	{
		std::wstring path{}, file{};

		tagABS.HV4DGetStringABS(path, file);

		e.p = path;

		e.f = file;

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DToWinRT(TBASIC::HV4DABS& e)
	{
		std::wstring path{}, file{};

		tagABS.HV4DGetStringABS(path, file);

		if (e.HV4DFromHstring(path, file) != HV4D::HV4D_OPERATION_SUCCEEDED{})
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DIsEqualHstring(winrt::hstring const& p, winrt::hstring const& f)
	{
		std::wstring path{}, file{};

		tagABS.HV4DGetStringABS(path, file);

		if (path == p && file == f)
		{
			return HV4D::HV4D_TRUE{};

		}
		
		return HV4D::HV4D_FALSE{};

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DIsEqualABI(TBASIC::ABS const& e)
	{
		std::wstring path{}, file{};

		tagABS.HV4DGetStringABS(path, file);

		if (path == e.p && file == e.f)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

	HV4D::IHV4DRETURN HV4DABS::HV4DIsEqualWinRT(TBASIC::HV4DABS const& e)
	{
		std::wstring path{}, file{};

		tagABS.HV4DGetStringABS(path, file);

		winrt::hstring winrt_path{}, winrt_file{};

		e.HV4DToHstring(winrt_path, winrt_file);

		if (path == winrt_path && file == winrt_file)
		{
			return HV4D::HV4D_TRUE{};

		}

		return HV4D::HV4D_FALSE{};

	}

}
