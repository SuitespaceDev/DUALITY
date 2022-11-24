#pragma once

#include "HV4DString.h"

#include "HV4DMapRTClass.h"
#include "HV4DMapSystemFile.h"

#include "CHV4DHVID.h"
#include "CHV4DMMM.h"
#include "CHV4DMMDDYYYY.h"
#include "CHV4DHHMMSS.h"
#include "CHV4DMAXPATH.h"
#include "CHV4DABS.h"
#include "CHV4DOFFSET.h"
#include "CHV4DNUMERIC.h"

#include "../pugixml/pugixml.hpp"

namespace winrt::HV4D::HV4DDUALITY
{
	class __declspec(dllexport) CHV4DSYSFILE
	{
	public:
		CHV4DSYSFILE();

		CHV4DSYSFILE(
			HV4D::HV4DHVID		const&,
			HV4D::HV4DMMM		const&,
			HV4D::HV4DMMDDYYYY	const&,
			HV4D::HV4DHHMMSS	const&,
			HV4D::HV4DMAXPATH	const&,
			HV4D::HV4DABS		const&,
			HV4D::HV4DNUMERIC	const&,
			HV4D::HV4DNUMERIC	const&,
			HV4D::HV4DNUMERIC	const&,
			HV4D::HV4DNUMERIC	const&);

		CHV4DSYSFILE(
			HV4D::HV4DDUALITY::CHV4DHVID		const&,
			HV4D::HV4DDUALITY::CHV4DMMM			const&,
			HV4D::HV4DDUALITY::CHV4DMMDDYYYY	const&,
			HV4D::HV4DDUALITY::CHV4DHHMMSS		const&,
			HV4D::HV4DDUALITY::CHV4DMAXPATH		const&,
			HV4D::HV4DDUALITY::CHV4DABS			const&,
			HV4D::HV4DDUALITY::CHV4DNUMERIC		const&,
			HV4D::HV4DDUALITY::CHV4DNUMERIC		const&,
			HV4D::HV4DDUALITY::CHV4DNUMERIC		const&,
			HV4D::HV4DDUALITY::CHV4DNUMERIC		const&);

		CHV4DSYSFILE(HV4D::HV4DWINRT::HV4D_SYSTEM_FILE_DESC const&);

		void HV4DIsValidSystemFile();

		void HV4DClearSystemFile();

	public:
		void operator = (HV4D::HV4DWINRT::HV4D_SYSTEM_FILE_DESC const&);

		void operator = (HV4D::HV4DDUALITY::CHV4DSYSFILE const&);

		bool operator == (HV4D::HV4DWINRT::HV4D_SYSTEM_FILE_DESC const&);

		bool operator == (HV4D::HV4DDUALITY::CHV4DSYSFILE const&);

		bool operator != (HV4D::HV4DWINRT::HV4D_SYSTEM_FILE_DESC const&);

		bool operator != (HV4D::HV4DDUALITY::CHV4DSYSFILE const&);

	public:
		HV4D::HV4DFLOW::HV4DRETURN HV4DGetWinrtSystemFile(HV4D::HV4DWINRT::HV4D_SYSTEM_FILE_DESC&);

		HV4D::HV4DFLOW::HV4DRETURN HV4DWritepVoidSystemFile(void*);

		HV4D::HV4DFLOW::HV4DRETURN HV4DReadpVoidSystemFile(void*);

		HV4D::HV4DFLOW::HV4DRETURN HV4DReadNodeSystemFile(pugi::xml_node const&);

		HV4D::HV4DFLOW::HV4DRETURN HV4DWriteNodeSystemFile(pugi::xml_node const&);

		HV4D::HV4DFLOW::HV4DRETURN HV4DValidateNodeSystemFile(pugi::xml_node const&, hstring const&);

	private:
		HV4D::HV4DFLOW::HV4DRETURN HV4DReadHVID(pugi::xml_node const&);

		HV4D::HV4DFLOW::HV4DRETURN HV4DWriteHVID(pugi::xml_node const&);

		HV4D::HV4DDUALITY::CHV4DHVID HVID{};

		HV4D::HV4DFLOW::HV4DRETURN HV4DReadMMM(pugi::xml_node const&);

		HV4D::HV4DFLOW::HV4DRETURN HV4DWriteMMM(pugi::xml_node const&);

		HV4D::HV4DDUALITY::CHV4DMMM	MMM{};

		HV4D::HV4DFLOW::HV4DRETURN HV4DReadMMDDYYYY(pugi::xml_node const&);

		HV4D::HV4DFLOW::HV4DRETURN HV4DWriteMMDDYYYY(pugi::xml_node const&);

		HV4D::HV4DDUALITY::CHV4DMMDDYYYY MMDDYYYY{};

		HV4D::HV4DFLOW::HV4DRETURN HV4DReadHHMMSS(pugi::xml_node const&);

		HV4D::HV4DFLOW::HV4DRETURN HV4DWriteHHMMSS(pugi::xml_node const&);

		HV4D::HV4DDUALITY::CHV4DHHMMSS HHMMSS{};

		HV4D::HV4DFLOW::HV4DRETURN HV4DReadNAME(pugi::xml_node const&);

		HV4D::HV4DFLOW::HV4DRETURN HV4DWriteNAME(pugi::xml_node const&);

		HV4D::HV4DDUALITY::CHV4DMAXPATH	NAME{};

		HV4D::HV4DFLOW::HV4DRETURN HV4DReadFILEPATH(pugi::xml_node const&);

		HV4D::HV4DFLOW::HV4DRETURN HV4DWriteFILEPATH(pugi::xml_node const&);

		HV4D::HV4DFLOW::HV4DRETURN HV4DReadFILE(pugi::xml_node const&);

		HV4D::HV4DFLOW::HV4DRETURN HV4DWriteFILE(pugi::xml_node const&);

		HV4D::HV4DDUALITY::CHV4DABS	FILE{};

		HV4D::HV4DFLOW::HV4DRETURN HV4DReadOFFSET(pugi::xml_node const&);

		HV4D::HV4DFLOW::HV4DRETURN HV4DWriteOFFSET(pugi::xml_node const&);

		HV4D::HV4DDUALITY::CHV4DNUMERIC OFFSET{};

		HV4D::HV4DFLOW::HV4DRETURN HV4DReadOFFSETSZ(pugi::xml_node const&);

		HV4D::HV4DFLOW::HV4DRETURN HV4DWriteOFFSETSZ(pugi::xml_node const&);

		HV4D::HV4DDUALITY::CHV4DNUMERIC OFFSETSZ{};

		HV4D::HV4DFLOW::HV4DRETURN HV4DReadFILEOFFSET(pugi::xml_node const&);

		HV4D::HV4DFLOW::HV4DRETURN HV4DWriteFILEOFFSET(pugi::xml_node const&);

		HV4D::HV4DDUALITY::CHV4DNUMERIC FILEOFFSET{};

		HV4D::HV4DFLOW::HV4DRETURN HV4DReadFILEOFFSETSZ(pugi::xml_node const&);

		HV4D::HV4DFLOW::HV4DRETURN HV4DWriteFILEOFFSETSZ(pugi::xml_node const&);

		HV4D::HV4DDUALITY::CHV4DNUMERIC FILEOFFSETSZ{};

	};

}