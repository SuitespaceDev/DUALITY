module;

export module CHV4DTBASIC:CHV4DMAXPATH;

export import std;

export namespace CHV4D::CHV4DTBASIC
{
	class CHV4DMAXPATH
	{
	public:
		CHV4DMAXPATH();

		CHV4DMAXPATH(std::wstring const&);

		CHV4DMAXPATH(CHV4DMAXPATH const&);

	private:
		void HV4DIsValidMAXPATH();

	public:
		void operator = (std::wstring const&);

		void operator = (CHV4DMAXPATH const&);

		bool operator == (std::wstring const&) const;

		bool operator == (CHV4DMAXPATH const&) const;

		operator std::wstring() const;

		std::wstring operator()(std::uint64_t const&, std::uint64_t const&) const;

	private:
		std::wstring tagMAXPATH{ '\0' };

	private:
		std::vector<wchar_t> HV4DMaxPathW = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
			'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F',
			'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
			'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '_', '-', ' ', '.', '\u005C' };

	};

}
