#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DT.h"

#include "HV4DTASYNC.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DTASYNC : HV4DTASYNCT<HV4DTASYNC>
	{
	public:
		HV4DTASYNC();

	public:
		virtual HV4D::HV4DRETURN HV4DNodeSolution(winrt::guid&, hstring&, hstring&);

		virtual HV4D::HV4DRETURN HV4DNodeHVID(HV4D::HV4DT_TYPE_ENUM, winrt::guid&, hstring&);

		virtual HV4D::HV4DRETURN HV4DWasCreatedOn(uint64_t&);

		virtual HV4D::HV4DRETURN HV4DWasSavedOn(uint64_t&);

		virtual HV4D::HV4DRETURN HV4DWasOpenedOn(uint64_t&);

		virtual HV4D::HV4DRETURN HV4DNodeParent(HV4DT::IHV4DTNODE&);

		virtual HV4D::HV4DRETURN HV4DNodeNextSibling(HV4DT::IHV4DTNODE&);

		virtual HV4D::HV4DRETURN HV4DNodePrevSibling(HV4DT::IHV4DTNODE&);

		virtual HV4D::HV4DRETURN HV4DNodeChildren(Windows::Foundation::Collections::IMap<winrt::guid, HV4DT::IHV4DTNODE>);

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DTASYNC : HV4DTASYNCT<HV4DTASYNC, implementation::HV4DTASYNC>
	{

	};

}
