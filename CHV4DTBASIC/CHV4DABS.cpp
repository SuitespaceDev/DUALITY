#include "pch.h"

#include "CHV4DABS.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DABS::CHV4DABS()
	{


		return;

	}

	CHV4DABS::CHV4DABS(std::wstring const& p, std::wstring const& f)
	{
		try
		{
			tagPATH = p;

		}
		catch (std::invalid_argument)
		{
			throw std::invalid_argument("");

		}

		try
		{
			tagFILE = f;

		}
		catch (std::invalid_argument)
		{
			throw std::invalid_argument("");

		}

		return;

	}

	CHV4DABS::CHV4DABS(CHV4DMAXPATH const& p, CHV4DMAXPATH const& f)
	{
		tagPATH = p;

		tagFILE = f;

	}

	CHV4DABS::CHV4DABS(CHV4DABS const& e)
	{
		tagPATH = e.tagPATH;

		tagFILE = e.tagFILE;

		return;

	}

	void CHV4DABS::operator = (CHV4DABS const& e)
	{
		tagPATH = e.tagPATH;

		tagFILE = e.tagFILE;

		return;

	}

	bool CHV4DABS::operator == (CHV4DABS const& e) const
	{
		return tagPATH == e.tagPATH && tagFILE == e.tagFILE;

	}

	bool CHV4DABS::operator != (CHV4DABS const& e) const
	{
		return !(tagPATH == e.tagPATH && tagFILE == e.tagFILE);


	}

	void CHV4DABS::HV4DGetStringABS(std::wstring& p, std::wstring& f) const
	{
		tagPATH.HV4DGetStringMAXPATH(p);
				   
		tagFILE.HV4DGetStringMAXPATH(f);

		return;

	}

	void CHV4DABS::HV4DGetMAXPATH(CHV4DMAXPATH& p, CHV4DMAXPATH& f) const
	{
		p = tagPATH;

		f = tagFILE;

		return;

	}

}