#include "pch.h"

#include "CHV4DXmlCreateConfiguration.h"

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
	CHV4DXmlCreateConfiguration::CHV4DXmlCreateConfiguration()
	{

	}

	HV4DRETURN CHV4DXmlCreateConfiguration::HV4DExecuteCreateXml(CHV4DSYSFILE const& e)
	{
		try
		{
			$HV4D = e;

		}
		catch (HV4DRETURN)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		HV4D_SYSTEM_FILE_DESC WinrtSystemFile{};

		if ($HV4D.HV4DGetWinrtSystemFile(WinrtSystemFile) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		hstring path = WinrtSystemFile.file.p + WinrtSystemFile.file.f;

		if (exists(path.c_str()))
		{
			if (!remove(path.c_str()))
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

		}

		std::wfstream xmldoc(path.c_str());

		xmldoc << L"<?xml version=\"1.0\" encoding=\"utf - 16BE\"?>" << std::endl;

		xmldoc << L"<Project ToolsVersion=\"1.0\" xmlns=\"http://schemas.entangledlogic.com/enterprise/DUALITY/2022\">" << std::endl;

		xmldoc << L"</Project>" << std::endl;

		xmldoc.close();

		xml_document doc{};

		xml_parse_result result = doc.load_file(path.c_str(), parse_default, encoding_utf16_be);

		if (!result)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node node{};

		node = doc.document_element();

		if (!node)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node SystemFile{};

		SystemFile = node.append_child(L"SystemFile");

		if (!SystemFile)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		if (HV4DCreateSystemFile(SystemFile) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node PropertyGroup{};

		PropertyGroup = node.insert_child_after(L"PropertyGroup", SystemFile);

		if (!PropertyGroup)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		if (HV4DCreatePropertyGroup(PropertyGroup) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node ItemGroup{};

		ItemGroup = node.insert_child_after(L"ItemGroup", PropertyGroup);

		if (!ItemGroup)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		if (HV4DCreateItemGroup(ItemGroup) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}
		
		doc.save_file(path.c_str(), L"\u0009", 1U, encoding_utf16_be);

		doc.reset();

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DXmlCreateConfiguration::HV4DCreateSystemFile(xml_node const& e)
	{
		xml_node SystemFile{ e };

		if (!SystemFile)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_attribute FileType{};

		FileType = SystemFile.append_attribute(L"FileType");

		if (!FileType)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		bool ret = FileType.set_value(L"FDUALITY");

		if (!ret)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node Property{};

		xml_attribute PropertyName{};

		std::unordered_map<HV4D_SYSTEM_FILE_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapSystemFileFieldIDToHstring()->begin(); citt != HV4DMapSystemFileFieldIDToHstring()->end(); citt++)
		{
			Property = SystemFile.append_child(L"Property");

			if (!Property)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			PropertyName = Property.append_attribute(L"PropertyName");

			if (!PropertyName)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			ret = PropertyName.set_value(citt->second.c_str());

			if (!ret)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

		}

		if ($HV4D.HV4DWriteNodeSystemFile(SystemFile) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
		{
			$HV4D = CHV4DSYSFILE{};

			$HV4D.HV4DWriteNodeSystemFile(SystemFile);

			return HV4DRETURN::HV4D_OPERATION_FAILED;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DXmlCreateConfiguration::HV4DCreatePropertyGroup(xml_node const& e)
	{
		xml_node PropertyGroup{ e };

		if (!PropertyGroup)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_attribute Label{};

		Label = PropertyGroup.append_attribute(L"Label");

		if (!Label)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		bool ret = Label.set_value(L"$HV4DPROJECT");

		if (!ret)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node Property{};

		xml_attribute PropertyName{};

		std::unordered_map<HV4D_DUALITY_FIELD_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapConfigurationFieldIDToHstring()->begin(); citt != HV4DMapConfigurationFieldIDToHstring()->end(); citt++)
		{
			Property = PropertyGroup.append_child(L"Property");

			if (!Property)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			PropertyName = Property.attribute(L"PropertyName");

			if (!PropertyName)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			ret = PropertyName.set_value(citt->second.c_str());

			if (!ret)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}
					
		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DXmlCreateConfiguration::HV4DCreateItemGroup(xml_node const& e)
	{
		xml_node ItemGroup{ e };

		if (!ItemGroup)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_attribute Label{};

		Label = ItemGroup.append_attribute(L"Label");

		if (!Label)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		bool ret = Label.set_value(L"$HV4DPROJECT");

		if (!ret)
		{
			return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

		}

		xml_node HV4DRTCLASS{};

		xml_attribute ClassType{};

		std::unordered_map<HV4D_FILE_SYSTEM_MODULE_ID, hstring>::const_iterator citt{};

		for (citt = HV4DMapFileSystemModuleIDToHstring()->begin(); citt != HV4DMapFileSystemModuleIDToHstring()->end(); citt++)
		{
			HV4DRTCLASS = ItemGroup.append_child(L"HV4DRTCLASS");

			if (!HV4DRTCLASS)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			ClassType = HV4DRTCLASS.attribute(L"ClassType");

			if (!ClassType)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			ret = ClassType.set_value(citt->second.c_str());

			if (!ret)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

			CHV4DRTCLASS RTClass{};

			if (RTClass.HV4DWriteNodeRTClass(HV4DRTCLASS) != HV4DRETURN::HV4D_OPERATION_SUCCEEDED)
			{
				return HV4DRETURN::HV4D_FILE_BAD_FORMATTING;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}