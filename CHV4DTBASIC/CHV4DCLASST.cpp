#include "pch.h"

#include "CHV4DCLASST.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DCLASST::CHV4DCLASST()
	{


		return;

	}

	CHV4DCLASST::CHV4DCLASST(std::wstring const& ns, std::wstring const& c)
	{
		try
		{
			tagNAMESPACE = ns;

		}
		catch (std::invalid_argument)
		{
			tagNAMESPACE = CHV4DMAXPATH{};

			tagWINRTCLASS = CHV4DMAXPATH{};

			throw std::invalid_argument("");

		}

		try
		{
			tagWINRTCLASS = c;

		}
		catch (std::invalid_argument)
		{
			tagNAMESPACE = CHV4DMAXPATH{};

			tagWINRTCLASS = CHV4DMAXPATH{};

			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DCLASST::CHV4DCLASST(CHV4DMAXPATH const& ns, CHV4DMAXPATH const& c)
	{
		tagNAMESPACE = ns;

		tagWINRTCLASS = c;

	}

	CHV4DCLASST::CHV4DCLASST(CHV4DCLASST const& e)
	{
		tagNAMESPACE = e.tagNAMESPACE;

		tagWINRTCLASS = e.tagWINRTCLASS;

		return;

	}

	void CHV4DCLASST::operator = (CHV4DCLASST const& e)
	{
		tagNAMESPACE = e.tagNAMESPACE;

		tagWINRTCLASS = e.tagWINRTCLASS;

		return;

	}

	bool CHV4DCLASST::operator == (CHV4DCLASST const& e) const
	{

		return tagNAMESPACE == e.tagNAMESPACE && tagWINRTCLASS == e.tagWINRTCLASS;

	}

	bool CHV4DCLASST::operator != (CHV4DCLASST const& e) const
	{
		return !(tagNAMESPACE == e.tagNAMESPACE && tagWINRTCLASS == e.tagWINRTCLASS);

	}

	void CHV4DCLASST::HV4DGetStringCLASST(std::wstring& ns, std::wstring& c) const
	{
		tagNAMESPACE.HV4DGetStringMAXPATH(ns);

		tagWINRTCLASS.HV4DGetStringMAXPATH(c);

		return;

	}

	void CHV4DCLASST::HV4DGetHV4DCLASST(CHV4DMAXPATH& ns, CHV4DMAXPATH& c) const
	{
		ns = tagNAMESPACE;
		
		c = tagWINRTCLASS;

		return;

	}

}