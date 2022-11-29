#include "pch.h"

#include "CHV4DNUMERIC.h"

namespace CHV4D::CHV4DTBASIC
{
	CHV4DNUMERIC::CHV4DNUMERIC()
	{


		return;

	}

	CHV4DNUMERIC::CHV4DNUMERIC(uint64_t const& n)
	{
		tagNUM = n;

		return;

	}

	CHV4DNUMERIC::CHV4DNUMERIC(CHV4DNUMERIC const& e)
	{
		tagNUM = e.tagNUM;

		return;

	}

	void CHV4DNUMERIC::HV4DIsValidOffset() const
	{
		return;

	}

	void CHV4DNUMERIC::operator = (uint64_t const& e)
	{
		tagNUM = e;

		return;

	}

	void CHV4DNUMERIC::operator = (std::wstring const& e)
	{
		tagNUM = std::stoll(e);

		return;

	}

	void CHV4DNUMERIC::operator = (CHV4DNUMERIC const& e)
	{
		tagNUM = e.tagNUM;

		return;

	}

	bool CHV4DNUMERIC::operator == (uint64_t const& e) const
	{	

		return tagNUM == e;

	}

	bool CHV4DNUMERIC::operator == (std::wstring const& e) const
	{		

		return tagNUM == std::stoll(e);

	}

	bool CHV4DNUMERIC::operator == (CHV4DNUMERIC const& e) const
	{

		return tagNUM == e.tagNUM;

	}

	bool CHV4DNUMERIC::operator != (uint64_t const& e) const
	{

		return tagNUM != e;

	}

	bool CHV4DNUMERIC::operator != (std::wstring const& e) const
	{

		return tagNUM != std::stoll(e);

	}

	bool CHV4DNUMERIC::operator != (CHV4DNUMERIC const& e) const
	{

		return tagNUM != e.tagNUM;

	}

	bool CHV4DNUMERIC::operator < (uint64_t const& e) const
	{

		return tagNUM < e;

	}

	bool CHV4DNUMERIC::operator < (std::wstring const& e) const
	{

		return tagNUM < std::stoull(e);

	}

	bool CHV4DNUMERIC::operator < (CHV4DNUMERIC const& e) const
	{

		return tagNUM < e.tagNUM;

	}

	bool CHV4DNUMERIC::operator > (uint64_t const& e) const
	{

		return tagNUM > e;

	}

	bool CHV4DNUMERIC::operator > (std::wstring const& e) const
	{

		return tagNUM > std::stoull(e);

	}

	bool CHV4DNUMERIC::operator > (CHV4DNUMERIC const& e) const
	{

		return tagNUM > e.tagNUM;

	}

	void CHV4DNUMERIC::HV4DGetStringNUMERIC(std::wstring& o) const
	{
		o = std::to_wstring(tagNUM);

		return;

	}

	void CHV4DNUMERIC::HV4DGetNUMERIC(uint64_t& o) const
	{
		o = tagNUM;

		return;

	}

}