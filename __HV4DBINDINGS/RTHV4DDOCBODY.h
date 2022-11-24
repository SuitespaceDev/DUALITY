#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\HV4DBASE.lib")

#include "RTHV4DDOCBODY.g.h"

namespace winrt::HV4DCFG::implementation
{
	struct RTHV4DDOCBODY : RTHV4DDOCBODYT<RTHV4DDOCBODY>
	{
	public:
        RTHV4DDOCBODY();

    };

}

namespace winrt::HV4DCFG::factory_implementation
{
	struct RTHV4DDOCBODY : RTHV4DDOCBODYT<RTHV4DDOCBODY, implementation::RTHV4DDOCBODY>
	{

	};

}
