#include "pch.h"
#include "HV4DOFFSET.h"
#if __has_include("HV4DOFFSET.g.cpp")
#include "HV4DOFFSET.g.cpp"
#endif

namespace winrt::HV4DTBASIC::implementation
{
	HV4DOFFSET::HV4DOFFSET()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DOFFSET::HV4DOFFSET(HV4D::IHV4DOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DOFFSET::HV4DOFFSET(HV4D::IHV4DOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	winrt::guid HV4DOFFSET::HV4DUuidOfInstance()
	{
		CTBASIC::CHV4DOFFSET off{};

		return uuid_of_instance;

	}


	void HV4DOFFSET::HV4DSetUuidOfInstance()
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

	std::uint64_t HV4DOFFSET::HV4DCreatedDateTime()
	{
		HV4DSetUpdatedDateTime();

		return created_date_time;

	}

	std::uint64_t HV4DOFFSET::HV4DUpdatedDateTime()
	{


		return updated_date_time;

	}

	void HV4DOFFSET::HV4DSetCreatedDateTime()
	{
		created_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	void HV4DOFFSET::HV4DSetUpdatedDateTime()
	{
		updated_date_time = (std::uint64_t)std::time(nullptr);

		return;

	}

	WFC::IVector<HV4D::HV4DT_TYPE_CONTRACT> HV4DOFFSET::HV4DSupportsInterfaces()
	{
		HV4DSetUpdatedDateTime();

		return supported_interfaces;

	}

	void HV4DOFFSET::HV4DListSupportedInterfaces()
	{
		supported_interfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		supported_interfaces.Append(HV4D::HV4DT_TYPE_CONTRACT{});

		return;

	}

	HV4D::IHV4DTTYPE HV4DOFFSET::HV4DGetTType()
	{
		HV4DSetUpdatedDateTime();

		return HV4D::HV4DT_TYPE_PARAMETER{ *this, winrt::guid{L"{DC2DD014-87C4-41A2-A352-777C991C2D09}"}, nullptr };

	};

	HV4D::IHV4DOBJECT HV4DOFFSET::HV4DSender()
	{
		HV4DSetUpdatedDateTime();

		return owner_handle;

	}

	void HV4DOFFSET::HV4DSender(HV4D::IHV4DOBJECT const& e)
	{
		HV4DSetUpdatedDateTime();

		owner_handle = e;

		return;

	}

	winrt::guid HV4DOFFSET::HV4DTTypeUid()
	{
		HV4DSetUpdatedDateTime();

		return winrt::guid{ L"{0A731AD8-1637-405C-8075-4FBAAEB173AE}" };

	}

	std::uint64_t HV4DOFFSET::HV4DTTypeID()
	{
		HV4DSetUpdatedDateTime();

		return 0x0A731AD81637405C;

	}

	winrt::hstring HV4DOFFSET::HV4DTTypeName()
	{
		HV4DSetUpdatedDateTime();

		return L"HV4DOFFSET";

	}

	winrt::guid HV4DOFFSET::HV4DExtendedArgsType()
	{
		HV4DSetUpdatedDateTime();

		return extended_args_type;

	}

	void HV4DOFFSET::HV4DExtendedArgsType(winrt::guid const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args_type = e;

		return;

	}

	WF::IInspectable HV4DOFFSET::HV4DExtendedArgs()
	{
		HV4DSetUpdatedDateTime();

		return extended_args;

	}

	void HV4DOFFSET::HV4DExtendedArgs(WF::IInspectable const& e)
	{
		HV4DSetUpdatedDateTime();

		extended_args = e;

		return;

	}

	winrt::hstring HV4DOFFSET::HV4DComments()
	{
		HV4DSetUpdatedDateTime();

		return comments;

	}

	void HV4DOFFSET::HV4DComments(winrt::hstring const& e)
	{
		HV4DSetUpdatedDateTime();

		comments = e;

		return;

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DOFFSETFromHstring(winrt::hstring const& o, winrt::hstring const& sz)
	{
		try
		{
			tagOFFSET = std::tuple{ o.data(), sz.data() };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DOFFSETFromNUM(std::uint64_t const& o, std::uint64_t const& sz)
	{
		try
		{
			tagOFFSET = std::tuple{ o, sz };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DOFFSETFromProj(TBASIC::HV4DOFFSET const& e)
	{
		std::uint64_t offset{}, size{};

		e.HV4DOFFSETToNUM(offset, size);

		try
		{
			tagOFFSET = std::tuple{ offset, size };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DOFFSETToNUM(std::uint64_t& o, std::uint64_t& sz)
	{
		std::tuple<std::uint64_t, std::uint64_t> offset = tagOFFSET;

		o = std::get<0>(offset);

		sz = std::get<1>(offset);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DOFFSETToHstring(winrt::hstring& o, winrt::hstring& sz)
	{
		std::tuple<std::wstring, std::wstring> offset = tagOFFSET;

		o = std::get<0>(offset);

		sz = std::get<1>(offset);

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DOFFSETToProj(TBASIC::HV4DOFFSET& e)
	{
		std::tuple<std::uint64_t, std::uint64_t> offset = tagOFFSET;

		e.HV4DOFFSETFromNUM(std::get<0>(offset), std::get<1>(offset));

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DOFFSETIsEqualNUM(std::uint64_t const& o, std::uint64_t const& sz)
	{
		CTBASIC::CHV4DOFFSET offset{};

		try
		{
			offset = std::tuple{ o, sz };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagOFFSET == offset)
		{
			return HV4D::HV4D_TRUE{};

		}
		else
		{
			return HV4D::HV4D_FALSE{};

		}

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DOFFSETIsEqualHstring(winrt::hstring const& o, winrt::hstring const& sz)
	{
		CTBASIC::CHV4DOFFSET offset{};

		try
		{
			offset = std::tuple{ o.data(), sz.data() };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagOFFSET == offset)
		{
			return HV4D::HV4D_TRUE{};

		}
		else
		{
			return HV4D::HV4D_FALSE{};

		}

	}

	HV4D::IHV4DRETURN HV4DOFFSET::HV4DOFFSETIsEqualProj(TBASIC::HV4DOFFSET const& e)
	{
		CTBASIC::CHV4DOFFSET offset{};

		std::uint64_t o{}, sz{};

		e.HV4DOFFSETToNUM(o, sz);

		try
		{
			offset = std::tuple{ o, sz };

		}
		catch (std::exception)
		{
			return HV4D::HV4D_INVALID_ARGUMENT{};

		}

		if (tagOFFSET == offset)
		{
			return HV4D::HV4D_TRUE{};

		}
		else
		{
			return HV4D::HV4D_FALSE{};

		}

	}

}
