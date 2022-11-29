#include "pch.h"

#include "CHV4DMAXPATH.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DMAXPATH::CHV4DMAXPATH()
	{
		memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

		return;

	}

	CHV4DMAXPATH::CHV4DMAXPATH(std::wstring const& s)
	{
		if (s.size() > 256)
		{
			throw std::invalid_argument("");

		}

		for (uint32_t i = 0; i < s.size(); i++)
		{
			tagMAXPATH[i] = s[i];

		}

		try
		{
			HV4DIsValidMAXPATH();

		}
		catch(std::domain_error)
		{
			memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DMAXPATH::CHV4DMAXPATH(CHV4DMAXPATH const& e)
	{
		for (uint32_t i = 0; i < 256; i++)
		{
			tagMAXPATH[i] = e.tagMAXPATH[i];

		}

		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (std::domain_error)
		{
			memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DMAXPATH::HV4DIsValidMAXPATH() const
	{
		if (tagMAXPATH[0] == '\0')
		{
			throw std::underflow_error("");

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagMAXPATH)
		{
			citt = std::find(SYSCALL::HV4DSymbolW()->begin(), SYSCALL::HV4DSymbolW()->end(), itt);

			if (citt != SYSCALL::HV4DSymbolW()->end())
			{
				throw std::domain_error("");

			}

		}

		for (uint32_t index = 1; index < 255; index++)
		{
			if (tagMAXPATH[index] == '\0') break;

			if (tagMAXPATH[index] == '\u005C' &&
				(((tagMAXPATH[index - 1] != '\u005C') && (tagMAXPATH[index + 1] != '\u005C')) ||
					((tagMAXPATH[index - 1] == '\u005C') && (tagMAXPATH[index + 1] == '\u005C'))))
			{
				throw std::domain_error("");

			}

		}

		return;

	}

	void CHV4DMAXPATH::operator = (std::wstring const& s)
	{
		CHV4DMAXPATH maxpath{ s };

		for (uint32_t i = 0; i < 256; i++)
		{
			tagMAXPATH[i] = maxpath.tagMAXPATH[i];

		}

		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (std::domain_error)
		{
			memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DMAXPATH::operator = (CHV4DMAXPATH const& e)
	{
		for (uint32_t i = 0; i < 256; i++)
		{
			tagMAXPATH[i] = e.tagMAXPATH[i];

		}

		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (std::domain_error)
		{
			memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

			throw std::invalid_argument("");

		}

		return;

	}

	bool CHV4DMAXPATH::operator == (std::wstring const& s) const
	{
		CHV4DMAXPATH maxpath{ s };

		try
		{
			maxpath.HV4DIsValidMAXPATH();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return *this == maxpath;

	}

	bool CHV4DMAXPATH::operator == (CHV4DMAXPATH const& e) const
	{
		CHV4DMAXPATH maxpath{ e };

		try
		{
			maxpath.HV4DIsValidMAXPATH();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		int ret = memcmp(tagMAXPATH, maxpath.tagMAXPATH, sizeof(tagMAXPATH));

		if (ret != 0) return false;

		return true;

	}

	bool CHV4DMAXPATH::operator != (std::wstring const& s) const
	{
		CHV4DMAXPATH maxpath{ s };

		try
		{
			maxpath.HV4DIsValidMAXPATH();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return !(*this == maxpath);

	}

	bool CHV4DMAXPATH::operator != (CHV4DMAXPATH const& e) const
	{
		CHV4DMAXPATH maxpath{ e };

		try
		{
			maxpath.HV4DIsValidMAXPATH();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return !(*this == maxpath);

	}

	bool CHV4DMAXPATH::operator < (std::wstring const& s) const
	{
		CHV4DMAXPATH maxpath{ s };

		try
		{
			maxpath.HV4DIsValidMAXPATH();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return *this < maxpath;

	}

	bool CHV4DMAXPATH::operator < (CHV4DMAXPATH const& e) const
	{
		CHV4DMAXPATH maxpath{ e };

		try
		{
			maxpath.HV4DIsValidMAXPATH();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		std::wstring str{ L"\0" };

		HV4DGetStringMAXPATH(str);

		for (uint8_t i = 0; i < str.size(); i++)
		{
			if (SYSCALL::HV4DKeyMapW()->at(str[i]) < SYSCALL::HV4DKeyMapW()->at(e.tagMAXPATH[i]))
			{
				return true;

			}

			if (SYSCALL::HV4DKeyMapW()->at(str[i]) > SYSCALL::HV4DKeyMapW()->at(e.tagMAXPATH[i]))
			{
				return false;

			}

		}

		return false;

	}

	bool CHV4DMAXPATH::operator > (std::wstring const& s) const
	{
		CHV4DMAXPATH maxpath{ s };

		try
		{
			maxpath.HV4DIsValidMAXPATH();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return *this > maxpath;

	}

	bool CHV4DMAXPATH::operator > (CHV4DMAXPATH const& e) const
	{
		CHV4DMAXPATH maxpath{ e };

		try
		{
			maxpath.HV4DIsValidMAXPATH();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		std::wstring str{ L"\0" };

		HV4DGetStringMAXPATH(str);

		for (uint8_t i = 0; i < str.size(); i++)
		{
			if (SYSCALL::HV4DKeyMapW()->at(str[i]) > SYSCALL::HV4DKeyMapW()->at(e.tagMAXPATH[i]))
			{
				return true;

			}

			if (SYSCALL::HV4DKeyMapW()->at(str[i]) < SYSCALL::HV4DKeyMapW()->at(e.tagMAXPATH[i]))
			{
				return false;

			}

		}

		return false;

	}

	void CHV4DMAXPATH::HV4DGetStringMAXPATH(std::wstring& o) const
	{
		o = std::wstring{ tagMAXPATH };

		return;

	}

	void CHV4DMAXPATH::HV4DGetArrayMAXPATH(wchar_t a[256]) const
	{
		for (uint16_t i = 0; i < 256; i++)
		{
			a[i] = tagMAXPATH[i];

		}

		return;

	}

}