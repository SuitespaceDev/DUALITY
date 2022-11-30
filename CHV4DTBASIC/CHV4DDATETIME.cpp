#include "pch.h"

#include "CHV4DDATETIME.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DDATETIME::CHV4DDATETIME()
	{


		return;

	}

	CHV4DDATETIME::CHV4DDATETIME(std::wstring const& d, std::wstring const& t)
	{
		try
		{
			tagMMDDYYYY = d;

		}
		catch (std::invalid_argument)
		{
			throw std::invalid_argument("");

		}

		try
		{
			tagHHMMSS = t;

		}
		catch (std::invalid_argument)
		{
			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DDATETIME::CHV4DDATETIME(CHV4DMMDDYYYY const& d, CHV4DHHMMSS const& t)
	{
		tagMMDDYYYY = d;

		tagHHMMSS = t;

		return;

	}

	CHV4DDATETIME::CHV4DDATETIME(CHV4DDATETIME const& e)
	{
		tagMMDDYYYY = e.tagMMDDYYYY;

		tagHHMMSS = e.tagHHMMSS;

		return;

	}

	void CHV4DDATETIME::operator = (CHV4DDATETIME const& e)
	{
		tagMMDDYYYY = e.tagMMDDYYYY;

		tagHHMMSS = e.tagHHMMSS;

		return;

	}

	bool CHV4DDATETIME::operator == (CHV4DDATETIME const& e) const
	{
		return tagMMDDYYYY == e.tagMMDDYYYY && tagHHMMSS == e.tagHHMMSS;

	}

	bool CHV4DDATETIME::operator != (CHV4DDATETIME const& e) const
	{
		return !(tagMMDDYYYY == e.tagMMDDYYYY && tagHHMMSS == e.tagHHMMSS);

	}

	bool CHV4DDATETIME::operator < (CHV4DDATETIME const& e) const
	{
		if (tagMMDDYYYY > e.tagMMDDYYYY || tagMMDDYYYY == e.tagMMDDYYYY)
		{
			return false;

		}

		if (tagHHMMSS > e.tagHHMMSS || tagHHMMSS == e.tagHHMMSS)
		{
			return false;

		}

		return true;

	}

	bool CHV4DDATETIME::operator > (CHV4DDATETIME const& e) const
	{
		if (tagMMDDYYYY < e.tagMMDDYYYY || tagMMDDYYYY == e.tagMMDDYYYY)
		{
			return false;

		}

		if (tagHHMMSS < e.tagHHMMSS || tagHHMMSS == e.tagHHMMSS)
		{
			return false;

		}

		return true;

	}

	void CHV4DDATETIME::HV4DGetStringDATETIME(std::wstring& d, std::wstring& t) const
	{
		tagMMDDYYYY.HV4DGetStringMMDDYYYY(d);

		tagHHMMSS.HV4DGetStringHHMMSS(t);

		return;

	}

	void CHV4DDATETIME::HV4DGetHV4DDATETIME(CHV4DMMDDYYYY& d, CHV4DHHMMSS& t) const
	{
		d = tagMMDDYYYY;

		t = tagHHMMSS;

		return;

	}

}