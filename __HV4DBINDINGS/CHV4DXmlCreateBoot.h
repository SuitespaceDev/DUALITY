#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\HV4DBASE.lib")

#include <filesystem>

#include "../HV4DBASE/HV4DSystem.hpp"

#include "../HV4DBASE/HV4DMapSysFile.h"

#include "../HV4DBASE/CHV4DNUMERIC.h"

#include "../HV4DBASE/CHV4DSYSFILE.h"
#include "../HV4DBASE/CHV4DSYSFILE.h"

#include "winrt/HV4D.HV4DSYS.h"
#include "winrt/HV4D.HV4DSINK.h"

#include "CHV4DXmlWriteBoot.h"

#include "../pugixml/pugixml.hpp"

namespace winrt::HV4D::HV4DDUALITY
{
    class CHV4DXmlCreateBoot
    {
    public:
        CHV4DXmlCreateBoot();

    public:
        HV4D::HV4DRETURN HV4DExecuteCreateXml(HV4D::HV4DDUALITY::CHV4DSYSFILE const&, std::unordered_map<HV4D::HV4D_FILE_SYSTEM_ID, HV4D::HV4DDUALITY::CHV4DSYSFILE>&);

    private:
        HV4D::HV4DRETURN HV4DCreateNode(pugi::xml_node const&);

        HV4D::HV4DDUALITY::CHV4DSYSFILE $HV4DSYSFILE{};

        std::unordered_map<HV4D::HV4D_FILE_SYSTEM_ID, HV4D::HV4DDUALITY::CHV4DSYSFILE> $HV4DBOOT{};

    private:
        HV4D::HV4DDUALITY::CHV4DXmlWriteBoot Write{};

    };

}