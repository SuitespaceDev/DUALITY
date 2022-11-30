#pragma once

#include <vector>

#include <string>

#include <stdexcept>

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DNUMERIC
	{
	public:
		CHV4DNUMERIC();

		CHV4DNUMERIC(std::wstring const&);

		CHV4DNUMERIC(uint64_t const&);

		CHV4DNUMERIC(CHV4DNUMERIC const&);

	private:
		uint64_t HV4DStringToInt(std::wstring const&) const;

	public:
		void operator = (std::wstring const&);

		void operator = (uint64_t const&);

		void operator = (CHV4DNUMERIC const&);

		bool operator == (std::wstring const&) const;

		bool operator == (uint64_t const&) const;

		bool operator == (CHV4DNUMERIC const&) const;

		bool operator != (std::wstring const&) const;

		bool operator != (uint64_t const&) const;

		bool operator != (CHV4DNUMERIC const&) const;

		bool operator < (std::wstring const&) const;

		bool operator < (uint64_t const&) const;

		bool operator < (CHV4DNUMERIC const&) const;

		bool operator > (std::wstring const&) const;

		bool operator > (uint64_t const&) const;

		bool operator > (CHV4DNUMERIC const&) const;

	public:
		void HV4DGetStringNUMERIC(std::wstring&) const;

		void HV4DGetNUMERIC(uint64_t&) const;

	private:
		uint64_t tagNUM;

	private:
		const std::vector<wchar_t> HV4DNumericW{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	};

}