#pragma once

#pragma comment (lib, "C:\\Users\\rebek\\Source\\DUALITY\\x64\\Debug\\HV4DBASE.lib")

#include "../HV4DBASE/HV4DSystem.hpp"

#include "../HV4DBASE/HV4DMapSysFile.h"

#include "../HV4DBASE/CHV4DNUMERIC.h"

#include "../HV4DBASE/CHV4DSYSFILE.h"
#include "../HV4DBASE/CHV4DSYSFILE.h"

#include "winrt/HV4D.HV4DSYS.h"
#include "winrt/HV4D.HV4DSINK.h"

#include "../pugixml/pugixml.hpp"

namespace winrt::HV4D::HV4DDUALITY
{
    class CHV4DXmlWriteBoot
    {
    public:
        CHV4DXmlWriteBoot();

    public:
        HV4D::HV4DRETURN HV4DExecuteWriteXml(HV4D::HV4DDUALITY::CHV4DSYSFILE const&, std::unordered_map<HV4D::HV4D_FILE_SYSTEM_ID, HV4D::HV4DDUALITY::CHV4DSYSFILE>&);

    private:
		HV4D::HV4DRETURN HV4DWriteNode(pugi::xml_node const&, HV4D::HV4DDUALITY::CHV4DSYSFILE const&);

		HV4D::HV4DDUALITY::CHV4DSYSFILE $HV4DSYSFILE{};

		std::unordered_map<HV4D::HV4D_FILE_SYSTEM_ID, HV4D::HV4DDUALITY::CHV4DSYSFILE> $HV4DBOOT{};

	private:
		HV4D::HV4DRETURN HV4DWriteGUID(pugi::xml_node const&, HV4DHVID const&);

		HV4D::HV4DRETURN HV4DWriteMMM(pugi::xml_node const&, HV4DMMM const&);

		HV4D::HV4DRETURN HV4DWriteMMDDYYYY(pugi::xml_node const&, HV4DMMDDYYYY const&);

		HV4D::HV4DRETURN HV4DWriteHHMMSS(pugi::xml_node const&, HV4DHHMMSS const&);

		HV4D::HV4DRETURN HV4DWriteNAME(pugi::xml_node const&, HV4DMAXPATH const&);

		HV4D::HV4DRETURN HV4DWritePATH(pugi::xml_node const&, HV4DABS const&);

		HV4D::HV4DRETURN HV4DWriteFILE(pugi::xml_node const&, HV4DABS const&);

		HV4D::HV4DRETURN HV4DWriteOFFSET(pugi::xml_node const&, HV4DNUMERIC const&);

		HV4D::HV4DRETURN HV4DWriteSIZE(pugi::xml_node const&, HV4DNUMERIC const&);

		HV4D::HV4DRETURN HV4DWriteFILEOFFSET(pugi::xml_node const&, HV4DNUMERIC const&);

		HV4D::HV4DRETURN HV4DWriteFILESIZE(pugi::xml_node const&, HV4DNUMERIC const&);

    };

}