#include "pch.h"
#include "HV4DTKEYMAP.h"
#if __has_include("HV4DTKEYMAP.g.cpp")
#include "HV4DTKEYMAP.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4DT;

namespace winrt::HV4DSYSCALL::implementation
{
	HV4DTKEYMAP::HV4DTKEYMAP()
	{

		return;

	}

	HV4DRETURN HV4DTKEYMAP::HV4DNodeSolution(winrt::guid&, hstring&, hstring&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTKEYMAP::HV4DNodeHVID(HV4D::HV4DT_TYPE_ENUM, winrt::guid&, hstring&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTKEYMAP::HV4DWasCreatedOn(uint64_t&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTKEYMAP::HV4DWasSavedOn(uint64_t&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTKEYMAP::HV4DWasOpenedOn(uint64_t&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTKEYMAP::HV4DNodeParent(HV4DT::IHV4DTNODE&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTKEYMAP::HV4DNodeNextSibling(HV4DT::IHV4DTNODE&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTKEYMAP::HV4DNodePrevSibling(HV4DT::IHV4DTNODE&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTKEYMAP::HV4DNodeChildren(Windows::Foundation::Collections::IMap<winrt::guid, HV4DT::IHV4DTNODE>)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
