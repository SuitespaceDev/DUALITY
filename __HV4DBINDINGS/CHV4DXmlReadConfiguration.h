#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\HV4DBASE.lib")

#include <filesystem>

#include <sstream>
#include <fstream>

#include "../HV4DBASE/HV4DString.h"

#include "../HV4DBASE/HV4DMapSystemFile.h"
#include "../HV4DBASE/HV4DMapConfigurationFile.h"
#include "../HV4DBASE/HV4DInitMapConfigurationFile.h"
#include "../HV4DBASE/HV4DMapFileSystemModules.h"
#include "../HV4DBASE/HV4DInitMapFileSystemModules.h"

#include "../HV4DBASE/CHV4DNUMERIC.h"
#include "../HV4DBASE/CHV4DRTCLASS.h"

#include "../HV4DBASE/CHV4DSYSFILE.h"

#include "winrt/HV4D.HV4DSYS.h"
#include "winrt/HV4D.HV4DSINK.h"

#include "../pugixml/pugixml.hpp"

namespace winrt::HV4D::HV4DDUALITY
{
	class CHV4DXmlReadConfiguration
	{
	public:
		CHV4DXmlReadConfiguration();

	public:
		HV4D::HV4DRETURN HV4DExecuteReadDocumentFromXml(HV4D::HV4DDUALITY::CHV4DSYSFILE const&);

		HV4D::HV4DRETURN HV4DReadFromDocumentStream(std::unordered_map<HV4D::HV4DWINRT::HV4D_DUALITY_FIELD_ID, hstring>&);

		HV4D::HV4DRETURN HV4DReadFromModuleStream(std::unordered_map<HV4D::HV4DENUM::HV4D_FILE_SYSTEM_MODULE_ID, HV4D::HV4DDUALITY::CHV4DRTCLASS>&);

		HV4D::HV4DRETURN HV4DClearDocumentStream();

	private:
		HV4D::HV4DDUALITY::CHV4DSYSFILE $HV4D{};

	private:
		HV4D::HV4DRETURN HV4DReadDocumentFromXml(pugi::xml_node const&);

		std::unordered_map<HV4D::HV4DWINRT::HV4D_DUALITY_FIELD_ID, hstring> DocumentStream{};

	private:
		HV4D::HV4DRETURN HV4DReadModulesFromXml(pugi::xml_node const&);

		std::unordered_map<HV4D::HV4DENUM::HV4D_FILE_SYSTEM_MODULE_ID, HV4D::HV4DDUALITY::CHV4DRTCLASS> ModuleStream{};

	};

}