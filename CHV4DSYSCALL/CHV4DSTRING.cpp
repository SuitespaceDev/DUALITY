#include "pch.h"

#include "CHV4DSTRING.h"

namespace CHV4D::CHV4DSYSCALL
{
	void HV4DSubStr(std::wstring const& e, uint64_t const& i, uint64_t const& l, std::wstring& o)
	{
		std::wstring str{ e };

		uint64_t sz = (uint64_t)str.size();

		uint64_t epos = i + l;

		if ((i > sz) || (epos > sz))
		{
			throw std::invalid_argument("");

		}

		std::wstring::const_iterator itt{};

		std::wstring out{ L"" };

		for (itt = str.begin(); itt != (itt += epos); itt++)
		{
			out = out + itt[0];

		}

		if (out.size() == epos)
		{
			out = L"";

			throw std::invalid_argument("");

		}

		o = out;

		return;

	}

	void HV4DNoSymbols(std::wstring const& s, std::wstring& o)
	{
		std::vector<wchar_t>::const_iterator citt{};

		std::wstring out{ L"" };

		for (std::wstring::const_iterator itt = s.begin(); itt != s.end(); itt++)
		{
			citt = std::find(HV4DSymbolW()->begin(), HV4DSymbolW()->end(), *itt);

			if (citt == HV4DSymbolW()->end())
			{
				out = out + *itt;

			}

		}

		o = out;

		return;

	}

	bool HV4DHasSymbols(std::wstring const& s)
	{
		std::vector<wchar_t>::const_iterator citt{};

		for (std::wstring::const_iterator itt = s.begin(); itt != s.end(); itt++)
		{
			citt = std::find(HV4DSymbolW()->begin(), HV4DSymbolW()->end(), *itt);

			if (citt != HV4DSymbolW()->end())
			{
				return true;

			}

		}

		return false;

	}

	void HV4DNoEscape(std::wstring const& s, std::wstring& o)
	{
		std::wstring str{ s };

		uint64_t sz = (uint64_t)str.size();

		if (sz == 0)
		{
			throw std::invalid_argument("");

		}

		for (uint64_t i = 1; i < (sz - 1); i++)
		{
			if ((str[i] == '\u005C') && ((str[(i - 1)] != '\u005C') && (str[(i + 1)] != '\u005C')))
			{
				std::wstring pre{}, suff{};

				HV4DSubStr(str, 0, (i + 1), pre);

				HV4DSubStr(str, (i + 1), (sz - (i + 1)), suff);

				str = std::wstring{ pre } + std::wstring{ '\u005C' } + std::wstring{ suff };

				sz += 1;

			}

			if ((str[i] == '\u005C') && ((str[(i - 1)] == '\u005C') && (str[(i + 1)] == '\u005C')))
			{
				std::wstring pre{}, suff{};

				HV4DSubStr(str, 0, (i + 1), pre);

				HV4DSubStr(str, (i + 2), (sz - (i + 2)), suff);

				str = std::wstring{ pre } + std::wstring{ suff };

				sz -= 1;

			}

		}

		o = str;

		return;

	}

}