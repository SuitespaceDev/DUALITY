#pragma once

#include <string>

#include "winrt/HV4D.h"

namespace winrt::HV4D::HV4DDRIVEIO
{
    class HV4DVOL
    {
    public:
        HV4DVOL() = default;

    private:
        HV4D::HV4DRETURN HV4DMountVolume(const HV4DHVID& n);

    };

}
