#include "pch.h"
#include "tChar.h"
#if __has_include("tChar.g.cpp")
#include "tChar.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4DT;

namespace winrt::WinRT::implementation
{
	tChar::tChar()
	{

		return;

	}

	HV4DRETURN tChar::HV4DNodeSolution(winrt::guid&, hstring&, hstring&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tChar::HV4DNodeHVID(HV4D::t_TYPE_ENUM, winrt::guid&, hstring&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tChar::HV4DWasCreatedOn(uint64_t&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tChar::HV4DWasSavedOn(uint64_t&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tChar::HV4DWasOpenedOn(uint64_t&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tChar::HV4DNodeParent(HV4DT::IHV4DTNODE&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tChar::HV4DNodeNextSibling(HV4DT::IHV4DTNODE&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tChar::HV4DNodePrevSibling(HV4DT::IHV4DTNODE&)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN tChar::HV4DNodeChildren(Windows::Foundation::Collections::IMap<winrt::guid, HV4DT::IHV4DTNODE>)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
