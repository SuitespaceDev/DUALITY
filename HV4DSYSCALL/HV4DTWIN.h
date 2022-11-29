#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DT.h"

#include "HV4DTWIN.g.h"

namespace winrt::HV4DSYSCALL::implementation
{
	struct HV4DTWIN : HV4DTWINT<HV4DTWIN>
	{
	public:
		HV4DWIN();

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

namespace winrt::HV4DSYSCALL::factory_implementation
{
	struct HV4DTWIN : HV4DTWINT<HV4DTWIN, implementation::HV4DTWIN>
	{

	};

}