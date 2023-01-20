export module CHV4DTEXTBLOBA;

import <vector>;
import <unordered_map>;

import <string>;

import <stdexcept>;

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

		CHV4DTEXTBLOBA operator()(uint64_t const&, uint64_t const&);

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

namespace CHV4D::CHV4DTBASIC
{
	CHV4DTEXTBLOBA::CHV4DTEXTBLOBA()
	{

		return;

	}

	CHV4DTEXTBLOBA::CHV4DTEXTBLOBA(std::wstring const& s)
	{
		try
		{
			HV4DIsValidTEXTBLOBA(s);

		}
		catch (std::domain_error)
		{
			tagTEXTBLOBA.clear();

			throw std::invalid_argument("");

		}

		tagTEXTBLOBA = s;

		return;

	}

	CHV4DTEXTBLOBA::CHV4DTEXTBLOBA(CHV4DTEXTBLOBA const& e)
	{
		tagTEXTBLOBA = e.tagTEXTBLOBA;

		return;

	}

	void CHV4DTEXTBLOBA::HV4DIsValidTEXTBLOBA(std::wstring const& s) const
	{
		std::vector<wchar_t>::const_iterator citt{};

		for (std::wstring::const_iterator itt = tagTEXTBLOBA.begin(); itt != tagTEXTBLOBA.end(); itt++)
		{
			uint32_t index{};

			citt = std::find(HV4DKeyMapW.begin(), HV4DKeyMapW.end(), *itt);

			if (citt == HV4DKeyMapW.end())
			{
				throw std::domain_error("");

			}

		}

		return;

	}

	void CHV4DTEXTBLOBA::operator = (std::wstring const& s)
	{
		try
		{
			HV4DIsValidTEXTBLOBA(s);

		}
		catch (std::domain_error)
		{
			tagTEXTBLOBA.clear();

			throw std::invalid_argument("");

		}

		tagTEXTBLOBA = s;

		return;

	}

	void CHV4DTEXTBLOBA::operator = (CHV4DTEXTBLOBA const& e)
	{
		tagTEXTBLOBA = e.tagTEXTBLOBA;

		return;

	}

	bool CHV4DTEXTBLOBA::operator == (std::wstring const& s) const
	{
		try
		{
			HV4DIsValidTEXTBLOBA(s);

		}
		catch (std::domain_error)
		{
			throw std::invalid_argument("");

		}

		return tagTEXTBLOBA.compare(s) == 0;

	}

	bool CHV4DTEXTBLOBA::operator == (CHV4DTEXTBLOBA const& e) const
	{
		return tagTEXTBLOBA.compare(e.tagTEXTBLOBA) == 0;

	}

	CHV4DTEXTBLOBA::operator std::wstring() const
	{
		return tagTEXTBLOBA;

	}

	CHV4DTEXTBLOBA CHV4DTEXTBLOBA::operator()(uint64_t const& i, uint64_t const& l)
	{
		return tagTEXTBLOBA.substr(i, l);

	}

	bool CHV4DTEXTBLOBA::HV4DHasSymbols()
	{
		std::vector<wchar_t>::const_iterator citt{};

		for (std::wstring::const_iterator itt = tagTEXTBLOBA.begin(); itt != tagTEXTBLOBA.end(); itt++)
		{
			uint32_t index{};

			citt = std::find(HV4DSymbolW.begin(), HV4DSymbolW.end(), *itt);

			if (citt != HV4DSymbolW.end())
			{
				return true;

			}

		}

		return false;
	}

}