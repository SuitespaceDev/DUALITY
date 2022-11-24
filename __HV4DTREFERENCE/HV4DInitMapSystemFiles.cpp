#include "pch.h"

#include "HV4DInitMapSystemFiles.h"

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DFLOW;
using namespace winrt::HV4D::HV4DENUM;
using namespace winrt::HV4D::HV4DWINRT;

namespace winrt::HV4D::HV4DDUALITY
{
	std::vector<HV4D_ENUMERATED_FILE_SYSTEM> HV4DInitEnumeratedSystemFile()
	{
		std::vector<HV4D_ENUMERATED_FILE_SYSTEM> out{};

		std::unordered_map<HV4D_FILE_SYSTEM_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapSystemFileIDToHstring()->begin(); citt != HV4DMapSystemFileIDToHstring()->end(); citt++)
		{
			out.push_back(HV4D_ENUMERATED_FILE_SYSTEM{ citt->first, HV4D_SYSTEM_FILE_DESC{} });

		}

		return out;

	}

	std::unordered_map<HV4D_FILE_SYSTEM_ID, CHV4DSYSFILE> HV4DInitMapSystemFile()
	{
		std::unordered_map<HV4D_FILE_SYSTEM_ID, CHV4DSYSFILE> out{};

		std::unordered_map<HV4D_FILE_SYSTEM_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapSystemFileIDToHstring()->begin(); citt != HV4DMapSystemFileIDToHstring()->end(); citt++)
		{
			out.insert(std::pair(citt->first, CHV4DSYSFILE{}));

		}

		return out;

	}

	HV4DRETURN HV4DIsOntoMappedSystemFile(std::vector<HV4D_ENUMERATED_FILE_SYSTEM> const& e)
	{
		std::unordered_map<HV4D_FILE_SYSTEM_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapSystemFileIDToHstring()->begin(); citt != HV4DMapSystemFileIDToHstring()->end(); citt++)
		{
			bool found = false;

			for (HV4D_ENUMERATED_FILE_SYSTEM itt : e)
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

	HV4DRETURN HV4DIsOntoMappedSystemFile(std::unordered_map<HV4D_FILE_SYSTEM_ID, CHV4DSYSFILE> const& e)
	{
		std::unordered_map<HV4D_FILE_SYSTEM_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapSystemFileIDToHstring()->begin(); citt != HV4DMapSystemFileIDToHstring()->end(); citt++)
		{
			CHV4DSYSFILE SystemFile{};

			try
			{
				SystemFile = e.at(citt->first);

			}
			catch (std::out_of_range)
			{
				return HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

	}

}