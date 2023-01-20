export module CHV4DALPHANUMERIC;

import <vector>;

import <string>;

import <stdexcept>;

export namespace CHV4D::CHV4DTBASIC
{
	class CHV4DALPHANUMERIC
	{
	public:
		CHV4DALPHANUMERIC();

		CHV4DALPHANUMERIC(std::wstring const&);

		CHV4DALPHANUMERIC(CHV4DALPHANUMERIC const&);

	private:
		void HV4DIsValidALPHANUMERIC(std::wstring const&) const;

	public:
		void operator = (std::wstring const&);

		void operator = (CHV4DALPHANUMERIC const&);

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DALPHANUMERIC const&) const;

		operator std::wstring() const;

	private:
		std::wstring tagTEXT{};

	private:
		const std::vector<wchar_t> HV4DAlphaNumericW{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
			'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E',
			'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
			'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	};

}

namespace CHV4D::CHV4DTBASIC
{
	CHV4DALPHANUMERIC::CHV4DALPHANUMERIC()
	{

		return;

	}

	CHV4DALPHANUMERIC::CHV4DALPHANUMERIC(std::wstring const& s)
	{
		try
		{
			HV4DIsValidALPHANUMERIC(s);

		}
		catch (std::domain_error)
		{
			tagTEXT.clear();

			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DALPHANUMERIC::CHV4DALPHANUMERIC(CHV4DALPHANUMERIC const& e)
	{
		tagTEXT = e.tagTEXT;

		return;

	}

	void CHV4DALPHANUMERIC::HV4DIsValidALPHANUMERIC(std::wstring const& s) const
	{
		std::vector<wchar_t>::const_iterator citt{};

		for (std::wstring::const_iterator itt = s.begin(); itt != s.end(); itt++)
		{
			uint32_t index{};

			citt = std::find(HV4DAlphaNumericW.begin(), HV4DAlphaNumericW.end(), *itt);

			if (citt == HV4DAlphaNumericW.end())
			{
				throw std::domain_error("");

			}

		}

		return;

	}

	void CHV4DALPHANUMERIC::operator = (std::wstring const& s)
	{
		try
		{
			HV4DIsValidALPHANUMERIC(s);

		}
		catch (std::domain_error)
		{
			tagTEXT.clear();

			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DALPHANUMERIC::operator = (CHV4DALPHANUMERIC const& e)
	{
		tagTEXT = e.tagTEXT;

		return;

	}

	bool CHV4DALPHANUMERIC::operator == (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidALPHANUMERIC(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagTEXT.compare(s) == 0;

	}

	bool CHV4DALPHANUMERIC::operator == (CHV4DALPHANUMERIC const& e) const
	{
		return tagTEXT.compare(e.tagTEXT) == 0;

	}

	CHV4DALPHANUMERIC::operator std::wstring() const
	{
		return tagTEXT;

	}

}