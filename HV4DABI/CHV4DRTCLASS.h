#pragma once

#include "CHV4DHVID.h"
#include "CHV4DMMM.h"
#include "CHV4DMAXPATH.h"
#include "CHV4DABS.h"
#include "CHV4DCLASST.h"

#include "winrt/HV4D.h"

#include "../pugixml/pugixml.hpp"

namespace winrt::HV4DABI
{
	class __declspec(dllexport) CHV4DRTCLASS
	{
	public:
		CHV4DRTCLASS();

		CHV4DRTCLASS(
			winrt::HV4DABI::HVID    const&,
			winrt::HV4DABI::MMM     const&,
			winrt::HV4DABI::MAXPATH const&,
			winrt::HV4DABI::ABS     const&,
			winrt::HV4DABI::CLASST  const&);

		CHV4DRTCLASS(
			winrt::HV4DABI::CHV4DHVID    const&,
			winrt::HV4DABI::CHV4DMMM     const&,
			winrt::HV4DABI::CHV4DMAXPATH const&,
			winrt::HV4DABI::CHV4DABS     const&,
			winrt::HV4DABI::CHV4DCLASST  const&);

		CHV4DRTCLASS(winrt::HV4DABI::RTCLASS const&);

		void HV4DIsValidRTCLASS();

		void HV4DClearRTClass();

	public:
		void operator = (winrt::HV4DABI::RTCLASS const&);

		void operator = (winrt::HV4DABI::CHV4DRTCLASS const&);

		bool operator == (winrt::HV4DABI::RTCLASS const&);

		bool operator == (winrt::HV4DABI::CHV4DRTCLASS const&);

		bool operator != (winrt::HV4DABI::RTCLASS const&);

		bool operator != (winrt::HV4DABI::CHV4DRTCLASS const&);

	public:
		HV4D::HV4DRETURN HV4DGetWinrtRTClass(winrt::HV4DABI::RTCLASS&);

		HV4D::HV4DRETURN HV4DReadNodeRTClass(pugi::xml_node const&);

		HV4D::HV4DRETURN HV4DWriteNodeRTClass(pugi::xml_node const&);

	private:
		HV4D::HV4DRETURN HV4DReadHVID(pugi::xml_node const&);

		HV4D::HV4DRETURN HV4DWriteHVID(pugi::xml_node const&);

		HV4DABI::CHV4DHVID tagHVID{};

		HV4D::HV4DRETURN HV4DReadMMM(pugi::xml_node const&);

		HV4D::HV4DRETURN HV4DWriteMMM(pugi::xml_node const&);

		HV4DABI::CHV4DMMM tagMMM{};

		HV4D::HV4DRETURN HV4DReadNAME(pugi::xml_node const&);

		HV4D::HV4DRETURN HV4DWriteNAME(pugi::xml_node const&);

		HV4DABI::CHV4DMAXPATH tagNAME{};

		HV4D::HV4DRETURN HV4DReadDLLPath(pugi::xml_node const&);

		HV4D::HV4DRETURN HV4DWriteDLLPath(pugi::xml_node const&);

		HV4D::HV4DRETURN HV4DReadDLL(pugi::xml_node const&);

		HV4D::HV4DRETURN HV4DWriteDLL(pugi::xml_node const&);

		HV4DABI::CHV4DABS tagDLL{};

		HV4D::HV4DRETURN HV4DReadRTCNS(pugi::xml_node const&);

		HV4D::HV4DRETURN HV4DWriteRTCNS(pugi::xml_node const&);

		HV4D::HV4DRETURN HV4DReadRTC(pugi::xml_node const&);

		HV4D::HV4DRETURN HV4DWriteRTC(pugi::xml_node const&);

		HV4DABI::CHV4DCLASST tagCLASST{};

	};

}