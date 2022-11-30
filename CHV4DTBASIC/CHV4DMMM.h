#pragma once

#include <vector>

#include <string>

#include <stdexcept>

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DMMM
	{
	public:
		CHV4DMMM();

		CHV4DMMM(std::wstring const&);

		CHV4DMMM(CHV4DMMM const&);

	private:
		void HV4DIsValidMMM(std::wstring const&) const;

	public:
		void operator = (std::wstring const&);

		void operator = (CHV4DMMM const&);

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DMMM const&) const;

		bool operator != (std::wstring const&) const;

		bool operator != (CHV4DMMM const&) const;

		bool operator > (std::wstring const&) const;

		bool operator > (CHV4DMMM const&) const;

		bool operator < (std::wstring const&) const;

		bool operator < (CHV4DMMM const&) const;

	public:
		void HV4DGetStringMMM(std::wstring&) const;

		void HV4DGetNumericMMM(uint32_t&, uint32_t&, uint32_t&) const;

	private:
		std::wstring tagMMM{};

	private:
		const std::vector<wchar_t> HV4DNumericW{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	};

}