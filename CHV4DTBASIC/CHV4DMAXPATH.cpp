#include "pch.h"

#include "CHV4DMAXPATH.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DMAXPATH::CHV4DMAXPATH()
	{

		return;

	}

	CHV4DMAXPATH::CHV4DMAXPATH(std::wstring const& s)
	{
		tagMAXPATH = s;

		try
		{
			HV4DIsValidMAXPATH();

		}
		catch(std::domain_error)
		{
			tagMAXPATH.clear();

			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DMAXPATH::CHV4DMAXPATH(CHV4DMAXPATH const& e)
	{
		tagMAXPATH = e.tagMAXPATH;

		return;

	}

	void CHV4DMAXPATH::HV4DIsValidMAXPATH()
	{
		if (tagMAXPATH.size() > 256)
		{
			throw std::domain_error("");

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (std::wstring::const_iterator itt = tagMAXPATH.begin(); itt != tagMAXPATH.end(); itt++)
		{
			uint32_t index{};

			citt = std::find(HV4DMaxPathW.begin(), HV4DMaxPathW.end(), *itt);

			if(citt == HV4DMaxPathW.end())
			{
				throw std::domain_error("");

			}

		}

		return;

	}

	void CHV4DMAXPATH::operator = (std::wstring const& s)
	{
		tagMAXPATH = s;

		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (std::domain_error)
		{
			tagMAXPATH.clear();

			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DMAXPATH::operator = (CHV4DMAXPATH const& e)
	{
		tagMAXPATH = e.tagMAXPATH;

		return;

	}

	bool CHV4DMAXPATH::operator == (std::wstring const& s) const
	{
		CHV4DMAXPATH maxpath{};

		try
		{
			maxpath = s;

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return *this == maxpath;

	}

	bool CHV4DMAXPATH::operator == (CHV4DMAXPATH const& e) const
	{
		return tagMAXPATH.compare(e.tagMAXPATH) == 0;

	}

	void CHV4DMAXPATH::HV4DGetStringMAXPATH(std::wstring& o) const
	{
		o = tagMAXPATH;

		return;

	}

	void CHV4DMAXPATH::HV4DSubStr(uint64_t const& i, uint64_t const& l, CHV4DMAXPATH& o)
	{
		o = tagMAXPATH.substr(i, l);

		return;

	}

}