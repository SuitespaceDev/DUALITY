#include "pch.h"

#include "CHV4DABS.h"

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4DSYSCALL;

namespace winrt::HV4DABI
{
	CHV4DABS::CHV4DABS()
	{
		memset(tagPATH, '\0', sizeof(tagPATH));

		memset(tagFILE, '\0', sizeof(tagFILE));

		return;

	}

	CHV4DABS::CHV4DABS(hstring const& p, hstring const& f)
	{
		if (p.size() > 256 || f.size() > 256)
		{
			throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		for (uint32_t i = 0; i < 256; i++)
		{
			tagPATH[i] = p[i];

			tagFILE[i] = f[i];

		}

		try
		{
			HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	CHV4DABS::CHV4DABS(ABS const& e)
	{
		for (uint32_t i = 0; i < 256; i++)
		{
			tagPATH[i] = e.p[i];

			tagFILE[i] = e.f[i];

		}

		try
		{
			HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
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
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw thrown;

			}

		}

		return;

	}

	void CHV4DABS::HV4DIsValidABS()
	{
		if (tagPATH[0] == '\0')
		{
			memset(tagPATH, '\0', sizeof(tagPATH));

			throw HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		if (tagFILE[0] == '\0')
		{
			memset(tagFILE, '\0', sizeof(tagFILE));

			throw HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagPATH)
		{
			citt = std::find(HV4DSymbolW()->begin(), HV4DSymbolW()->end(), itt);

			if (citt != HV4DSymbolW()->end())
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		for (wchar_t itt : tagFILE)
		{
			citt = std::find(HV4DSymbolW()->begin(), HV4DSymbolW()->end(), itt);

			if (citt != HV4DSymbolW()->end())
			{
				memset(tagFILE, '\0', sizeof(tagFILE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		for (uint32_t index = 1; index < 255; index++)
		{
			if (tagPATH[index] == '\0') break;

			if (tagPATH[index] == '\u005C' &&
				(((tagPATH[index - 1] != '\u005C') && (tagPATH[index + 1] != '\u005C')) ||
					((tagPATH[index - 1] == '\u005C') && (tagPATH[index + 1] == '\u005C'))))
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		for (uint32_t index = 1; index < 255; index++)
		{
			if (tagFILE[index] == '\0') break;

			if (tagFILE[index] == '\u005C' &&
				(((tagFILE[index - 1] != '\u005C') && (tagFILE[index + 1] != '\u005C')) ||
					((tagFILE[index - 1] == '\u005C') && (tagFILE[index + 1] == '\u005C'))))
			{
				memset(tagFILE, '\0', sizeof(tagFILE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		throw HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

	}

	void CHV4DABS::operator = (ABS const& e)
	{
		for (uint32_t i = 0; i < 256; i++)
		{
			tagPATH[i] = e.p[i];

			tagFILE[i] = e.f[i];

		}

		try
		{
			HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

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
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	bool CHV4DABS::operator == (ABS const& e)
	{
		try
		{
			HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DABS abs{ e };

		try
		{
			abs.HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this == abs;

	}

	bool CHV4DABS::operator == (CHV4DABS const& e)
	{
		try
		{
			HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DABS abs{ e };

		try
		{
			abs.HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		for (uint32_t i = 0; i < 256; i++)
		{
			if (!(tagPATH == abs.tagPATH && tagFILE == abs.tagFILE))
			{
				return false;

			}

		}

		return true;

	}

	bool CHV4DABS::operator != (ABS const& e)
	{
		try
		{
			HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DABS abs{ e };

		try
		{
			abs.HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == abs);

	}

	bool CHV4DABS::operator != (CHV4DABS const& e)
	{
		try
		{
			HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DABS abs{ e };

		try
		{
			abs.HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == abs);

	}

	HV4DRETURN CHV4DABS::HV4DGetHstringABS(winrt::hstring& p, winrt::hstring& f)
	{
		try
		{
			HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		p = tagPATH + '\0';

		f = tagFILE + '\0';

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DABS::HV4DGetArrayABS(wchar_t p[256], wchar_t f[256])
	{
		try
		{
			HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		p = tagPATH;

		f = tagFILE;

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DABS::HV4DGetWinrtABS(ABS& o)
	{
		try
		{
			HV4DIsValidABS();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagPATH, '\0', sizeof(tagPATH));

				memset(tagFILE, '\0', sizeof(tagFILE));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		o.p = tagPATH + '\0';

		o.f = tagFILE + '\0';

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}