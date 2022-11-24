#include "pch.h"

#include "HV4DInitMapSystemModules.h"

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DFLOW;
using namespace winrt::HV4D::HV4DENUM;
using namespace winrt::HV4D::HV4DWINRT;

namespace winrt::HV4D::HV4DDUALITY
{
	std::vector<HV4D_ENUMERATED_SYSTEM_MODULE> HV4DInitEnumeratedSystemModules()
	{
		std::vector<HV4D_ENUMERATED_SYSTEM_MODULE> out{};

		std::unordered_map<HV4D_SYSTEM_MODULE_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapSystemModuleIDToHstring()->begin(); citt != HV4DMapSystemModuleIDToHstring()->end(); citt++)
		{
			out.push_back(HV4D_ENUMERATED_SYSTEM_MODULE{ citt->first, HV4D_RTCLASS_DESC{} });

		}

		return out;

	}

	std::unordered_map<HV4D_SYSTEM_MODULE_ID, CHV4DRTCLASS> HV4DInitMapEnumeratedSystemModules()
	{
		std::unordered_map<HV4D_SYSTEM_MODULE_ID, CHV4DRTCLASS> out{};

		std::unordered_map<HV4D_SYSTEM_MODULE_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapSystemModuleIDToHstring()->begin(); citt != HV4DMapSystemModuleIDToHstring()->end(); citt++)
		{
			out.insert(std::pair(citt->first, CHV4DRTCLASS{}));

		}

		return out;

	}

	HV4DRETURN HV4DIsOntoMappedSystemModule(std::vector<HV4D_ENUMERATED_SYSTEM_MODULE> const& e)
	{
		std::unordered_map<HV4D_SYSTEM_MODULE_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapSystemModuleIDToHstring()->begin(); citt != HV4DMapSystemModuleIDToHstring()->end(); citt++)
		{
			bool found = false;

			for (HV4D_ENUMERATED_SYSTEM_MODULE itt : e)
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

	HV4DRETURN HV4DIsOntoMappedSystemModule(std::unordered_map<HV4D_SYSTEM_MODULE_ID, CHV4DRTCLASS> const& e)
	{
		std::unordered_map<HV4D_SYSTEM_MODULE_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapSystemModuleIDToHstring()->begin(); citt != HV4DMapSystemModuleIDToHstring()->end(); citt++)
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