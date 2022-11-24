#pragma once

#include "winrt/HV4D.h"

#include "HV4DSTRING.g.h"

namespace winrt::HV4DSYSCALL::implementation
{
	struct HV4DSTRING : HV4DSTRINGT<HV4DSTRING>
	{
	public:
		HV4DSTRING();

	public:
		HV4D::HV4DRETURN HV4DSubStr(hstring const&, uint32_t const&, uint32_t const&, hstring&);

		HV4D::HV4DRETURN HV4DNoSymbols(hstring const&, hstring&);

		HV4D::HV4DRETURN HV4DHasSymbols(hstring const&);

		HV4D::HV4DRETURN HV4DNoEscape(hstring const&, hstring&);


	};

}

namespace winrt::HV4DSYSCALL::factory_implementation
{
	struct HV4DSTRING : HV4DSTRINGT<HV4DSTRING, implementation::HV4DSTRING>
	{

	};

}
