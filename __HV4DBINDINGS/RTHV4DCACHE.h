#pragma once

#include <shobjidl.h>

#include <processthreadsapi.h>

#include "winrt/Windows.UI.Popups.h"

#include "winrt/HV4D.h"
#include "winrt/HV4D.HV4DSYS.h"
#include "winrt/HV4D.HV4DMATRIX.h"

#include "../HV4DHelpers/HV4DStub.hpp"
#include "../HV4DHelpers/HV4DSystem.hpp"

#include "RTHV4DCACHE.g.h"

namespace winrt::HV4DCACHE::implementation
{
	struct HV4DPROCESS {
		HV4D::HV4DDUALITY::CHV4DRTCLASS RTCLASSDESC;
		PROCESS_INFORMATION HANDLE;
	} tagHV4DPROCESS;

	struct RTHV4DCACHE : RTHV4DCACHET<RTHV4DCACHE>
	{
	public:
		RTHV4DCACHE();

	public:		
		virtual HV4D::HV4DRETURN HV4DLoadSystemCache(HV4D::HV4DSYS::IHV4DBAT);

		virtual HV4D::HV4DRETURN HV4DGetSystemCacheCFG(HV4D::HV4DSYS::IHV4DBAT);

		virtual HV4D::HV4DRETURN HV4DIsConfiguredSystemCache();

		virtual HV4D::HV4DRETURN HV4DClearSystemCache();

	private:
		HV4D::HV4DSYS::IHV4DBAT $HV4DBAT{ nullptr };

	public:
		virtual HV4D::HV4DRETURN HV4DSwapModule(HV4D::HV4D_SYSTEM_MODULE_ID const&, HV4D::HV4D_RTCLASS_DESC const&);

		virtual HV4D::HV4DRETURN HV4DGetModules(winrt::array_view<HV4D::HV4DSYS::IHV4DMODULE>);

		virtual HV4D::HV4DRETURN HV4DGetModule(HV4D::HV4D_SYSTEM_MODULE_ID const&, HV4D::HV4DSYS::IHV4DMODULE);

	private:
		std::vector<HV4D::HV4DSYS::IHV4DMODULE> $HV4DMODULES;

	public:
		virtual HV4D::HV4DRETURN HV4DLoadApplication(HV4D::HV4D_RTCLASS_DESC const&);

		virtual HV4D::HV4DRETURN HV4DUnloadApplication(HV4D::HV4D_RTCLASS_DESC const&);

	private:
		std::vector<HV4DPROCESS> $HV4DAPPLICATIONS{};

	private:
		void HV4DThrowCloseAppFail();

	};

}

namespace winrt::HV4DCACHE::factory_implementation
{
	struct RTHV4DCACHE : RTHV4DCACHET<RTHV4DCACHE, implementation::RTHV4DCACHE>
	{

	};

}
