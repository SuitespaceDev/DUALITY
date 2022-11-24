#include "pch.h"

#include "HV4DInitMapFileSystemModules.h"

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DFLOW;
using namespace winrt::HV4D::HV4DENUM;
using namespace winrt::HV4D::HV4DWINRT;

namespace winrt::HV4D::HV4DDUALITY
{
	std::vector<HV4D_ENUMERATED_FILE_SYSTEM_MODULE> HV4DInitEnumeratedFileSystemModules()
	{
		std::vector<HV4D_ENUMERATED_FILE_SYSTEM_MODULE> out{};

		std::unordered_map<HV4D_FILE_SYSTEM_MODULE_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapFileSystemModuleIDToHstring()->begin(); citt != HV4DMapFileSystemModuleIDToHstring()->end(); citt++)
		{
			out.push_back(HV4D_ENUMERATED_FILE_SYSTEM_MODULE{ citt->first, HV4D_RTCLASS_DESC{} });

		}

		return out;

	}

	std::unordered_map<HV4D_FILE_SYSTEM_MODULE_ID, CHV4DRTCLASS> HV4DInitMapFileSystemModules()
	{
		std::unordered_map<HV4D_FILE_SYSTEM_MODULE_ID, CHV4DRTCLASS> out{};

		std::unordered_map<HV4D_FILE_SYSTEM_MODULE_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapFileSystemModuleIDToHstring()->begin(); citt != HV4DMapFileSystemModuleIDToHstring()->end(); citt++)
		{
			out.insert(std::pair(citt->first, CHV4DRTCLASS{}));

		}

		return out;

	}

	HV4DRETURN HV4DIsOntoMappedFileSystemModule(std::vector<HV4D_ENUMERATED_FILE_SYSTEM_MODULE> const& e)
	{
		std::unordered_map<HV4D_FILE_SYSTEM_MODULE_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapFileSystemModuleIDToHstring()->begin(); citt != HV4DMapFileSystemModuleIDToHstring()->end(); citt++)
		{
			bool found = false;

			for (HV4D_ENUMERATED_FILE_SYSTEM_MODULE itt : e)
			{
				if (citt->first == itt.enumid)
				{
					found = true;

				}

			}

			if (!found)
			{
				return HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

	}

	HV4DRETURN HV4DIsOntoMappedFileSystemModule(std::unordered_map<HV4D_FILE_SYSTEM_MODULE_ID, CHV4DRTCLASS> const& e)
	{
		std::unordered_map<HV4D_FILE_SYSTEM_MODULE_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapFileSystemModuleIDToHstring()->begin(); citt != HV4DMapFileSystemModuleIDToHstring()->end(); citt++)
		{
			CHV4DRTCLASS RTClass{};

			try
			{
				RTClass = e.at(citt->first);

			}
			catch (std::out_of_range)
			{
				return HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

	}

}