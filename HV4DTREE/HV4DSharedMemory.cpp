#include "pch.h"

#include "HV4DSharedMemory.h"

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DSystemModule;

namespace winrt::HV4D::HV4DDRIVEIO
{
	HV4DRETURN HV4DSharedMemory::HV4DMallocVolume(
		uint32_t, uint32_t)
	{


		return HV4DRETURN::HV4D_TRUE;

	}

	HV4DRETURN HV4DSharedMemory::HV4DResizeVolume(
		uint32_t, uint32_t)
	{


		return HV4DRETURN::HV4D_TRUE;

	}

	void HV4DSharedMemory::HV4DVolumeMB(uint32_t&)
	{


		return;

	}

	HV4DRETURN HV4DSharedMemory::HV4DLockVolume()
	{


		return HV4DRETURN::HV4D_TRUE;

	}

	HV4DRETURN HV4DSharedMemory::HV4DUnlockVolume()
	{


		return HV4DRETURN::HV4D_TRUE;

	}

	HV4DRETURN HV4DSharedMemory::HV4DDestroyVolume()
	{


		return HV4DRETURN::HV4D_TRUE;

	}

	HV4DRETURN HV4DSharedMemory::HV4DMapPage(
		HV4DDRIVEIO::HV4DPage** e)
	{


		return HV4DRETURN::HV4D_TRUE;

	}

	HV4DRETURN HV4DSharedMemory::HV4DUnmapPage(
		HV4DDRIVEIO::HV4DPage* e)
	{


		return HV4DRETURN::HV4D_TRUE;

	}

}