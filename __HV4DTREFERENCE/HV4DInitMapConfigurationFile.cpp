#include "pch.h"

#include "HV4DInitMapConfigurationFile.h"

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DFLOW;
using namespace winrt::HV4D::HV4DWINRT;

namespace winrt::HV4D::HV4DDUALITY
{
	std::vector<HV4D_ENUMERATED_DUALITY_ENTRY> HV4DInitEnumeratedIndexField()
	{
		std::vector<HV4D_ENUMERATED_DUALITY_ENTRY> out{};

		std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapConfigurationFieldIDToHstring()->begin(); citt != HV4DMapConfigurationFieldIDToHstring()->end(); citt++)
		{
			out.push_back(HV4D_ENUMERATED_DUALITY_ENTRY{ citt->first, L"" });

		}

		return out;

	}

	std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring> HV4DInitMapConfigurationField()
	{
		std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring> out{};

		std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapConfigurationFieldIDToHstring()->begin(); citt != HV4DMapConfigurationFieldIDToHstring()->end(); citt++)
		{
			out.insert(std::pair(citt->first, L""));

		}

		return out;

	}

	HV4DRETURN HV4DIsOntoMappedConfigurationDocument(std::vector<HV4D_ENUMERATED_DUALITY_ENTRY> const& e)
	{
		std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapConfigurationFieldIDToHstring()->begin(); citt != HV4DMapConfigurationFieldIDToHstring()->end(); citt++)
		{
			bool found = false;

			for (HV4D_ENUMERATED_DUALITY_ENTRY itt : e)
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

	HV4DRETURN HV4DIsOntoMappedConfigurationDocument(std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring> const& e)
	{
		std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapConfigurationFieldIDToHstring()->begin(); citt != HV4DMapConfigurationFieldIDToHstring()->end(); citt++)
		{
			bool found = false;

			hstring Value{ L"" };

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