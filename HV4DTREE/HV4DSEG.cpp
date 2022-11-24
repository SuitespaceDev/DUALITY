#include "pch.h"

#include "winrt/HV4D.h"
#include "winrt/HV4D.HV4DSystemModule.h"

#pragma data_seg("HV4DSharedMemoryName")
std::unordered_map<winrt::HV4D::HV4DHVID, winrt::HV4D::HV4DHVID> session_page_map{};

#pragma data_seg()
