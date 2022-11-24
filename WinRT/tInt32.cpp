#include "pch.h"
#include "tInt32.h"
#if __has_include("tInt32.g.cpp")
#include "tInt32.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4DT;

namespace winrt::WinRT::implementation
{
	tInt32::tInt32()
	{

		return;

	}

	HV4DRETURN tInt32::HV4DNodeSolution(winrt::guid&, hstring&, hstring&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tInt32::HV4DNodeHVID(HV4D::t_TYPE_ENUM, winrt::guid&, hstring&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tInt32::HV4DWasCreatedOn(uint64_t&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tInt32::HV4DWasSavedOn(uint64_t&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tInt32::HV4DWasOpenedOn(uint64_t&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tInt32::HV4DNodeParent(HV4DT::IHV4DTNODE&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tInt32::HV4DNodeNextSibling(HV4DT::IHV4DTNODE&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tInt32::HV4DNodePrevSibling(HV4DT::IHV4DTNODE&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tInt32::HV4DNodeChildren(Windows::Foundation::Collections::IMap<winrt::guid, HV4DT::IHV4DTNODE>)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
