﻿#pragma once

#define SYSCALL

#pragma hdrstop

#include <windows.h>
#include <unknwn.h>
#include <inspectable.h>

#pragma warning(disable : 4100)

#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

#include <vector>

#undef GetCurrentTime

#include <hstring.h>

#include <wil/cppwinrt.h>
#include <wil/cppwinrt_helpers.h>
#include <wil/resource.h>

#include <winrt/Windows.ApplicationModel.Activation.h>

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>

#include <winrt/Windows.UI.Xaml.Interop.h>

#include <winrt/Microsoft.UI.Composition.h>
#include <winrt/Microsoft.UI.Dispatching.h>

#include <winrt/Microsoft.UI.Xaml.h>
#include <winrt/Microsoft.UI.Xaml.Controls.h>
#include <winrt/Microsoft.UI.Xaml.Controls.Primitives.h>
#include <winrt/Microsoft.UI.Xaml.Data.h>
#include <winrt/Microsoft.UI.Xaml.Interop.h>
#include <winrt/Microsoft.UI.Xaml.Markup.h>
#include <winrt/Microsoft.UI.Xaml.Media.h>
#include <winrt/Microsoft.UI.Xaml.Navigation.h>
#include <winrt/Microsoft.UI.Xaml.Shapes.h>
