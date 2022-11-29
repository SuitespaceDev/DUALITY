#pragma once

#include <Objbase.h>

#include <string>

namespace CHV4D::CHV4DSYSCALL
{
    void HV4DEncryptVolumeName(GUID const&, std::wstring const&, GUID&);

    void HV4DDecryptVolumeName(GUID const&, std::wstring const&, GUID&);

}
