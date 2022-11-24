#include "pch.h"

#include "HV4DInitMapIndex.h"

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DFLOW;
using namespace winrt::HV4D::HV4DWINRT;

namespace winrt::HV4D::HV4DDUALITY
{
	std::vector<HV4D_ENUMERATED_INDEX_FIELD> HV4DInitEnumeratedIndexField()
	{
		std::vector<HV4D_ENUMERATED_INDEX_FIELD> out{};

		std::unordered_map<HV4D_INDEX_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapProjectIndexFieldIDToHstring()->begin(); citt != HV4DMapProjectIndexFieldIDToHstring()->end(); citt++)
		{
			out.push_back(HV4D_ENUMERATED_INDEX_FIELD{ citt->first, HV4D_INDEX_DESC{} });

		}

		return out;

	}

	std::unordered_map<HV4D_INDEX_FIELD_ID, CHV4DINDEX> HV4DInitMapIndexField()
	{
		std::unordered_map<HV4D_INDEX_FIELD_ID, CHV4DINDEX> out{};

		std::unordered_map<HV4D_INDEX_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapProjectIndexFieldIDToHstring()->begin(); citt != HV4DMapProjectIndexFieldIDToHstring()->end(); citt++)
		{
			out.insert(std::pair(citt->first, CHV4DINDEX{}));

		}

		return out;

	}

	HV4DRETURN HV4DIsOntoMappedIndexField(std::vector<HV4D_ENUMERATED_INDEX_FIELD> const& e)
	{
		std::unordered_map<HV4D_INDEX_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapProjectIndexFieldIDToHstring()->begin(); citt != HV4DMapProjectIndexFieldIDToHstring()->end(); citt++)
		{
			bool found = false;

			for (HV4D_ENUMERATED_INDEX_FIELD itt : e)
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

	HV4DRETURN HV4DIsOntoMappedIndexField(std::unordered_map<HV4D_INDEX_FIELD_ID, CHV4DINDEX> const& e)
	{
		std::unordered_map<HV4D_INDEX_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapProjectIndexFieldIDToHstring()->begin(); citt != HV4DMapProjectIndexFieldIDToHstring()->end(); citt++)
		{
			CHV4DINDEX Index{};

			try
			{
				Index = e.at(citt->first);

			}
			catch (std::out_of_range)
			{
				return HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

	}

}