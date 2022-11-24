#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4D.HV4DSYS.h"

#include "HV4DSharedMemory.h"
#include "HV4DPage.h"

#include "RTHV4DTREE.g.h"

namespace winrt::HV4DTREE::implementation
{
  struct RTHV4DTREE : RTHV4DTREET<RTHV4DTREE>
  {
	public:
		RTHV4DTREE() = default;

	public:
		virtual HV4D::HV4DRETURN HV4DCurrentDir(HV4D::HV4DRELATION const&, hstring const&);

		virtual HV4D::HV4DRETURN HV4DDirTree(HV4D::HV4DRELATION const&, array_view<hstring>&);

		virtual HV4D::HV4DRETURN HV4DListFiles(HV4D::HV4DRELATION const&, array_view<hstring>&);

		virtual HV4D::HV4DRETURN HV4DDirChange(HV4D::HV4DRELATION const&, hstring const&);

		virtual HV4D::HV4DRETURN HV4DMkDir(HV4D::HV4DRELATION const&, hstring const&);

		virtual HV4D::HV4DRETURN HV4DDelDir(HV4D::HV4DRELATION const&, hstring const&);

		virtual HV4D::HV4DRETURN HV4DCopyTree(HV4D::HV4DRELATION const&, hstring const&, hstring const&);

		virtual HV4D::HV4DRETURN HV4DDelTree(HV4D::HV4DRELATION const&, hstring const&);

		virtual HV4D::HV4DRETURN HV4DOpenFile(HV4D::HV4DRELATION const&, hstring const&,
			 HV4D::HV4DMODULE::IHV4DFILE&);

		virtual HV4D::HV4DRETURN HV4DCloseFile(boolean const&,
			HV4D::HV4DMODULE::IHV4DFILE const&);

		virtual HV4D::HV4DRETURN HV4DSaveFile(HV4D::HV4DMODULE::IHV4DFILE const&);

		virtual HV4D::HV4DRETURN HV4DMoveFile(HV4D::HV4DRELATION const&, hstring const&, hstring const&, 
			HV4D::HV4DMODULE::IHV4DFILE const&, HV4D::HV4DMODULE::IHV4DFILE&);

		virtual HV4D::HV4DRETURN HV4DDelFile(HV4D::HV4DRELATION const&,
			HV4D::HV4DMODULE::IHV4DFILE const&, hstring const&);

		virtual void HV4DVolumeSize(uint32_t&, uint32_t&, uint32_t&);

  };

}

namespace winrt::HV4DTREE::factory_implementation
{
  struct RTHV4DTREE : RTHV4DTREET<RTHV4DTREE, implementation::RTHV4DTREE>
  {

  };

}
