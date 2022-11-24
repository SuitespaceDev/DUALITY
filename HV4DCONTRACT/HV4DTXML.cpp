#include "pch.h"
#include "HV4DTXML.h"
#if __has_include("HV4DTXML.g.cpp")
#include "HV4DTXML.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4DT;

namespace winrt::HV4DCONTRACT::implementation
{
	HV4DTXML::HV4DTXML()
	{

		return;

	}

	HV4DRETURN HV4DTXML::HV4DNodeSolution(winrt::guid&, hstring&, hstring&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTXML::HV4DNodeHVID(HV4D::HV4DT_TYPE_ENUM, winrt::guid&, hstring&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTXML::HV4DWasCreatedOn(uint64_t&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTXML::HV4DWasSavedOn(uint64_t&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTXML::HV4DWasOpenedOn(uint64_t&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTXML::HV4DNodeParent(HV4DT::IHV4DTNODE&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTXML::HV4DNodeNextSibling(HV4DT::IHV4DTNODE&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTXML::HV4DNodePrevSibling(HV4DT::IHV4DTNODE&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTXML::HV4DNodeChildren(Windows::Foundation::Collections::IMap<winrt::guid, HV4DT::IHV4DTNODE>)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
