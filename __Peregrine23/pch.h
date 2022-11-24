﻿#pragma once

#include <windows.h>
#include <unknwn.h>
#include <inspectable.h>
#include <restrictederrorinfo.h>
#include <processthreadsapi.h>
#include <hstring.h>

#include <string>
#include <iostream>
#include <sstream>

#include <chrono>
#include <thread>


#undef GetCurrentTime

#include <winrt/Windows.ApplicationModel.Activation.h>

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Foundation.Numerics.h>

#include <winrt/Windows.Storage.h>

#include <winrt/Windows.UI.Xaml.Interop.h>

#include <winrt/Microsoft.UI.Composition.h>
#include <winrt/Microsoft.UI.Dispatching.h>
#include <winrt/Microsoft.UI.Input.h>
#include <winrt/Microsoft.UI.Interop.h>
#include <winrt/Microsoft.UI.Windowing.h>

#include <winrt/Microsoft.UI.Xaml.h>
#include <winrt/Microsoft.UI.Xaml.Controls.h>
#include <winrt/Microsoft.UI.Xaml.Controls.Primitives.h>
#include <winrt/Microsoft.UI.Xaml.Data.h>
#include <winrt/Microsoft.UI.Xaml.Interop.h>
#include <winrt/Microsoft.UI.Xaml.Input.h>
#include <winrt/Microsoft.UI.Xaml.Markup.h>
#include <winrt/Microsoft.UI.Xaml.Media.h>
#include <winrt/Microsoft.UI.Xaml.Navigation.h>
#include <winrt/Microsoft.UI.Xaml.Shapes.h>

#include <winrt/Microsoft.Windows.AppLifecycle.h>

#include <wil/cppwinrt.h>
#include <wil/cppwinrt_helpers.h>
#include <wil/resource.h>

#include <Microsoft.UI.Xaml.Window.h>
#include <Microsoft.UI.Xaml.Media.dxInterop.h>

#include <dxgi1_6.h>

#include "../DirectX12/d3d12.h"
#include "../DirectX12/d3dx12.h"

#include "../DirectX12/d3d12sdklayers.h"

#include "../DirectX12/d3d12shader.h"

#include <d2d1_3.h>