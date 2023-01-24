module;



module CHV4DTBASIC:CHV4DTEXTBLOBW;

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

		for (std::wstring::const_iterator itt = s.begin(); itt != s.end(); itt++)
		{
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

	CHV4DTEXTBLOBW::operator std::wstring() const
	{
		return tagTEXTBLOBW;

	}

	CHV4DTEXTBLOBW CHV4DTEXTBLOBW::operator()(std::uint64_t const& i, std::uint64_t const& l)
	{
		return tagTEXTBLOBW.substr(i, l);

	}

	bool CHV4DTEXTBLOBW::HV4DHasSymbols()
	{
		std::vector<wchar_t>::const_iterator citt{};

		for (std::wstring::const_iterator itt = tagTEXTBLOBW.begin(); itt != tagTEXTBLOBW.end(); itt++)
		{
			citt = std::find(HV4DSymbolW.begin(), HV4DSymbolW.end(), *itt);

			if (citt != HV4DSymbolW.end())
			{
				return true;

			}

		}

		return false;
	}

}