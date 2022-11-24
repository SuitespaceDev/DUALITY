#include "pch.h"
#include "HV4DTENCRYPT.h"
#if __has_include("HV4DTENCRYPT.g.cpp")
#include "HV4DTENCRYPT.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4DT;

namespace winrt::HV4DSYSCALL::implementation
{
	HV4DTENCRYPT::HV4DTENCRYPT()
	{

		return;

	}

	HV4DRETURN HV4DTENCRYPT::HV4DNodeSolution(winrt::guid&, hstring&, hstring&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTENCRYPT::HV4DNodeHVID(HV4D::HV4DT_TYPE_ENUM, winrt::guid&, hstring&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTENCRYPT::HV4DWasCreatedOn(uint64_t&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTENCRYPT::HV4DWasSavedOn(uint64_t&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTENCRYPT::HV4DWasOpenedOn(uint64_t&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTENCRYPT::HV4DNodeParent(HV4DT::IHV4DTNODE&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTENCRYPT::HV4DNodeNextSibling(HV4DT::IHV4DTNODE&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTENCRYPT::HV4DNodePrevSibling(HV4DT::IHV4DTNODE&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DTENCRYPT::HV4DNodeChildren(Windows::Foundation::Collections::IMap<winrt::guid, HV4DT::IHV4DTNODE>)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
