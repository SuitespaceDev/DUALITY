#include "pch.h"

#include "CHV4DHEX.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DHEX::CHV4DHEX()
	{

		return;

	}

	CHV4DHEX::CHV4DHEX(std::wstring const& s)
	{
		try
		{
			HV4DIsValidHEX(s);

		}
		catch (std::domain_error)
		{
			tagHEX.clear();

			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DHEX::CHV4DHEX(CHV4DHEX const& e)
	{
		tagHEX = e.tagHEX;

		return;

	}

	void CHV4DHEX::HV4DIsValidHEX(std::wstring const& s) const
	{
		if (s.size() > 16)
		{
			throw std::domain_error("");

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (std::wstring::const_iterator itt = tagHEX.begin(); itt != tagHEX.end(); itt++)
		{
			uint32_t index{};

			citt = std::find(HV4DHexW.begin(), HV4DHexW.end(), *itt);

			if (citt == HV4DHexW.end())
			{
				throw std::domain_error("");

			}

		}

		return;

	}

	void CHV4DHEX::operator = (std::wstring const& s)
	{
		try
		{
			HV4DIsValidHEX(s);

		}
		catch (std::domain_error)
		{
			tagHEX.clear();

			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DHEX::operator = (CHV4DHEX const& e)
	{
		tagHEX = e.tagHEX;

		return;

	}

	bool CHV4DHEX::operator == (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidHEX(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagHEX.compare(s) == 0;

	}

	bool CHV4DHEX::operator == (CHV4DHEX const& e) const
	{
		return tagHEX.compare(e.tagHEX) == 0;

	}

	void CHV4DHEX::HV4DGetStringHEX(std::wstring& o) const
	{
		o = tagHEX;

		return;

	}

	void CHV4DHEX::HV4DGetNumericHEX(uint64_t& o) const
	{
		o = wcstoull(tagHEX.c_str(), NULL, 16);

		return;

	}

}