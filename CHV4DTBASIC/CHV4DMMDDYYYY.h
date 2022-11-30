#pragma once

#include <vector>
#include <unordered_map>

#include <string>

#include <ctime>

#include <stdexcept>

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DMMDDYYYY
	{
	public:
		CHV4DMMDDYYYY();

		CHV4DMMDDYYYY(std::wstring const&);

		CHV4DMMDDYYYY(CHV4DMMDDYYYY const&);

	private:
		void HV4DIsValidMMDDYYYY(std::wstring const&) const;

	public:
		void operator = (std::wstring const&);

		void operator = (CHV4DMMDDYYYY const&);

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DMMDDYYYY const&) const;

		bool operator != (std::wstring const&) const;

		bool operator != (CHV4DMMDDYYYY const&) const;

		bool operator > (std::wstring const&) const;

		bool operator > (CHV4DMMDDYYYY const&) const;

		bool operator < (std::wstring const&) const;

		bool operator < (CHV4DMMDDYYYY const&) const;

	public:
		void HV4DCurrentMMDDYYYY();

		void HV4DGetStringMMDDYYYY(std::wstring&) const;

		void HV4DGetNumericMMDDYYYY(long&, long&, long&) const;

	private:
		std::wstring tagMMDDYYYY{};

	private:
		const std::vector<wchar_t> HV4DNumericW{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

		const std::unordered_map<std::wstring, std::wstring> HV4DMMDDW{
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

		const std::vector<std::wstring> HV4DLeapW{ L"2004", L"2008", L"2012", L"2016", L"2020", L"2024", L"2028", L"2032",
			L"2036", L"2040", L"2044", L"2048", L"2052", L"2056", L"2060", L"2064", L"2068", L"2072", L"2076", L"2080",
			L"2084", L"2088", L"2092", L"2096" };

	};

}