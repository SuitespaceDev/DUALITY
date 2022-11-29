#include "pch.h"

#include "CHV4DABS.h"

namespace HV4D::CHV4DTBASIC
{
	CHV4DABS::CHV4DABS()
	{
		memset(tagPATH, '\0', sizeof(tagPATH));

		memset(tagFILE, '\0', sizeof(tagFILE));

		return;

	}

	CHV4DABS::CHV4DABS(std::wstring_view const& p, std::wstring_view const& f)
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
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw std::invalid_argument;

			}

		}

		return;

	}

	CHV4DABS::CHV4DABS(ABS const& e)
	{
		for (uint32_t i = 0; i < e.p.size(); i++)
		{
			tagPATH[i] = e.p[i];

		}

		for (uint32_t i = 0; i < e.f.size(); i++)
		{
			tagFILE[i] = e.f[i];

		}

		try
		{
			HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw thrown;

			}

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
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw thrown;

			}

		}

		return;

	}

	void CHV4DABS::HV4DIsValidABS() const
	{
		if (tagPATH[0] == '\0')
		{
			throw std::underflow_error;

		}

		if (tagFILE[0] == '\0')
		{
			throw std::underflow_error;

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagPATH)
		{
			citt = std::find(HV4DSymbolW()->begin(), HV4DSymbolW()->end(), itt);

			if (citt != HV4DSymbolW()->end())
			{
				throw std::domain_error;

			}

		}

		for (wchar_t itt : tagFILE)
		{
			citt = std::find(HV4DSymbolW()->begin(), HV4DSymbolW()->end(), itt);

			if (citt != HV4DSymbolW()->end())
			{
				throw std::domain_error;

			}

		}

		for (uint32_t index = 1; index < 255; index++)
		{
			if (tagPATH[index] == '\0') break;

			if (tagPATH[index] == '\u005C' &&
				(((tagPATH[index - 1] != '\u005C') && (tagPATH[index + 1] != '\u005C')) ||
					((tagPATH[index - 1] == '\u005C') && (tagPATH[index + 1] == '\u005C'))))
			{
				throw std::domain_error;

			}

		}

		for (uint32_t index = 1; index < 255; index++)
		{
			if (tagFILE[index] == '\0') break;

			if (tagFILE[index] == '\u005C' &&
				(((tagFILE[index - 1] != '\u005C') && (tagFILE[index + 1] != '\u005C')) ||
					((tagFILE[index - 1] == '\u005C') && (tagFILE[index + 1] == '\u005C'))))
			{
				throw std::domain_error;

			}

		}

		return;

	}

	void CHV4DABS::operator = (ABS const& e)
	{
		for (uint32_t i = 0; i < e.p.size(); i++)
		{
			tagPATH[i] = e.p[i];

		}

		for (uint32_t i = 0; i < e.f.size(); i++)
		{
			tagFILE[i] = e.f[i];

		}

		try
		{
			HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw std::invalid_argument;

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
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw std::invalid_argument;

			}

		}

		return;

	}

	bool CHV4DABS::operator == (ABS const& e) const
	{
		CHV4DABS abs{ e };

		try
		{
			abs.HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return *this == abs;

	}

	bool CHV4DABS::operator == (CHV4DABS const& e) const
	{
		CHV4DABS abs{ e };

		try
		{
			abs.HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		int ret = memcmp(tagPATH, abs.tagPATH, sizeof(tagPATH));
		
		if(ret != 0) return false;

		ret = memcmp(tagFILE, abs.tagFILE, sizeof(tagFILE));

		if (ret != 0) return false;

		return true;

	}

	bool CHV4DABS::operator != (ABS const& e) const
	{
		CHV4DABS abs{ e };

		try
		{
			abs.HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return !(*this == abs);

	}

	bool CHV4DABS::operator != (CHV4DABS const& e) const
	{
		CHV4DABS abs{ e };

		try
		{
			abs.HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == std::domain_error)
			{
				throw std::invalid_argument;

			}

		}

		return !(*this == abs);

	}

	void CHV4DABS::HV4DGetHstringABS(std::wstring_view& p, std::wstring_view& f) const
	{
		p = std::wstring_view{ tagPATH };
				   
		f = std::wstring_view{ tagFILE };

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

	void CHV4DABS::HV4DGetWinrtABS(ABS& o) const
	{
		o.p = std::wstring_view{ tagPATH };

		o.f = std::wstring_view{ tagFILE };

		return;

	}

}