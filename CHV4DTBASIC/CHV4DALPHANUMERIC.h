#pragma once

#include <vector>

#include <string>

#include <stdexcept>

namespace CHV4D::CHV4DTBASIC
{
	class CHV4DALPHANUMERIC
	{
	public:
		CHV4DALPHANUMERIC();

		CHV4DALPHANUMERIC(std::wstring const&);

		CHV4DALPHANUMERIC(CHV4DALPHANUMERIC const&);

	private:
		void HV4DIsValidALPHANUMERIC(std::wstring const&) const;

	public:
		void operator = (std::wstring const&);

		void operator = (CHV4DALPHANUMERIC const&);

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DALPHANUMERIC const&) const;

	public:
		void HV4DGetStringALPHANUMERIC(std::wstring&) const;

	private:
		std::wstring tagTEXT{};

	private:
		const std::vector<wchar_t> HV4DAlphaNumericW{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
			'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E',
			'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
			'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	};

}