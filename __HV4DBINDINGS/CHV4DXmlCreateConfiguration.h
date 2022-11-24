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
    class CHV4DXmlCreateConfiguration
    {
    public:
        CHV4DXmlCreateConfiguration();

    public:
        HV4D::HV4DRETURN HV4DExecuteCreateXml(HV4D::HV4DDUALITY::CHV4DSYSFILE const&);

	private:
		HV4D::HV4DRETURN HV4DCreateSystemFile(pugi::xml_node const&);

		HV4D::HV4DRETURN HV4DCreatePropertyGroup(pugi::xml_node const&);

		HV4D::HV4DRETURN HV4DCreateItemGroup(pugi::xml_node const&);

	private:
        HV4D::HV4DDUALITY::CHV4DSYSFILE $HV4D{};

    };

}