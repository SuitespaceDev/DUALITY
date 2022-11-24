#include "pch.h"

#include "Duality.xaml.h"

using namespace winrt::Duality137::implementation;

int activation_count = 1;

winrt::event_token activation_token;

std::vector<winrt::Windows::Foundation::IInspectable> oMessages;

wil::unique_event redirect_event_handle;

winrt::hstring KindString(WAA::ActivationKind kind)
{
    switch (kind)
    {
    case WAA::ActivationKind::Launch: return winrt::hstring(L"Launch");

    case WAA::ActivationKind::File: return winrt::hstring(L"File");

    default: return winrt::hstring(L"Unknown");

    }

}

winrt::hstring KindString(MWA::ExtendedActivationKind extendedKind)
{
    switch (extendedKind)
    {
    case MWA::ExtendedActivationKind::Launch: return winrt::hstring(L"Launch");

    case MWA::ExtendedActivationKind::File: return winrt::hstring(L"File");

    default: return winrt::hstring(L"Unknown");

    }

}

void OutputMessage(const WCHAR* message)
{
    oMessages.push_back(WF::PropertyValue::CreateString(message));

    return;

}

void OutputFormattedMessage(const WCHAR* fmt, ...)
{
    WCHAR message[1025];

    va_list args;

    va_start(args, fmt);

    wvsprintf(message, fmt, args);

    va_end(args);

    OutputMessage(message);

}

std::vector<std::wstring> SplitStrings(winrt::hstring argString)
{
    std::vector<std::wstring> argStrings;

    std::wistringstream iss(argString.c_str());

    for (std::wstring s; iss >> s;)
    {
        argStrings.push_back(s);

    }

    return argStrings;

}

void GetActivationInfo()
{
    MWA::AppActivationArguments args = MWA::AppInstance::GetCurrent().GetActivatedEventArgs();

    MWA::ExtendedActivationKind kind = args.Kind();

    if (kind == MWA::ExtendedActivationKind::Launch)
    {
        auto launchArgs = args.Data().as<WAA::ILaunchActivatedEventArgs>();

        if (launchArgs)
        {
            auto argString = launchArgs.Arguments();

            std::vector<std::wstring> argStrings = SplitStrings(argString);

            OutputMessage(L"Launch activation");

            for (std::wstring const& s : argStrings)
            {
                OutputMessage(s.c_str());

            }

        }

    }
    else if (kind == MWA::ExtendedActivationKind::File)
    {
        WAA::IFileActivatedEventArgs fileArgs = args.Data().as<WAA::IFileActivatedEventArgs>();

        if (fileArgs)
        {
            WS::IStorageItem file{ fileArgs.Files().GetAt(0) };

            OutputFormattedMessage(L"File activation for '%s'", file.Name().c_str());

        }

    }

}

void ReportLaunchArgs(winrt::hstring callLocation, MWA::AppActivationArguments args)
{
    WAA::ILaunchActivatedEventArgs launchArgs = args.Data().as<WAA::ILaunchActivatedEventArgs>();

    if (launchArgs)
    {
        winrt::hstring argString = launchArgs.Arguments();

        std::vector<std::wstring> argStrings = SplitStrings(argString);

        OutputFormattedMessage(L"Launch activation (%s)", callLocation.c_str());

        for (std::wstring const& s : argStrings)
        {
            OutputMessage(s.c_str());

        }

    }

}

void ReportFileArgs(winrt::hstring callLocation, MWA::AppActivationArguments args)
{
    WAA::IFileActivatedEventArgs fileArgs = args.Data().as<WAA::IFileActivatedEventArgs>();

    if (fileArgs)
    {
        WS::IStorageItem file{ fileArgs.Files().GetAt(0) };

        OutputFormattedMessage(L"File activation (%s) for '%s'", callLocation.c_str(), file.Name().c_str());

    }

}

winrt::fire_and_forget Redirect(MWA::AppInstance keyInstance, MWA::AppActivationArguments args)
{
    wil::event_set_scope_exit ensure_signaled = wil::SetEvent_scope_exit(redirect_event_handle.get());

    co_await keyInstance.RedirectActivationToAsync(args);

}

Duality::Duality()
{
    InitializeComponent(); 

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BREAK_ON_UNHANDLED_EXCEPTION
    UnhandledException([this](IInspectable const&, MUX::UnhandledExceptionEventArgs const& e)
        {
            if (IsDebuggerPresent())
            {
                auto errorMessage = e.Message();
                __debugbreak();
            }
        });
#endif
}

