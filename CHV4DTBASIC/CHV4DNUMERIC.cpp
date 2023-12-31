module;

#include <string>

#include <cstdint>

#include <vector>

#include <climits>

#include <stdexcept>

module CHV4DTBASIC:CHV4DNUMERIC;

namespace CHV4D::CHV4DTBASIC
{
	CHV4DNUMERIC::CHV4DNUMERIC()
	{


		return;

	}

	CHV4DNUMERIC::CHV4DNUMERIC(std::uint64_t const& n)
	{
		tagNUM = n;

		return;

	}

	CHV4DNUMERIC::CHV4DNUMERIC(std::wstring const& s)
	{
		try
		{
			tagNUM = HV4DStringToInt(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DNUMERIC::CHV4DNUMERIC(CHV4DNUMERIC const& e)
	{
		tagNUM = e.tagNUM;

		return;

	}

	std::uint64_t CHV4DNUMERIC::HV4DStringToInt(std::wstring const& s) const
	{
		std::uint64_t num{};

		std::wstring::const_iterator citt{};

		for (wchar_t itt : s)
		{
			citt = std::find(s.begin(), s.end(), itt);

			if (citt == s.end())
			{
				throw std::domain_error("");

			}

		}

		num = std::wcstoull(&s[0], nullptr, 10);

		if (num == ULLONG_MAX)
		{
			num = 0;

			throw std::invalid_argument("");

		}

		return num;

	}

	void CHV4DNUMERIC::operator = (std::wstring const& s)
	{
		try
		{
			tagNUM = HV4DStringToInt(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DNUMERIC::operator = (std::uint64_t const& e)
	{
		tagNUM = e;

		return;

	}

	void CHV4DNUMERIC::operator = (CHV4DNUMERIC const& e)
	{
		tagNUM = e.tagNUM;

		return;

	}

	bool CHV4DNUMERIC::operator == (std::wstring const& s) const
	{
		std::uint64_t num{};

		try
		{
			num = HV4DStringToInt(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagNUM == num;

	}

	bool CHV4DNUMERIC::operator == (std::uint64_t const& e) const
	{

		return tagNUM == e;

	}

	bool CHV4DNUMERIC::operator == (CHV4DNUMERIC const& e) const
	{

		return tagNUM == e.tagNUM;

	}

	bool CHV4DNUMERIC::operator != (std::wstring const& s) const
	{
		std::uint64_t num{};

		try
		{
			num = HV4DStringToInt(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagNUM != num;

	}

	bool CHV4DNUMERIC::operator != (std::uint64_t const& e) const
	{

		return tagNUM != e;

	}

	bool CHV4DNUMERIC::operator != (CHV4DNUMERIC const& e) const
	{

		return tagNUM != e.tagNUM;

	}

	bool CHV4DNUMERIC::operator < (std::wstring const& s) const
	{
		std::uint64_t num{};

		try
		{
			num = HV4DStringToInt(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagNUM < num;

	}

	bool CHV4DNUMERIC::operator < (std::uint64_t const& e) const
	{

		return tagNUM < e;

	}

	bool CHV4DNUMERIC::operator < (CHV4DNUMERIC const& e) const
	{

		return tagNUM < e.tagNUM;

	}

	bool CHV4DNUMERIC::operator > (std::wstring const& s) const
	{
		std::uint64_t num{};

		try
		{
			num = HV4DStringToInt(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagNUM > num;

	}

	bool CHV4DNUMERIC::operator > (std::uint64_t const& e) const
	{

		return tagNUM > e;

	}

	bool CHV4DNUMERIC::operator > (CHV4DNUMERIC const& e) const
	{

		return tagNUM > e.tagNUM;

	}

	CHV4DNUMERIC::operator std::wstring() const
	{
		return std::to_wstring(tagNUM);

	}

	CHV4DNUMERIC::operator std::uint64_t() const
	{
		return tagNUM;

	}

}