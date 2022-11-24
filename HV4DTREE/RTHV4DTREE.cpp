#include "pch.h"
#include "RTHV4DTREE.h"
#if __has_include("RTHV4DTREE.g.cpp")
#include "RTHV4DTREE.g.cpp"
#endif

using namespace winrt;

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DSYS;

namespace winrt::HV4DTREE::implementation
{
	HV4DRETURN RTHV4DTREE::HV4DCurrentDir(HV4DRELATION const& r, hstring const& d)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;


		return error;

	}

	HV4DRETURN RTHV4DTREE::HV4DDirTree(HV4DRELATION const& r, array_view<hstring>& d)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;


		return error;

	}

	HV4DRETURN RTHV4DTREE::HV4DListFiles(HV4DRELATION const& r, array_view<hstring>& f)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;


		return error;

	}

	HV4DRETURN RTHV4DTREE::HV4DDirChange(HV4DRELATION const& r, hstring const& d)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;


		return error;

	}

	HV4DRETURN RTHV4DTREE::HV4DMkDir(HV4DRELATION const& r, hstring const& d)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;


		return error;

	}

	HV4DRETURN RTHV4DTREE::HV4DDelDir(HV4DRELATION const& r, hstring const& d)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;


		return error;

	}

	HV4DRETURN RTHV4DTREE::HV4DCopyTree(HV4DRELATION const& r, 
		hstring const& p, hstring const& q)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;


		return error;

	}

	HV4DRETURN RTHV4DTREE::HV4DDelTree(HV4DRELATION const& r, hstring const& d)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;


		return error;

	}

	HV4DRETURN RTHV4DTREE::HV4DOpenFile(HV4DRELATION const& r, 
		hstring const& f, IHV4DFILE& e)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;


		return error;

	}

	HV4DRETURN RTHV4DTREE::HV4DCloseFile(boolean const& b, IHV4DFILE const& e)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;


		return error;

	}

	HV4DRETURN RTHV4DTREE::HV4DSaveFile(IHV4DFILE const& e)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;


		return error;

	}

	HV4DRETURN RTHV4DTREE::HV4DMoveFile(HV4DRELATION const& r, hstring const& p, 
		hstring const& q, IHV4DFILE const& e, IHV4DFILE& l)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;


		return error;

	}

	HV4DRETURN RTHV4DTREE::HV4DDelFile(HV4DRELATION const& r,
		IHV4DFILE const& e, hstring const& f)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;


		return error;

	}

	void RTHV4DTREE::HV4DVolumeSize(uint32_t& u, uint32_t& v, uint32_t& s)
	{
		


		return;

	}

}
