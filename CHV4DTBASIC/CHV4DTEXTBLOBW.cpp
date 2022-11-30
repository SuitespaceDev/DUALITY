#include "pch.h"

#include "CHV4DTEXTBLOBW.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DTEXTBLOBW::CHV4DTEXTBLOBW()
	{

		return;

	}

	CHV4DTEXTBLOBW::CHV4DTEXTBLOBW(std::wstring const& s)
	{
		try
		{
			HV4DIsValidTEXTBLOBW(s);

		}
		catch (std::domain_error)
		{
			tagTEXTBLOBW.clear();

			throw std::invalid_argument("");

		}

		tagTEXTBLOBW = s;

		return;

	}

	CHV4DTEXTBLOBW::CHV4DTEXTBLOBW(CHV4DTEXTBLOBW const& e)
	{
		tagTEXTBLOBW = e.tagTEXTBLOBW;

		return;

	}

	void CHV4DTEXTBLOBW::HV4DIsValidTEXTBLOBW(std::wstring const& s) const
	{
		std::vector<wchar_t>::const_iterator citt{};

		for (std::wstring::const_iterator itt = tagTEXTBLOBW.begin(); itt != tagTEXTBLOBW.end(); itt++)
		{
			uint32_t index{};

			citt = std::find(HV4DKeyMapW.begin(), HV4DKeyMapW.end(), *itt);

			if (citt == HV4DKeyMapW.end())
			{
				throw std::domain_error("");

			}

		}

		return;

	}

	void CHV4DTEXTBLOBW::operator = (std::wstring const& s)
	{
		try
		{
			HV4DIsValidTEXTBLOBW(s);

		}
		catch (std::domain_error)
		{
			tagTEXTBLOBW.clear();

			throw std::invalid_argument("");

		}

		tagTEXTBLOBW = s;

		return;

	}

	void CHV4DTEXTBLOBW::operator = (CHV4DTEXTBLOBW const& e)
	{
		tagTEXTBLOBW = e.tagTEXTBLOBW;

		return;

	}

	bool CHV4DTEXTBLOBW::operator == (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidTEXTBLOBW(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagTEXTBLOBW.compare(s) == 0;

	}

	bool CHV4DTEXTBLOBW::operator == (CHV4DTEXTBLOBW const& e) const
	{
		return tagTEXTBLOBW.compare(e.tagTEXTBLOBW) == 0;

	}

	void CHV4DTEXTBLOBW::HV4DGetStringTEXTBLOBW(std::wstring& o) const
	{
		o = tagTEXTBLOBW;

		return;

	}

	void CHV4DTEXTBLOBW::HV4DSubStr(uint64_t const& i, uint64_t const& l, CHV4DTEXTBLOBW& o)
	{
		o = tagTEXTBLOBW.substr(i, l);

		return;

	}

	bool CHV4DTEXTBLOBW::HV4DHasSymbols()
	{
		std::vector<wchar_t>::const_iterator citt{};

		for (std::wstring::const_iterator itt = tagTEXTBLOBW.begin(); itt != tagTEXTBLOBW.end(); itt++)
		{
			uint32_t index{};

			citt = std::find(HV4DSymbolW.begin(), HV4DSymbolW.end(), *itt);

			if (citt != HV4DSymbolW.end())
			{
				return true;

			}

		}

		return false;
	}

}