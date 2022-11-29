#pragma once

#include "winrt/HV4DABI.h"

#include "winrt/HV4DT.h"

#include "HV4DRETURN.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DRETURN : HV4DRETURNT<HV4DRETURN>
	{
	public:
		HV4DRETURN();

	public:
		virtual HV4DRETURN HV4DNode(HV4DT::HV4DTYPE&, winrt::guid&, hstring&);

		virtual HV4DRETURN HV4DNodeParent(HV4DT::IHV4DTNODE);

		virtual HV4DRETURN HV4DNodeNextSibling(HV4DT::IHV4DTNODE);

		virtual HV4DRETURN HV4DNodePrevSibling(HV4DT::IHV4DTNODE);

		virtual HV4DRETURN HV4DNodeChildren(Windows::Foundation::Collections::IMap<winrt::guid, HV4DT::IHV4DTNODE>);

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DRETURN : HV4DRETURNT<HV4DRETURN, implementation::HV4DRETURN>
	{

	};

}
