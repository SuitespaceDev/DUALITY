#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4D.HV4DSYS.h"

#include "HV4DPage.h"

namespace winrt::HV4D::HV4DDRIVEIO
{
    class HV4DSharedMemory
    {
    public:
        HV4DSharedMemory() = default;

		HV4D::HV4DRETURN HV4DMallocVolume(
			uint32_t, uint32_t);

		HV4D::HV4DRETURN HV4DResizeVolume(
			uint32_t, uint32_t);

		void HV4DVolumeMB(uint32_t&);

		HV4D::HV4DRETURN HV4DLockVolume();

		HV4D::HV4DRETURN HV4DUnlockVolume();

		HV4D::HV4DRETURN HV4DDestroyVolume();

		HV4D::HV4DRETURN HV4DMapPage(
			HV4D::HV4DDRIVEIO::HV4DPage**);

		HV4D::HV4DRETURN HV4DUnmapPage(
			HV4D::HV4DDRIVEIO::HV4DPage*);

    };

}
