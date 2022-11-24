#include "pch.h"
#include "RTHV4DCACHE.h"
#if __has_include("RTHV4DCACHE.g.cpp")
#include "RTHV4DCACHE.g.cpp"
#endif

using namespace std;

using namespace winrt;

using namespace winrt::Windows::UI::Popups;

using namespace winrt::Microsoft::UI::Xaml;

using namespace winrt::HV4D;
using namespace winrt::HV4D::HV4DSYS;

using namespace winrt::HV4D::HV4DDUALITY;

namespace winrt::HV4DCACHE::implementation
{
	RTHV4DCACHE::RTHV4DCACHE()
	{
		$HV4DMODULES.resize(HV4DMapModuleByID()->size(), IHV4DMODULE{});

		return;

	}

	HV4DRETURN RTHV4DCACHE::HV4DLoadSystemCache(IHV4DBAT e)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;

		error = HV4DIsConfiguredSystemCache();

		if (error == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (error == HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
		{
			return HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

		}

		try
		{
			$HV4DBAT = e;

		}
		catch (HV4DRETURN thrown)
		{
			HV4DClearSystemCache();

			return thrown;

		}

		std::unordered_map<HV4D_SYSTEM_MODULE_ID, uint32_t>::const_iterator citt{};

		for (citt = HV4DMapModuleByID()->begin(); citt != HV4DMapModuleByID()->end(); citt++)
		{
			uint32_t index{ 0 };

			try
			{
				index = HV4DMapModuleByID()->at(citt->first);

			}
			catch (std::out_of_range)
			{
				HV4DClearSystemCache();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

			Windows::Foundation::IActivationFactory ActivationFactory{};

			HV4D_RTCLASS_DESC WinrtRTClassDesc{};

			error = $HV4DBAT.HV4DGetModuleDesc(citt->first, WinrtRTClassDesc);

			if (error != HV4DRETURN::HV4D_TRUE)
			{
				HV4DClearSystemCache();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

			if (CHV4DRTCLASS{} == WinrtRTClassDesc)
			{
				HV4DClearSystemCache();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

			error = HV4DGetActivationFactory(
				WinrtRTClassDesc.dll.p + WinrtRTClassDesc.dll.f,
				WinrtRTClassDesc.rtc.ns + WinrtRTClassDesc.rtc.c,
				ActivationFactory);

			if (error != HV4DRETURN::HV4D_TRUE)
			{
				HV4DClearSystemCache();

				return error;

			}

			if (!ActivationFactory)
			{
				HV4DClearSystemCache();

				return error;

			}
			
			$HV4DMODULES.at(index) = ActivationFactory.ActivateInstance<IHV4DMODULE>();

			if (!$HV4DMODULES.at(index))
			{
				HV4DClearSystemCache();

				return error;

			}

		}

		STARTUPINFOW StartupInfo{};
		StartupInfo.cb = sizeof(STARTUPINFOA);
		StartupInfo.lpReserved = NULL;
		StartupInfo.lpDesktop = NULL;
		StartupInfo.lpTitle = NULL;
		StartupInfo.dwX = 100;
		StartupInfo.dwY = 100;
		StartupInfo.dwXSize = 100;
		StartupInfo.dwYSize = 100;
		StartupInfo.dwXCountChars = NULL;
		StartupInfo.dwYCountChars = NULL;
		StartupInfo.dwFillAttribute = NULL;
		StartupInfo.dwFlags = NULL;
		StartupInfo.wShowWindow = SW_SHOWMINIMIZED;
		StartupInfo.cbReserved2 = NULL;
		StartupInfo.lpReserved2 = NULL;
		StartupInfo.hStdInput = NULL;
		StartupInfo.hStdOutput = NULL;
		StartupInfo.hStdError = NULL;

		winrt::com_array<HV4D_RTCLASS_DESC> WinrtRTClassDescs{};

		error = $HV4DBAT.HV4DGetApplicationDescs(WinrtRTClassDescs);

		if (error != HV4DRETURN::HV4D_TRUE)
		{
			HV4DClearSystemCache();

			return error;

		}

		for (HV4D_RTCLASS_DESC itt : WinrtRTClassDescs)
		{
			CHV4DRTCLASS Application{ itt };

			if (CHV4DRTCLASS{} == Application)
			{
				HV4DClearSystemCache();

				return error;

			}

		}

		winrt::com_array<HV4D_RTCLASS_DESC>::iterator itt{};

		for (itt = WinrtRTClassDescs.begin(); itt != WinrtRTClassDescs.end(); itt++)
		{
			$HV4DAPPLICATIONS.push_back(HV4DPROCESS{});

			hstring path = itt->dll.p + itt->dll.f;

			BOOL ret = CreateProcessW(
				path.c_str(),
				NULL,
				NULL,
				NULL,
				FALSE,
				NORMAL_PRIORITY_CLASS | CREATE_NEW_PROCESS_GROUP,
				NULL,
				NULL,
				&StartupInfo,
				&$HV4DAPPLICATIONS.back().HANDLE);

			if (!ret)
			{
				HV4DClearSystemCache();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

			$HV4DAPPLICATIONS.back().RTCLASSDESC = *itt;

			if(CHV4DRTCLASS{} == $HV4DAPPLICATIONS.back().RTCLASSDESC)
			{
				HV4DClearSystemCache();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

			if ($HV4DAPPLICATIONS.back().HANDLE.hProcess == nullptr ||
				$HV4DAPPLICATIONS.back().HANDLE.dwProcessId == 0)
			{
				HV4DClearSystemCache();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

			if(CHV4DRTCLASS{} == $HV4DAPPLICATIONS.back().RTCLASSDESC)
			{
				HV4DClearSystemCache();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return error;

	}

	HV4DRETURN RTHV4DCACHE::HV4DGetSystemCacheCFG(IHV4DBAT o)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;

		error = HV4DIsConfiguredSystemCache();

		if (error == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (error == HV4DRETURN::HV4D_NOT_CONFIGURED)
		{
			return HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		o = $HV4DBAT;

		if (!o)
		{
			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		error = o.HV4DIsConfiguredBatchFile();

		if (error != HV4DRETURN::HV4D_TRUE)
		{
			HV4DClearSystemCache();

			return error;

		}

		return error;

	}

	HV4DRETURN RTHV4DCACHE::HV4DIsConfiguredSystemCache()
	{
		HV4DRETURN error_cfg = HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;
		HV4DRETURN error_mod = HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;
		HV4DRETURN error_app = HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		error_cfg = $HV4DBAT.HV4DIsConfiguredBatchFile();

		if (error_cfg == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		std::unordered_map<hstring, uint32_t>::const_iterator citt{};

		for (citt = HV4DMapSystemFileByHstring()->begin();
			citt != HV4DMapSystemFileByHstring()->end(); citt++)
		{
			uint32_t index = citt->second;

			if (error_mod == HV4DRETURN::HV4D_NOT_CONFIGURED && !$HV4DMODULES.at(index))
			{
				error_mod = HV4DRETURN::HV4D_NOT_CONFIGURED;

			}
			else if (error_mod == HV4DRETURN::HV4D_PROPERLY_CONFIGURED && $HV4DMODULES.at(index))
			{
				error_mod = HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}
			else if (error_mod == HV4DRETURN::HV4D_NOT_CONFIGURED && $HV4DMODULES.at(index) ||
				error_mod == HV4DRETURN::HV4D_PROPERLY_CONFIGURED && !$HV4DMODULES.at(index))
			{
				HV4DClearSystemCache();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}
			else if (error_mod == HV4DRETURN::HV4D_UNKNOWN && !$HV4DMODULES.at(index))
			{
				error_mod = HV4DRETURN::HV4D_NOT_CONFIGURED;

			}
			else if (error_mod == HV4DRETURN::HV4D_UNKNOWN && $HV4DMODULES.at(index))
			{
				error_mod = HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}

		}

		std::vector<HV4DPROCESS>::iterator itt{};

		for (itt = $HV4DAPPLICATIONS.begin(); itt != $HV4DAPPLICATIONS.end(); itt++)
		{
			HV4D_RTCLASS_DESC WinrtApplication{};

			if(error_app == HV4DRETURN::HV4D_NOT_CONFIGURED && 
				CHV4DRTCLASS{} == itt->RTCLASSDESC &&
				itt->HANDLE.hProcess == nullptr &&
				itt->HANDLE.dwProcessId == NULL)
			{
				error_app = HV4DRETURN::HV4D_NOT_CONFIGURED;

			}
			else if (error_app == HV4DRETURN::HV4D_PROPERLY_CONFIGURED &&
				CHV4DRTCLASS{} != itt->RTCLASSDESC &&
				itt->HANDLE.hProcess != nullptr &&
				itt->HANDLE.dwProcessId != NULL)
			{
				error_app = HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}
			else if (error_app == HV4DRETURN::HV4D_NOT_CONFIGURED &&
				CHV4DRTCLASS{} != itt->RTCLASSDESC ||
				itt->HANDLE.hProcess != nullptr ||
				itt->HANDLE.dwProcessId != NULL)
			{
				HV4DClearSystemCache();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}
			else if (error_app == HV4DRETURN::HV4D_PROPERLY_CONFIGURED &&
				CHV4DRTCLASS{} == itt->RTCLASSDESC &&
				itt->HANDLE.hProcess == nullptr ||
				itt->HANDLE.dwProcessId == NULL)
			{
				HV4DClearSystemCache();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}
			else if (error_app == HV4DRETURN::HV4D_UNKNOWN &&
				CHV4DRTCLASS{} == itt->RTCLASSDESC &&
				itt->HANDLE.hProcess == nullptr &&
				itt->HANDLE.dwProcessId == NULL)
			{
				error_app = HV4DRETURN::HV4D_NOT_CONFIGURED;

			}
			else if (error_app == HV4DRETURN::HV4D_UNKNOWN &&
				CHV4DRTCLASS{} != itt->RTCLASSDESC &&
				itt->HANDLE.hProcess != nullptr &&
				itt->HANDLE.dwProcessId != NULL)
			{
				error_app = HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}
			else
			{
				HV4DClearSystemCache();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		if (error_cfg == HV4DRETURN::HV4D_NOT_CONFIGURED &&
			error_mod == HV4DRETURN::HV4D_NOT_CONFIGURED &&
			error_app == HV4DRETURN::HV4D_NOT_CONFIGURED)
		{
			return HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		if (error_cfg == HV4DRETURN::HV4D_PROPERLY_CONFIGURED &&
			error_mod == HV4DRETURN::HV4D_PROPERLY_CONFIGURED &&
			error_app == HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
		{
			return HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

		}

		HV4DClearSystemCache();

		return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

	}

	HV4DRETURN RTHV4DCACHE::HV4DClearSystemCache()
	{
		std::vector<HV4DPROCESS>::iterator itt{};

		for (itt = $HV4DAPPLICATIONS.begin(); itt != $HV4DAPPLICATIONS.end(); itt++)
		{
			if (!TerminateProcess(itt->HANDLE.hProcess, EXIT_SUCCESS))
			{
				HV4DThrowCloseAppFail();

			}

		}

		$HV4DAPPLICATIONS.clear();

		std::vector<HV4D::HV4DSYS::IHV4DMODULE>::iterator jtt{};

		for (jtt = $HV4DMODULES.begin(); jtt != $HV4DMODULES.end(); jtt++)
		{
			jtt->HV4DClearModule();

		}

		$HV4DBAT.HV4DClearBatchFile();

		return HV4DRETURN::HV4D_TRUE;

	}

	HV4DRETURN RTHV4DCACHE::HV4DSwapModule(HV4D_SYSTEM_MODULE_ID const& i, HV4D_RTCLASS_DESC const& e)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;

		error = HV4DIsConfiguredSystemCache();

		if (error == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		HV4D_SYSTEM_MODULE_ID SystemModuleID{ i };

		uint32_t index{ 0 };

		try
		{
			index = HV4DMapModuleByID()->at(SystemModuleID);

		}
		catch (std::out_of_range)
		{
			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		IHV4DMODULE SwapModule = $HV4DMODULES.at(index);

		HV4D_RTCLASS_DESC WinrtRTClassDesc{ e };

		if (CHV4DRTCLASS{} == WinrtRTClassDesc)
		{
			SwapModule = nullptr;

			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		Windows::Foundation::IActivationFactory ActivationFactory{};

		error = HV4DGetActivationFactory(
			WinrtRTClassDesc.dll.p + WinrtRTClassDesc.dll.f,
			WinrtRTClassDesc.rtc.ns + WinrtRTClassDesc.rtc.c,
			ActivationFactory);

		if (!ActivationFactory)
		{
			SwapModule = nullptr;

			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		if (error != HV4DRETURN::HV4D_TRUE)
		{
			SwapModule = nullptr;

			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		$HV4DMODULES.at(index) = ActivationFactory.ActivateInstance<IHV4DMODULE>();

		if (!$HV4DMODULES.at(index))
		{
			$HV4DMODULES.at(index) = SwapModule;

			SwapModule = nullptr;

			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		HV4D_RTCLASS_DESC SwapWinrtRTClassDesc{};

		error = $HV4DBAT.HV4DGetModuleDesc(SystemModuleID, SwapWinrtRTClassDesc);

		if (error != HV4DRETURN::HV4D_TRUE)
		{
			SwapModule = nullptr;

			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		if (CHV4DRTCLASS{} == SwapWinrtRTClassDesc)
		{
			SwapModule = nullptr;

			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		error = $HV4DBAT.HV4DSwapModuleDesc(SystemModuleID, WinrtRTClassDesc);

		if (error != HV4DRETURN::HV4D_TRUE)
		{
			error = $HV4DBAT.HV4DSwapModuleDesc(SystemModuleID, SwapWinrtRTClassDesc);

			if (error != HV4DRETURN::HV4D_TRUE)
			{
				HV4DClearSystemCache();

				SwapModule = nullptr;

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

			error = $HV4DBAT.HV4DIsConfiguredBatchFile();

			if (error != HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
			{
				HV4DClearSystemCache();

				SwapModule = nullptr;

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

			$HV4DMODULES.at(index) = SwapModule;

			SwapModule = nullptr;

			return HV4DRETURN::HV4D_CANNOT_PERFORM_OP;

		}

		error = $HV4DBAT.HV4DIsConfiguredBatchFile();

		if (error != HV4DRETURN::HV4D_PROPERLY_CONFIGURED)
		{
			HV4DClearSystemCache();

			SwapModule = nullptr;

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		SwapModule = nullptr;

		return error;

	}
	
	HV4DRETURN RTHV4DCACHE::HV4DGetModules(winrt::array_view<IHV4DMODULE> o)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;

		error = HV4DIsConfiguredSystemCache();

		if (error == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (error == HV4DRETURN::HV4D_NOT_CONFIGURED)
		{
			return HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		o = $HV4DMODULES;

		for (IHV4DMODULE itt : $HV4DMODULES)
		{
			if (!itt)
			{
				HV4DClearSystemCache();

				return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

			}

		}

		return error;

	}
	
	HV4DRETURN RTHV4DCACHE::HV4DGetModule(HV4D_SYSTEM_MODULE_ID const& i, IHV4DMODULE o)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;

		error = HV4DIsConfiguredSystemCache();

		if (error == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		if (error == HV4DRETURN::HV4D_NOT_CONFIGURED)
		{
			return HV4DRETURN::HV4D_NOT_CONFIGURED;

		}

		HV4D_SYSTEM_MODULE_ID SystemModuleID{ i };

		uint32_t index{ 0 };

		try
		{
			index = HV4DMapModuleByID()->at(SystemModuleID);

		}
		catch (std::out_of_range)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		o = $HV4DMODULES.at(index);
				
		if (!o)
		{
			HV4DClearSystemCache();

			o = nullptr;

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		return error;

	}

	HV4DRETURN RTHV4DCACHE::HV4DLoadApplication(HV4D_RTCLASS_DESC const& e)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;

		error = HV4DIsConfiguredSystemCache();

		if (error == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		CHV4DRTCLASS Application{ e };

		if(CHV4DRTCLASS{} == Application)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		HV4D_RTCLASS_DESC WinrtApplication{};

		error = Application.HV4DGetWinrtRTClass(WinrtApplication);

		if (error != HV4DRETURN::HV4D_TRUE)
		{
			HV4DClearSystemCache();

			return error;

		}

		if (CHV4DRTCLASS{} == WinrtApplication)
		{
			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		STARTUPINFOW StartupInfo{};
		StartupInfo.cb = sizeof(STARTUPINFOA);
		StartupInfo.lpReserved = NULL;
		StartupInfo.lpDesktop = NULL;
		StartupInfo.lpTitle = NULL;
		StartupInfo.dwX = 100;
		StartupInfo.dwY = 100;
		StartupInfo.dwXSize = 100;
		StartupInfo.dwYSize = 100;
		StartupInfo.dwXCountChars = NULL;
		StartupInfo.dwYCountChars = NULL;
		StartupInfo.dwFillAttribute = NULL;
		StartupInfo.dwFlags = NULL;
		StartupInfo.wShowWindow = SW_SHOWMINIMIZED;
		StartupInfo.cbReserved2 = NULL;
		StartupInfo.lpReserved2 = NULL;
		StartupInfo.hStdInput = NULL;
		StartupInfo.hStdOutput = NULL;
		StartupInfo.hStdError = NULL;

		std::vector<HV4DPROCESS>::iterator itt{};

		for (itt = $HV4DAPPLICATIONS.begin(); itt != $HV4DAPPLICATIONS.end(); itt++)
		{
			if (itt->RTCLASSDESC == Application)
			{
				return HV4DRETURN::HV4D_PROPERLY_CONFIGURED;

			}

		}

		$HV4DAPPLICATIONS.push_back(HV4DPROCESS{});

		hstring path = hstring{ WinrtApplication.dll.p } + WinrtApplication.dll.f + '"';

		BOOL ret = CreateProcessW(
			path.c_str(),
			NULL,
			NULL,
			NULL,
			FALSE,
			NORMAL_PRIORITY_CLASS | CREATE_NEW_PROCESS_GROUP,
			NULL,
			NULL,
			&StartupInfo,
			&$HV4DAPPLICATIONS.back().HANDLE);

		if (!ret)
		{
			$HV4DAPPLICATIONS.pop_back();

			return HV4DRETURN::HV4D_CANNOT_PERFORM_OP;

		}

		$HV4DAPPLICATIONS.back().RTCLASSDESC = WinrtApplication;

		if (CHV4DRTCLASS{} == $HV4DAPPLICATIONS.back().RTCLASSDESC)
		{
			$HV4DAPPLICATIONS.pop_back();

			return HV4DRETURN::HV4D_CANNOT_PERFORM_OP;

		}

		error = $HV4DBAT.HV4DLoadApplicationDesc(WinrtApplication);

		if (error != HV4DRETURN::HV4D_TRUE)
		{
			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		error = HV4DIsConfiguredSystemCache();

		if (error == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		return error;

	}

	HV4DRETURN RTHV4DCACHE::HV4DUnloadApplication(HV4D_RTCLASS_DESC const& e)
	{
		HV4DRETURN error = HV4DRETURN::HV4D_TRUE;

		error = HV4DIsConfiguredSystemCache();

		if (error == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		CHV4DRTCLASS Application{ e };

		if (CHV4DRTCLASS{} == Application)
		{
			return HV4DRETURN::HV4D_INVALID_ARGUMENT;

		}

		vector<HV4DPROCESS>::iterator itt{};

		for (itt = $HV4DAPPLICATIONS.begin(); itt != $HV4DAPPLICATIONS.end(); itt++)
		{
			if (Application == itt->RTCLASSDESC)
			{
				if (!TerminateProcess(itt->HANDLE.hProcess, EXIT_SUCCESS))
				{
					HV4DThrowCloseAppFail();

				}

				itt = $HV4DAPPLICATIONS.erase(itt);

			}

		}

		HV4D_RTCLASS_DESC WinrtApplication{};

		error = Application.HV4DGetWinrtRTClass(WinrtApplication);

		if (error != HV4DRETURN::HV4D_TRUE)
		{
			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		error = $HV4DBAT.HV4DUnloadApplicationDesc(WinrtApplication);

		if (error != HV4DRETURN::HV4D_TRUE)
		{
			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		error = HV4DIsConfiguredSystemCache();

		if (error == HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED)
		{
			HV4DClearSystemCache();

			return HV4DRETURN::HV4D_IMPROPERLY_CONFIGURED;

		}

		return error;

	}

	void RTHV4DCACHE::HV4DThrowCloseAppFail()
	{
		MessageDialog Msg{ L"Error." };

		UICommand skip{ L"Skip", [](IUICommand const& command) {} };

		Msg.Commands().Append(skip);

		Msg.DefaultCommandIndex(0);

		auto bound{ Msg.as<::IInitializeWithWindow>() };

		HWND hWnd = GetActiveWindow();

		bound->Initialize(hWnd);

		Msg.ShowAsync();

		return;

	}


}
