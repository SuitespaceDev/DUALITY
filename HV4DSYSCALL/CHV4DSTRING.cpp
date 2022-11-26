#include "pch.h"

#include "CHV4DSTRING.h"

namespace winrt::HV4DSYSCALL
{
	HV4D::IHV4DRETURN HV4DSubStr(winrt::hstring const& e, uint32_t const& i, uint32_t const& l, winrt::hstring& o)
	{
		winrt::hstring str{ e };

		if ((i > str.size()) || ((i + l) > str.size()))
		{
			return HV4D::HV4D_FALSE{};

		}

		winrt::hstring::const_iterator itt{};

		for (itt = &str[i]; itt != &str[(i + l)]; itt++)
		{
			o = o + *itt;

		}

		if (o.size() == (i + l))
		{
			o = L"";

			return HV4D::HV4D_FALSE{};

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DNoSymbols(winrt::hstring const& s, winrt::hstring& o)
	{
		std::vector<wchar_t>::const_iterator citt{};

		for (winrt::hstring::const_iterator itt = s.begin(); itt != s.end(); itt++)
		{
			citt = std::find(HV4DSymbolW()->begin(), HV4DSymbolW()->end(), *itt);

			if (citt == HV4DSymbolW()->end())
			{
				o = o + *itt;

			}

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

	HV4D::IHV4DRETURN HV4DHasSymbols(winrt::hstring const& s)
	{
		std::vector<wchar_t>::const_iterator citt{};

		for (winrt::hstring::const_iterator itt = s.begin(); itt != s.end(); itt++)
		{
			citt = std::find(HV4DSymbolW()->begin(), HV4DSymbolW()->end(), *itt);

			if (citt == HV4DSymbolW()->end())
			{
				return HV4D::HV4D_OPERATION_SUCCEEDED{};

			}

		}

		return HV4D::HV4D_FALSE{};

	}

	HV4D::IHV4DRETURN HV4DNoEscape(winrt::hstring const& s, winrt::hstring& o)
	{
		winrt::hstring str{ s };

		if (str.size() == 0)
		{
			return HV4D::HV4D_FALSE{};

		}

		uint32_t length = str.size();

		for (uint32_t i = 1; i < (length - 1); i++)
		{
			o = o + str[i];

			if ((str[i] == '\u005C') && ((str[(i - 1)] != '\u005C') && (str[(i + 1)] != '\u005C')))
			{
				winrt::hstring pre{}, suff{};

				HV4DSubStr(str, 0, (i + 1), pre);

				HV4DSubStr(str, (i + 1), (length - (i + 1)), suff);

				str = pre + '\u005C' + suff;

				length += 1;

			}

			if ((str[i] == '\u005C') && ((str[(i - 1)] == '\u005C') && (str[(i + 1)] == '\u005C')))
			{
				winrt::hstring pre{}, suff{};

				HV4DSubStr(str, 0, (i + 1), pre);

				HV4DSubStr(str, (i + 2), (length - (i + 2)), suff);

				str = pre + suff;

				length -= 1;

			}

		}

		return HV4D::HV4D_OPERATION_SUCCEEDED{};

	}

}