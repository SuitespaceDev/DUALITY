#pragma once

#include <functional>

#include "winrt/HV4D.h"
#include "winrt/HV4D.HV4DSystemModule.h"

namespace winrt::HV4D::HV4DDRIVEIO
{
    HV4D::HV4DRETURN HV4DResizePage(uint64_t const&, uint32_t&, uint64_t&);

    HV4D::HV4DRETURN IndexLambdas();

    HV4D::HV4DRETURN HV4DWriteToPage(const char const*, uint64_t const&, uint32_t const&);

}
