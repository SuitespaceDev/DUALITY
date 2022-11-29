#include "pch.h"

#include "CHV4DABS.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DABS::CHV4DABS()
	{
		memset(tagPATH, '\0', sizeof(tagPATH));

		memset(tagFILE, '\0', sizeof(tagFILE));

		return;

	}

	CHV4DABS::CHV4DABS(std::wstring const& p, std::wstring const& f)
	{
		if (p.size() > 256 || f.size() > 256)
		{
			throw std::invalid_argument("");

		}

		for (uint32_t i = 0; i < p.size(); i++)
		{
			tagPATH[i] = p[i];

		}

		for (uint32_t i = 0; i < f.size(); i++)
		{
			tagFILE[i] = f[i];

		}

		try
		{
			HV4DIsValidABS();

		}
		catch (std::domain_error)
		{
			memset(tagPATH, '\0', sizeof(tagPATH));

			memset(tagFILE, '\0', sizeof(tagFILE));
			
			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DABS::CHV4DABS(CHV4DABS const& e)
	{
		for (uint32_t i = 0; i < 256; i++)
		{
			tagPATH[i] = e.tagPATH[i];

			tagFILE[i] = e.tagFILE[i];

		}

		try
		{
			HV4DIsValidABS();

		}
		catch (std::domain_error)
		{
			memset(tagPATH, '\0', sizeof(tagPATH));

			memset(tagFILE, '\0', sizeof(tagFILE));

			throw std::invalid_argument("");

		}

		return;

	}

	void CHV4DABS::HV4DIsValidABS() const
	{
		if (tagPATH[0] == '\0')
		{
			throw std::underflow_error("");

		}

		if (tagFILE[0] == '\0')
		{
			throw std::underflow_error("");

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagPATH)
		{
			citt = std::find(SYSCALL::HV4DSymbolW()->begin(), SYSCALL::HV4DSymbolW()->end(), itt);

			if (citt != SYSCALL::HV4DSymbolW()->end())
			{
				throw std::domain_error("");

			}

		}

		for (wchar_t itt : tagFILE)
		{
			citt = std::find(SYSCALL::HV4DSymbolW()->begin(), SYSCALL::HV4DSymbolW()->end(), itt);

			if (citt != SYSCALL::HV4DSymbolW()->end())
			{
				throw std::domain_error("");

			}

		}

		for (uint32_t index = 1; index < 255; index++)
		{
			if (tagPATH[index] == '\0') break;

			if (tagPATH[index] == '\u005C' &&
				(((tagPATH[index - 1] != '\u005C') && (tagPATH[index + 1] != '\u005C')) ||
					((tagPATH[index - 1] == '\u005C') && (tagPATH[index + 1] == '\u005C'))))
			{
				throw std::domain_error("");

			}

		}

		for (uint32_t index = 1; index < 255; index++)
		{
			if (tagFILE[index] == '\0') break;

			if (tagFILE[index] == '\u005C' &&
				(((tagFILE[index - 1] != '\u005C') && (tagFILE[index + 1] != '\u005C')) ||
					((tagFILE[index - 1] == '\u005C') && (tagFILE[index + 1] == '\u005C'))))
			{
				throw std::domain_error("");

			}

		}

		return;

	}

	void CHV4DABS::operator = (CHV4DABS const& e)
	{
		for (uint32_t i = 0; i < 256; i++)
		{
			tagPATH[i] = e.tagPATH[i];

			tagFILE[i] = e.tagFILE[i];

		}

		try
		{
			HV4DIsValidABS();

		}
		catch (std::domain_error)
		{
			memset(tagPATH, '\0', sizeof(tagPATH));

			memset(tagFILE, '\0', sizeof(tagFILE));

			throw std::invalid_argument("");

		}

		return;

	}

	bool CHV4DABS::operator == (CHV4DABS const& e) const
	{
		CHV4DABS abs{ e };

		try
		{
			abs.HV4DIsValidABS();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		int ret = memcmp(tagPATH, abs.tagPATH, sizeof(tagPATH));
		
		if(ret != 0) return false;

		ret = memcmp(tagFILE, abs.tagFILE, sizeof(tagFILE));

		if (ret != 0) return false;

		return true;

	}

	bool CHV4DABS::operator != (CHV4DABS const& e) const
	{
		CHV4DABS abs{ e };

		try
		{
			abs.HV4DIsValidABS();

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return !(*this == abs);

	}

	void CHV4DABS::HV4DGetStringABS(std::wstring& p, std::wstring& f) const
	{
		p = std::wstring{ tagPATH };
				   
		f = std::wstring{ tagFILE };

		return;

	}

	void CHV4DABS::HV4DGetArrayABS(wchar_t p[256], wchar_t f[256]) const
	{
		for (uint16_t i = 0; i < 256; i++)
		{
			p[i] = tagPATH[i];

			f[i] = tagFILE[i];

		}

		return;

	}

}