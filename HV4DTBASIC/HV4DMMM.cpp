#include "pch.h"
#include "HV4DMMM.h"
#if __has_include("HV4DMMM.g.cpp")
#include "HV4DMMM.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DMMM::HV4DMMM()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DMMM::HV4DMMM(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DMMM::HV4DMMM(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DMMM::HV4DUuidOfInstance()
	{

		return uuid_of_instance;

	}


	void HV4DMMM::HV4DSetUuidOfInstance()
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

	uint64_t HV4DMMM::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	uint64_t HV4DMMM::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DMMM::HV4DSetCreatedDateTime()
	{
		created_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	void HV4DMMM::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DMMM::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DMMM::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DMMM::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DOBJECT HV4DMMM::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DMMM::HV4DSender(HV4D::IHV4DOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DMMM::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{6AD2FC66-BDF9-4D9E-A5F5-56207F581B1D}" };

	}

	uint64_t HV4DMMM::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0x6AD2FC66BDF94D9E;

	}

	winrt::hstring HV4DMMM::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DMMM";

	}

	winrt::guid HV4DMMM::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DMMM::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DMMM::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DMMM::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DMMM::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DMMM::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DMMM::HV4DMMMFromHstring(winrt::hstring const& v)
	{
		try
		{
			tagMMM = v.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMMM::HV4DMMMFromNumeric(uint32_t const& mil, uint32_t const& maj, uint32_t const& min)
	{
		try
		{
			tagMMM = std::tuple{ mil, maj, min };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMMM::HV4DMMMFromProj(TBASIC::HV4DMMM const& e)
	{
		winrt::hstring str{};

		e.HV4DMMMToHstring(str);

		try
		{
			tagMMM = str.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMMM::HV4DMMMToHstring(winrt::hstring& v)
	{
		v = tagMMM.operator std::wstring();

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMMM::HV4DMMMToNumeric(uint32_t& mil, uint32_t& maj, uint32_t& min)
	{
		std::tuple<uint32_t, uint32_t, uint32_t> mmm = tagMMM;

		mil = std::get<0>(mmm);

		maj = std::get<1>(mmm);

		min = std::get<2>(mmm);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMMM::HV4DMMMToProj(TBASIC::HV4DMMM& e)
	{
		e.HV4DMMMFromHstring(tagMMM.operator std::wstring());

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DMMM::HV4DMMMIsEqualHstring(winrt::hstring const& v)
	{
		CTBASIC::CHV4DMMM mmm{};

		try
		{
			mmm = v.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagMMM == mmm)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagMMM < mmm)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DMMM::HV4DMMMIsEqualNumeric(uint32_t const& mil, uint32_t const& maj, uint32_t const& min)
	{
		CTBASIC::CHV4DMMM mmm{};

		try
		{
			mmm = CTBASIC::CHV4DMMM{ mil, maj, min };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagMMM == mmm)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagMMM < mmm)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

	HV4D::IHV4DRETURN HV4DMMM::HV4DMMMIsEqualProj(TBASIC::HV4DMMM const& e)
	{
		CTBASIC::CHV4DMMM mmm{};

		winrt::hstring str{};

		e.HV4DMMMToHstring(str);

		try
		{
			mmm = str.data();

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagMMM == mmm)
		{
			return HV4D::HV4D_IS_EQUAL{};

		}
		else if (tagMMM < mmm)
		{
			return HV4D::HV4D_IS_LESSER{};

		}
		else
		{
			return HV4D::HV4D_IS_GREATER{};

		}

	}

}
