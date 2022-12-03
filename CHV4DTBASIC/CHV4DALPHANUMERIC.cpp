#include "pch.h"

#include "CHV4DALPHANUMERIC.h"

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