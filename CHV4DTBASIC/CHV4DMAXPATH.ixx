export module CHV4DMAXPATH;

import <string>;

import <vector>;

import <stdexcept>;

export namespace CHV4D::CHV4DTBASIC
{
	class CHV4DMAXPATH
	{
	public:
		CHV4DMAXPATH();

		CHV4DMAXPATH(std::wstring const&);

		CHV4DMAXPATH(CHV4DMAXPATH const&);

	private:
		void HV4DIsValidMAXPATH();

	public:
		void operator = (std::wstring const&);

		void operator = (CHV4DMAXPATH const&);

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DMAXPATH const&) const;

		operator std::wstring() const;

		std::wstring operator()(uint64_t const&, uint64_t const&) const;

	private:
		std::wstring tagMAXPATH{ '\0' };

	private:
		std::vector<wchar_t> HV4DMaxPathW = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
			'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F',
			'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
			'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '_', '-', ' ', '.', '\u005C' };

	};

}

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
			uint32_t index{};

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

	std::wstring CHV4DMAXPATH::operator()(uint64_t const& i, uint64_t const& l) const
	{

		return tagMAXPATH.substr(i, l);

	}

}