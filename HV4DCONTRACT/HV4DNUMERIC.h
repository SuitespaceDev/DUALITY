#pragma once

#include "winrt/HV4D.h"
#include "winrt/HV4DABI.h"

#include "HV4DNUMERIC.g.h"

namespace winrt::HV4DABI::implementation
{
	struct HV4DNUMERIC : HV4DNUMERICT<HV4DNUMERIC>
	{
	public:
		HV4DNUMERIC();

	public:
		HV4D::HV4DRETURN HV4DFromUInt8(uint8_t const&);

		HV4D::HV4DRETURN HV4DFromUInt16(uint16_t const&);

		HV4D::HV4DRETURN HV4DFromUInt32(uint32_t const&);

		HV4D::HV4DRETURN HV4DFromUInt64(uint64_t const&);

		HV4D::HV4DRETURN HV4DFromHstring(hstring const&);

		HV4D::HV4DRETURN HV4DFromABI(winrt::HV4DABI::NUMERIC const&);

		HV4D::HV4DRETURN HV4DFromWinRT(winrt::HV4DABI::HV4DNUMERIC const&);

		HV4D::HV4DRETURN HV4DToUInt8(uint8_t&);

		HV4D::HV4DRETURN HV4DToUInt16(uint16_t&);

		HV4D::HV4DRETURN HV4DToUInt32(uint32_t&);

		HV4D::HV4DRETURN HV4DToUInt64(uint64_t&);

		HV4D::HV4DRETURN HV4DToHstring(hstring&);

		HV4D::HV4DRETURN HV4DToABI(winrt::HV4DABI::NUMERIC&);

		HV4D::HV4DRETURN HV4DToWinRT(winrt::HV4DABI::HV4DNUMERIC&);

		HV4D::HV4DRETURN HV4DIsEqualUInt8(uint8_t const&);

		HV4D::HV4DRETURN HV4DIsEqualUInt16(uint16_t const&);

		HV4D::HV4DRETURN HV4DIsEqualUInt32(uint32_t const&);

		HV4D::HV4DRETURN HV4DIsEqualUInt64(uint64_t const&);

		HV4D::HV4DRETURN HV4DIsEqualHstring(hstring const&);

		HV4D::HV4DRETURN HV4DIsEqualABI(winrt::HV4DABI::NUMERIC const&);

		HV4D::HV4DRETURN HV4DIsEqualWinRT(winrt::HV4DABI::HV4DNUMERIC const&);

	};

}

namespace winrt::HV4DABI::factory_implementation
{
	struct HV4DNUMERIC : HV4DNUMERICT<HV4DNUMERIC, implementation::HV4DNUMERIC>
	{

	};

}
