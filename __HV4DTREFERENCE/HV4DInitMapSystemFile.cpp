#include "pch.h"

#include "HV4DInitMapSystemFile.h"

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DFLOW;
using namespace winrt::HV4D::HV4DWINRT;

namespace winrt::HV4D::HV4DDUALITY
{
	std::vector<HV4D_ENUMERATED_SYSTEM_FILE_FIELD> HV4DInitEnumeratedSystemFileField()
	{
		std::vector<HV4D_ENUMERATED_SYSTEM_FILE_FIELD> out{};

		std::unordered_map<HV4D_SYSTEM_FILE_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapSystemFileFieldIDToHstring()->begin(); citt != HV4DMapSystemFileFieldIDToHstring()->end(); citt++)
		{
			out.push_back(HV4D_ENUMERATED_SYSTEM_FILE_FIELD{ citt->first, L"" });

		}

		return out;

	}

	std::unordered_map<HV4D_SYSTEM_FILE_FIELD_ID, hstring> HV4DInitMapSystemFileField()
	{
		std::unordered_map<HV4D_SYSTEM_FILE_FIELD_ID, hstring> out{};

		std::unordered_map<HV4D_SYSTEM_FILE_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapSystemFileFieldIDToHstring()->begin(); citt != HV4DMapSystemFileFieldIDToHstring()->end(); citt++)
		{
			out.insert(std::pair(citt->first, L""));

		}

		return out;

	}

	HV4DRETURN HV4DIsOntoMappedSystemFileField(std::vector<HV4D_ENUMERATED_SYSTEM_FILE_FIELD> const& e)
	{
		std::unordered_map<HV4D_SYSTEM_FILE_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapSystemFileFieldIDToHstring()->begin(); citt != HV4DMapSystemFileFieldIDToHstring()->end(); citt++)
		{
			bool found = false;

			for (HV4D_ENUMERATED_SYSTEM_FILE_FIELD itt : e)
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

	HV4DRETURN HV4DIsOntoMappedSystemFileField(std::unordered_map<HV4D_SYSTEM_FILE_FIELD_ID, hstring> const& e)
	{
		std::unordered_map<HV4D_SYSTEM_FILE_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapSystemFileFieldIDToHstring()->begin(); citt != HV4DMapSystemFileFieldIDToHstring()->end(); citt++)
		{
			hstring Value{};

			try
			{
				Value = e.at(citt->first);

			}
			catch (std::out_of_range)
			{
				return HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

	}

}