#include "pch.h"
#include "HV4DCOBJECT.h"
#if __has_include("HV4DCOBJECT.g.cpp")
#include "HV4DCOBJECT.g.cpp"
#endif

namespace winrt::HV4DCOBJECT::implementation
{
	HV4DCOBJECT::HV4DCOBJECT()
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		return;

	}

	HV4DCOBJECT::HV4DCOBJECT(HV4D::IHV4DCOBJECT const& sender)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		return;

	}

	HV4DCOBJECT::HV4DCOBJECT(HV4D::IHV4DCOBJECT const& sender, winrt::guid const& boxed, WF::IInspectable const& args)
	{
		HV4DListSupportedInterfaces();

		HV4DCreatedDateTime();

		HV4DUpdatedDateTime();

		owner_handle = sender;

		extended_args_type = boxed;

		extended_args = args;

		return;

	}

	void HV4DCOBJECT::HV4DListSupportedInterfaces()
	{
		SupportedInterfaces = winrt::single_threaded_vector<HV4D::HV4DT_TYPE_CONTRACT>();



	}

}
