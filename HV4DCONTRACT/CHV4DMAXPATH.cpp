#include "pch.h"

#include "CHV4DMAXPATH.h"

using namespace winrt::HV4D;
using namespace winrt::HV4DSYSCALL;

namespace winrt::HV4DABI
{
	CHV4DMAXPATH::CHV4DMAXPATH()
	{
		memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

		return;

	}

	CHV4DMAXPATH::CHV4DMAXPATH(hstring const& s)
	{
		if (s.size() > 256)
		{
			throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		for (uint32_t i = 0; i < 256; i++)
		{
			tagMAXPATH[i] = s[i];

		}

		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	CHV4DMAXPATH::CHV4DMAXPATH(MAXPATH const& e)
	{
		for (uint32_t i = 0; i < 256; i++)
		{
			tagMAXPATH[i] = e.mp[i];

		}

		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

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
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	void CHV4DMAXPATH::HV4DIsValidMAXPATH()
	{
		if (tagMAXPATH[0] == '\0')
		{
			memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

			throw HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		std::vector<wchar_t>::const_iterator citt{};

		for (wchar_t itt : tagMAXPATH)
		{
			citt = std::find(HV4DSymbolW()->begin(), HV4DSymbolW()->end(), itt);

			if (citt != HV4DSymbolW()->end())
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		for (uint32_t index = 1; index < 255; index++)
		{
			if (tagMAXPATH[index] == '\0') break;

			if (tagMAXPATH[index] == '\u005C' &&
				(((tagMAXPATH[index - 1] != '\u005C') && (tagMAXPATH[index + 1] != '\u005C')) ||
					((tagMAXPATH[index - 1] == '\u005C') && (tagMAXPATH[index + 1] == '\u005C'))))
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		throw HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

	}

	void CHV4DMAXPATH::operator = (hstring const& s)
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
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	void CHV4DMAXPATH::operator = (MAXPATH const& e)
	{
		CHV4DMAXPATH maxpath{ e };

		for (uint32_t i = 0; i < 256; i++)
		{
			tagMAXPATH[i] = maxpath.tagMAXPATH[i];

		}

		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

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
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return;

	}

	bool CHV4DMAXPATH::operator == (hstring const& s)
	{
		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DMAXPATH maxpath{ s };

		try
		{
			maxpath.HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this == maxpath;

	}

	bool CHV4DMAXPATH::operator == (MAXPATH const& e)
	{
		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DMAXPATH maxpath{ e };

		try
		{
			maxpath.HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return *this == maxpath;

	}

	bool CHV4DMAXPATH::operator == (CHV4DMAXPATH const& e)
	{
		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DMAXPATH maxpath{ e };

		try
		{
			maxpath.HV4DIsValidMAXPATH();

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
			if (tagMAXPATH[i] == maxpath.tagMAXPATH[i])
			{
				return false;

			}

		}

		return true;

	}

	bool CHV4DMAXPATH::operator != (hstring const& s)
	{
		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DMAXPATH maxpath{ s };

		try
		{
			maxpath.HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == maxpath);

	}

	bool CHV4DMAXPATH::operator != (MAXPATH const& e)
	{
		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DMAXPATH maxpath{ e };

		try
		{
			maxpath.HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == maxpath);

	}

	bool CHV4DMAXPATH::operator != (CHV4DMAXPATH const& e)
	{
		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		CHV4DMAXPATH maxpath{ e };

		try
		{
			maxpath.HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				throw HV4DRETURN::HV4D_INVALID_ARGUMENT;

			}

		}

		return !(*this == maxpath);

	}

	HV4DRETURN CHV4DMAXPATH::HV4DGetHstringMAXPATH(hstring& o)
	{
		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		o = tagMAXPATH;

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DMAXPATH::HV4DGetArrayMAXPATH(wchar_t a[256])
	{
		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		a = tagMAXPATH;

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN CHV4DMAXPATH::HV4DGetWinrtMAXPATH(MAXPATH& o)
	{
		try
		{
			HV4DIsValidMAXPATH();

		}
		catch (HV4DRETURN thrown)
		{
			if (thrown == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
			{
				memset(tagMAXPATH, '\0', sizeof(tagMAXPATH));

				throw HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		o.mp = tagMAXPATH;

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}