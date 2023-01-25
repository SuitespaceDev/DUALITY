module;

#include <string>

#include <vector>

#include <stdexcept>

export module CHV4DTBASIC:CHV4DTEXTBLOBA;

export namespace CHV4D::CHV4DTBASIC
{
	class CHV4DTEXTBLOBA
	{
	public:
		CHV4DTEXTBLOBA();

		CHV4DTEXTBLOBA(std::wstring const&);

		CHV4DTEXTBLOBA(CHV4DTEXTBLOBA const&);

	private:
		void HV4DIsValidTEXTBLOBA(std::wstring const&) const;

	public:
		void operator = (std::wstring const&);

		void operator = (CHV4DTEXTBLOBA const&);

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DTEXTBLOBA const&) const;

		operator std::wstring() const;

		CHV4DTEXTBLOBA operator()(std::uint64_t const&, std::uint64_t const&);

		bool HV4DHasSymbols();

	private:
		std::wstring tagTEXTBLOBA{};

	private:
		const std::vector<wchar_t> HV4DKeyMapW = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
			'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'y', 'z', 'A', 'B','C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
			'K', 'L', 'M', 'N',	'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3',
			'4', '5', '6', '7', '8', '9', '!', '@', '#', '$', '^', '&', '*', '+', '-' };

		const std::vector<wchar_t> HV4DSymbolW{ '!', '@', '#', '$', '%', '^', '&', '*', '+', '=', '|', '?',
			',', '/', ':', ';', '"', '\u0027' };

	};

}
