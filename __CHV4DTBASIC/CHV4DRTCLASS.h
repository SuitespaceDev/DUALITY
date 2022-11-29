#pragma once

#include <string>

#include <stdexcept>

#include "../pugixml/pugixml.hpp"

namespace HV4D::CHV4DTBASIC
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
		void HV4DGetWinrtRTClass(winrt::HV4DABI::RTCLASS&);

		void HV4DReadNodeRTClass(pugi::xml_node const&);

		void HV4DWriteNodeRTClass(pugi::xml_node const&);

	private:
		void HV4DReadHVID(pugi::xml_node const&);

		void HV4DWriteHVID(pugi::xml_node const&);

		HV4DABI::CHV4DHVID tagHVID{};

		void HV4DReadMMM(pugi::xml_node const&);

		void HV4DWriteMMM(pugi::xml_node const&);

		HV4DABI::CHV4DMMM tagMMM{};

		void HV4DReadNAME(pugi::xml_node const&);

		void HV4DWriteNAME(pugi::xml_node const&);

		HV4DABI::CHV4DMAXPATH tagNAME{};

		void HV4DReadDLLPath(pugi::xml_node const&);

		void HV4DWriteDLLPath(pugi::xml_node const&);

		void HV4DReadDLL(pugi::xml_node const&);

		void HV4DWriteDLL(pugi::xml_node const&);

		HV4DABI::CHV4DABS tagDLL{};

		void HV4DReadRTCNS(pugi::xml_node const&);

		void HV4DWriteRTCNS(pugi::xml_node const&);

		void HV4DReadRTC(pugi::xml_node const&);

		void HV4DWriteRTC(pugi::xml_node const&);

		HV4DABI::CHV4DCLASST tagCLASST{};

	};

}