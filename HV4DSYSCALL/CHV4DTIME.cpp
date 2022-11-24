#include "pch.h"

#include "CHV4DTIME.h"

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DSYSCALL
{
	const std::vector<hstring>tagHV4DHourW{ L"00", L"01", L"02", L"03", L"04", L"05", L"06", L"07", L"08", L"09", L"10",
		L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23" };

	const std::vector<hstring>* HV4DHourW()
	{
		return &tagHV4DHourW;

	}

	const std::vector<hstring>tagHV4DMinuteW{ L"00", L"01", L"02", L"03", L"04", L"05", L"06", L"07", L"08", L"09", L"10",
		L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"26", L"27", L"28",
		L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44",
		L"45", L"46", L"47", L"48", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59" };

	const std::vector<hstring>* HV4DMinuteW()
	{
		return &tagHV4DMinuteW;

	}

	const std::vector<hstring>tagHV4DSecondW{ L"00", L"01", L"02", L"03", L"04", L"05", L"06", L"07", L"08", L"09", L"10",
		L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"26", L"27", L"28",
		L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44",
		L"45", L"46", L"47", L"48", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59" };

	const std::vector<hstring>* HV4DSecondW()
	{
		return &tagHV4DSecondW;

	}

	const std::unordered_map<hstring, hstring>tagHV4DMMDDW{
		{ L"01"	,L"31" },
		{ L"02"	,L"28" },
		{ L"03"	,L"31" },
		{ L"04"	,L"30" },
		{ L"05"	,L"31" },
		{ L"06"	,L"30" },
		{ L"07"	,L"31" },
		{ L"08"	,L"31" },
		{ L"09"	,L"30" },
		{ L"10"	,L"31" },
		{ L"11"	,L"30" },
		{ L"12" ,L"31" } };

	const std::unordered_map<hstring, hstring>* HV4DMMDDW()
	{
		return &tagHV4DMMDDW;

	}

	const std::vector<hstring>tagHV4DLeapW{ L"2004", L"2008", L"2012", L"2016", L"2020", L"2024", L"2028", L"2032",
		L"2036", L"2040", L"2044", L"2048", L"2052", L"2056", L"2060", L"2064", L"2068", L"2072", L"2076", L"2080",
		L"2084", L"2088", L"2092", L"2096" };

	const std::vector<hstring>* HV4DLeapW()
	{
		return &tagHV4DLeapW;

	}

}