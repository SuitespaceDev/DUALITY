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

	void CHV4DDATETIME::operator = (std::tuple<std::wstring const&, std::wstring const&> e)
	{
		try
		{
			tagMMDDYYYY = std::get<0>(e);

		}
		catch (std::invalid_argument)
		{
			throw std::invalid_argument("");

		}

		try
		{
			tagHHMMSS = std::get<1>(e);

		}
		catch (std::invalid_argument)
		{
			throw std::invalid_argument("");

		}

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

	CHV4DDATETIME::operator std::tuple<std::wstring, std::wstring>() const
	{
		return std::tuple{ tagMMDDYYYY, tagHHMMSS };

	}

	CHV4DDATETIME::operator std::tuple<CHV4DMMDDYYYY, CHV4DHHMMSS>() const
	{
		return std::tuple{ tagMMDDYYYY, tagHHMMSS };

	}

	void CHV4DDATETIME::operator()()
	{
		try
		{
			tagMMDDYYYY();

		}
		catch (std::exception)
		{
			tagMMDDYYYY = CHV4DMMDDYYYY{};

			tagHHMMSS = CHV4DHHMMSS{};

			throw std::domain_error("");

		}

		try
		{
			tagHHMMSS();

		}
		catch (std::exception)
		{
			tagMMDDYYYY = CHV4DMMDDYYYY{};

			tagHHMMSS = CHV4DHHMMSS{};

			throw std::domain_error("");

		}

	}

}