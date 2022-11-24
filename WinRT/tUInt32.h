#pragma once

#include "winrt/HV4D.h"
#include "winrt/t.h"

#include "tUInt32.g.h"

namespace winrt::WinRT::implementation
{
	struct tUInt32 : tUInt32T<tUInt32>
	{
	public:
		tUInt32();

	public:
		virtual HV4D::HV4DRETURN HV4DNodeSolution(winrt::guid&, hstring&, hstring&);

		virtual HV4D::HV4DRETURN HV4DNodeHVID(HV4D::t_TYPE_ENUM, winrt::guid&, hstring&);

		virtual HV4D::HV4DRETURN HV4DWasCreatedOn(uint64_t&);

		virtual HV4D::HV4DRETURN HV4DWasSavedOn(uint64_t&);

		virtual HV4D::HV4DRETURN HV4DWasOpenedOn(uint64_t&);

		virtual HV4D::HV4DRETURN HV4DNodeParent(HV4DT::IHV4DTNODE&);

		virtual HV4D::HV4DRETURN HV4DNodeNextSibling(HV4DT::IHV4DTNODE&);

		virtual HV4D::HV4DRETURN HV4DNodePrevSibling(HV4DT::IHV4DTNODE&);

		virtual HV4D::HV4DRETURN HV4DNodeChildren(Windows::Foundation::Collections::IMap<winrt::guid, HV4DT::IHV4DTNODE>);

	};

}

namespace winrt::WinRT::factory_implementation
{
	struct tUInt32 : tUInt32T<tUInt32, implementation::tUInt32>
	{

	};

}
