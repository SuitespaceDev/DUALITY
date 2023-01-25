module;

#include <string>

#include <vector>

#include <stdexcept>

module CHV4DTBASIC:CHV4DMAXPATH;

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
		catch (std::domain_error)
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
		if (tagMAXPATH.size() > 255)
		{
			throw std::domain_error("");

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (std::wstring::const_iterator itt = tagMAXPATH.begin(); itt != tagMAXPATH.end(); itt++)
		{
			citt = std::find(HV4DMaxPathW.begin(), HV4DMaxPathW.end(), *itt);

			if (citt == HV4DMaxPathW.end())
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

	CHV4DMAXPATH::operator std::wstring() const
	{
		return tagMAXPATH;

	}

	std::wstring CHV4DMAXPATH::operator()(std::uint64_t const& i, std::uint64_t const& l) const
	{

		return tagMAXPATH.substr(i, l);

	}

}