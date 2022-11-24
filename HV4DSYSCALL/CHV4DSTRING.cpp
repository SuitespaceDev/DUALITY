#include "pch.h"

#include "CHV4DSTRING.h"

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DSYSCALL
{
	HV4DRETURN HV4DSubStr(hstring const& e, uint32_t const& i, uint32_t const& l, hstring& o)
	{
		hstring str{ e };

		if ((i > str.size()) || ((i + l) > str.size()))
		{
			return HV4DRETURN::HV4D_FALSE;

		}

		hstring::const_iterator itt{};

		for (itt = &str[i]; itt != &str[(i + l)]; itt++)
		{
			o = o + *itt;

		}

		if (o.size() == (i + l))
		{
			o = L"";

			return HV4DRETURN::HV4D_FALSE;

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DNoSymbols(hstring const& s, hstring& o)
	{
		std::vector<wchar_t>::const_iterator citt{};

		for (hstring::const_iterator itt = s.begin(); itt != s.end(); itt++)
		{
			citt = std::find(HV4DSymbolW()->begin(), HV4DSymbolW()->end(), *itt);

			if (citt == HV4DSymbolW()->end())
			{
				o = o + *itt;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

	HV4DRETURN HV4DHasSymbols(hstring const& s)
	{
		std::vector<wchar_t>::const_iterator citt{};

		for (hstring::const_iterator itt = s.begin(); itt != s.end(); itt++)
		{
			citt = std::find(HV4DSymbolW()->begin(), HV4DSymbolW()->end(), *itt);

			if (citt == HV4DSymbolW()->end())
			{
				return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

			}

		}

		return HV4DRETURN::HV4D_FALSE;

	}

	HV4DRETURN HV4DNoEscape(hstring const& s, hstring& o)
	{
		hstring str{ s };

		if (str.size() == 0)
		{
			return HV4DRETURN::HV4D_FALSE;

		}

		uint32_t length = str.size();

		for (uint32_t i = 1; i < (length - 1); i++)
		{
			o = o + str[i];

			if ((str[i] == '\u005C') && ((str[(i - 1)] != '\u005C') && (str[(i + 1)] != '\u005C')))
			{
				hstring pre{}, suff{};

				HV4DSubStr(str, 0, (i + 1), pre);

				HV4DSubStr(str, (i + 1), (length - (i + 1)), suff);

				str = pre + '\u005C' + suff;

				length += 1;

			}

			if ((str[i] == '\u005C') && ((str[(i - 1)] == '\u005C') && (str[(i + 1)] == '\u005C')))
			{
				hstring pre{}, suff{};

				HV4DSubStr(str, 0, (i + 1), pre);

				HV4DSubStr(str, (i + 2), (length - (i + 2)), suff);

				str = pre + suff;

				length -= 1;

			}

		}

		return HV4DRETURN::HV4D_OPERATION_SUCCEEDED;

	}

}