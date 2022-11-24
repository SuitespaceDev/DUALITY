#include "pch.h"

#include "CHV4DXmlReadVolume.h"

using namespace std::filesystem;

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DENUM;
using namespace winrt::HV4D::HV4DFIELD;
using namespace winrt::HV4D::HV4DFLOW;
using namespace winrt::HV4D::HV4DSYS;
using namespace winrt::HV4D::HV4DSINK;

using namespace winrt::HV4D::HV4DDUALITY;

using namespace pugi;

namespace winrt::HV4D::HV4DDUALITY
{
	CHV4DXmlReadVolume::CHV4DXmlReadVolume()
	{
		$HV4D = CHV4DSYSFILE{};

		DocumentStream = HV4DInitMapConfigurationField();

		ModuleStream = HV4DInitMapFileSystemModules();

	}

	HV4DRETURN CHV4DXmlReadVolume::HV4DExecuteReadDocumentFromXml(CHV4DSYSFILE const& e)
	{
		try
		{
			$HV4D = e;

		}
		catch (HV4DRETURN)
		{
			HV4DClearDocumentStream();

			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		HV4D_SYSTEM_FILE_DESC WinrtSystemFile{};

		if ($HV4D.HV4DGetWinrtSystemFile(WinrtSystemFile) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearDocumentStream();

			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		xml_document doc{};

		hstring path = WinrtSystemFile.file.p + WinrtSystemFile.file.f;

		xml_parse_result result = doc.load_file(path.c_str(), parse_default, encoding_utf16_be);

		if (!result)
		{
			return HV4DRETURN::HV4D_FILE_DOESNT_EXIST;

		}

		xml_node node{};

		node = doc.document_element();

		if (!node)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node SystemFile{};

		SystemFile = node.child(L"SystemFile");

		if (!SystemFile)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		if ($HV4D.HV4DValidateNodeSystemFile(SystemFile, L"FDUALITY") != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearDocumentStream();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node PropertyGroup{};

		PropertyGroup = node.child(L"PropertyGroup");

		if (!PropertyGroup)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		if (HV4DReadDocumentFromXml(PropertyGroup) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearDocumentStream();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node ItemGroup{};

		ItemGroup = node.child(L"PropertyGroup");

		if (!ItemGroup)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		if (HV4DReadModulesFromXml(ItemGroup) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			HV4DClearDocumentStream();

			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DXmlReadVolume::HV4DReadFromDocumentStream(std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring>& o)
	{
		o.clear();

		if (HV4DIsOntoMappedConfigurationDocument(DocumentStream) != HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
		{
			HV4DClearDocumentStream();

			return HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring>::iterator citt{};

		for (citt = DocumentStream.begin(); citt != DocumentStream.end(); citt++)
		{
			switch (citt->first) {

			case HV4D_DUALITY_FIELD_ID::HV4D_PROJECT_HVID:

				try
				{
					CHV4DHVID Value{ citt->second };

				}
				catch (HV4DRETURN)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				o.insert(std::pair(citt->first, citt->second));

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_CREATED_MMDDYYYY:

				try
				{
					HV4DClearDocumentStream();

					CHV4DMMDDYYYY Value{ citt->second };

				}
				catch (HV4DRETURN)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				o.insert(std::pair(citt->first, citt->second));

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_CREATED_HHMMSS:

				try
				{
					HV4DClearDocumentStream();

					CHV4DHHMMSS Value{ citt->second };

				}
				catch (HV4DRETURN)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				o.insert(std::pair(citt->first, citt->second));

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_SAVED_MMDDYYYY:

				try
				{
					CHV4DMMDDYYYY Value{ citt->second };

				}
				catch (HV4DRETURN)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				o.insert(std::pair(citt->first, citt->second));

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_SAVED_HHMMSS:

				try
				{
					CHV4DHHMMSS Value{ citt->second };

				}
				catch (HV4DRETURN)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				o.insert(std::pair(citt->first, citt->second));

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_OPENED_MMDDYYYY:

				try
				{
					CHV4DMMDDYYYY Value{ citt->second };

				}
				catch (HV4DRETURN)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				o.insert(std::pair(citt->first, citt->second));

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_OPENED_HHMMSS:

				try
				{
					CHV4DHHMMSS Value{ citt->second };

				}
				catch (HV4DRETURN)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				o.insert(std::pair(citt->first, citt->second));

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_PROJECT_NAME:

				try
				{
					CHV4DMAXPATH Value{ citt->second };

				}
				catch (HV4DRETURN)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				o.insert(std::pair(citt->first, citt->second));

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_INDEX_PATH:

				try
				{
					CHV4DMAXPATH Value{ citt->second };

				}
				catch (HV4DRETURN)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (HV4DHasSymbols(citt->second) != HV4DRETURN::HV4D_FALSE)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				o.insert(std::pair(citt->first, citt->second));

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_INDEX_FILE:

				try
				{
					CHV4DMAXPATH Value{ citt->second };

				}
				catch (HV4DRETURN)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (HV4DHasSymbols(citt->second) != HV4DRETURN::HV4D_FALSE)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				o.insert(std::pair(citt->first, citt->second));

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_PROJECT_PATH:

				try
				{
					CHV4DMAXPATH Value{ citt->second };

				}
				catch (HV4DRETURN)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (HV4DHasSymbols(citt->second) != HV4DRETURN::HV4D_FALSE)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				o.insert(std::pair(citt->first, citt->second));

				break;

			case HV4D_DUALITY_FIELD_ID::HV4D_PROJECT_FILE:

				try
				{
					CHV4DMAXPATH Value{ citt->second };

				}
				catch (HV4DRETURN)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				if (HV4DHasSymbols(citt->second) != HV4DRETURN::HV4D_FALSE)
				{
					HV4DClearDocumentStream();

					return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

				}

				o.insert(std::pair(citt->first, citt->second));

				break;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DXmlReadVolume::HV4DClearDocumentStream()
	{
		$HV4D = CHV4DSYSFILE{};

		DocumentStream.clear();

		DocumentStream = HV4DInitMapConfigurationField();

		ModuleStream.clear();

		ModuleStream = HV4DInitMapFileSystemModules();

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DXmlReadVolume::HV4DReadDocumentFromXml(xml_node const& e)
	{
		xml_node PropertyGroup{ e };

		if (!PropertyGroup)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		xml_attribute Label{};

		Label = PropertyGroup.attribute(L"Label");

		if (!Label)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		hstring ValueLabel{ L"" };

		ValueLabel = Label.value();

		if (ValueLabel != L"$HV4DPROJECT")
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node Property{};

		xml_attribute PropertyName{};

		hstring ValuePropertyName{ L"" };

		hstring Value{ L"" };

		for (Property = Property.child(L"Property"); Property; Property.next_sibling(L"Property"))
		{
			PropertyName = Property.attribute(L"PropertyName");

			if (!PropertyName)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			ValuePropertyName = PropertyName.value();

			HV4D_DUALITY_FIELD_ID id{};

			try
			{
				HV4DClearDocumentStream();

				id = HV4DMapConfigurationFieldHstringToID()->at(ValuePropertyName);

			}
			catch (std::out_of_range)
			{
				HV4DClearDocumentStream();

				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			DocumentStream.at(id) = Property.value();

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}