void OnActivated(const winrt::Windows::Foundation::IInspectable&, const MWA::AppActivationArguments& args)
{
    int const arraysize = 4096;

    WCHAR szTmp[arraysize];

    size_t cbTmp = arraysize * sizeof(WCHAR);

    MWA::ExtendedActivationKind kind = args.Kind();

    if (kind == MWA::ExtendedActivationKind::File)
    {
        if (StringCbPrintf(szTmp, cbTmp, TEXT("OnActivated, count=%d"), activation_count++) == 0)
        {
            ReportFileArgs(szTmp, args);

        }
        else
        {
            ReportFileArgs(L"OnActivated", args);

        }

    }

}

void Duality::OnLaunched(MUX::LaunchActivatedEventArgs const& args)
{
    WAA::ActivationKind kind = args.UWPLaunchActivatedEventArgs().Kind();

    OutputFormattedMessage(L"OnLaunched: Kind=%s", KindString(kind).c_str());

    auto currentInstance = MWA::AppInstance::GetCurrent();

    if (currentInstance)
    {
        MWA::AppActivationArguments activationArgs = currentInstance.GetActivatedEventArgs();

        if (activationArgs)
        {
            MWA::ExtendedActivationKind extendedKind = activationArgs.Kind();

            OutputFormattedMessage(L"activationArgs.Kind=%s", KindString(extendedKind).c_str());

        }

    }

    WinRTWindow = make<winrt::Duality137::implementation::RootUI>();

    WinRTWindow.Activate();

}
void Duality::Unhandled(WF::IInspectable const&, MUX::UnhandledExceptionEventArgs const&)
{


    return;

}

int __stdcall wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
    void(__stdcall * XamlCheckProcessRequirements)();

    HMODULE module = ::LoadLibrary(L"Microsoft.ui.xaml.dll");

    if (module)
    {
        XamlCheckProcessRequirements = reinterpret_cast<decltype(XamlCheckProcessRequirements)>(GetProcAddress(module, "XamlCheckProcessRequirements"));

        if (XamlCheckProcessRequirements)
        {
            (*XamlCheckProcessRequirements)();

        }

        ::FreeLibrary(module);

    }

    winrt::init_apartment(winrt::apartment_type::single_threaded);

    bool isRedirect = false;

    MWA::AppActivationArguments args = MWA::AppInstance::GetCurrent().GetActivatedEventArgs();

    MWA::ExtendedActivationKind kind = args.Kind();

    if (kind == MWA::ExtendedActivationKind::Launch)
    {
        ReportLaunchArgs(L"main", args);

    }
    else if (kind == MWA::ExtendedActivationKind::File)
    {
        ReportFileArgs(L"main", args);

        try
        {
            WAA::IFileActivatedEventArgs fileArgs = args.Data().as<WAA::IFileActivatedEventArgs>();

            if (fileArgs)
            {
                WS::IStorageItem file{ fileArgs.Files().GetAt(0) };

                MWA::AppInstance keyInstance{ nullptr };
                keyInstance = MWA::AppInstance::FindOrRegisterForKey(file.Name());

                OutputFormattedMessage(L"Registered key = %s", keyInstance.Key().c_str());

                if (keyInstance.IsCurrent())
                {
                    OutputFormattedMessage(
                        L"IsCurrent=true; registered this instance for %s",
                        file.Name().c_str());

                    activation_token = keyInstance.Activated([&keyInstance](const auto& sender, const MWA::AppActivationArguments& args) 
                        { 
                            OnActivated(sender, args); 
                        
                            return;

                        });

                    OutputMessage(L"Connected Activated event");

                }
                else
                {
                    isRedirect = true;

                    redirect_event_handle.create();

                    Redirect(keyInstance, args);

                    DWORD handleIndex = 0;

                    HANDLE rawHandle = redirect_event_handle.get();

                    if (CoWaitForMultipleObjects(CWMO_DEFAULT, INFINITE, 1, &rawHandle, &handleIndex) != 0)
                    {
                        OutputDebugString(L"Error waiting on event");

                    }

                }

            }

        }
        catch (...)
        {
            OutputDebugString(L"Error getting instance information");

        }

    }

    if (!isRedirect)
    {
        MUX::Application::Start([](auto&&)
            {
                winrt::make<::winrt::Duality137::implementation::Duality>();

                return;

            });

    }

    return 0;

}