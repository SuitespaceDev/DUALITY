#include "pch.h"
#include "HV4DRETURN.h"
#if __has_include("HV4DRETURN.g.cpp")
#include "HV4DRETURN.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4DABI;
using namespace winrt::HV4DT;

namespace winrt::HV4DABI::implementation
{
	HV4DRETURN::HV4DRETURN()
	{

		return;

	}

	HV4DRETURN HV4DRETURN::HV4DNode(HV4DTYPE& t, winrt::guid& guid, hstring& s)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DRETURN::HV4DNodeParent(IHV4DTNODE n)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DRETURN::HV4DNodeNextSibling(IHV4DTNODE n)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DRETURN::HV4DNodePrevSibling(IHV4DTNODE n)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DRETURN::HV4DNodeChildren(Windows::Foundation::Collections::IMap<winrt::guid, IHV4DTNODE> o)
	{

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}
