#pragma once

#include <shobjidl.h>

#include <vector>

#include <functional>

#include "winrt/Windows.UI.Popups.h"

#include "winrt/HV4D.h"
#include "winrt/HV4DX.h"

#include "CHV4DIndexProjects.h"

#include "Landing.g.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace WUPOP = winrt::Windows::UI::Popups;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;

namespace HV4D = winrt::HV4D;
namespace HV4DX = winrt::HV4DX;

namespace winrt::Duality137::implementation
{
	struct Landing : LandingT<Landing>
	{
	public:
		Landing();

	public:
		void Loading(MUX::FrameworkElement const&, WF::IInspectable const&);

	private:

	public:
		void Loaded(WF::IInspectable const&, MUX::RoutedEventArgs const&);

	private:
		void IndexProjects();

		HV4DDUALITY::CHV4DIndexProjects ProjectIndex{};

	public:
		std::vector<std::function<void(WF::IInspectable const&, MUX::RoutedEventArgs const&)>> ProjectActivation{};

	private:
		void OpenIndexedProject(HV4DX::TableProjectIndex const&);

	public:
		void OpenProject001(WF::IInspectable const&, MUX::RoutedEventArgs const&);
		void OpenProject002(WF::IInspectable const&, MUX::RoutedEventArgs const&);
		void OpenProject003(WF::IInspectable const&, MUX::RoutedEventArgs const&);
		void OpenProject004(WF::IInspectable const&, MUX::RoutedEventArgs const&);
		void OpenProject005(WF::IInspectable const&, MUX::RoutedEventArgs const&);
		void OpenProject006(WF::IInspectable const&, MUX::RoutedEventArgs const&);

	public:
		void GoToLoaderSettings(WF::IInspectable const&, MUX::RoutedEventArgs const&);

	private:
		void HV4DThrowFailed();

		void HV4DThrowInvalidProject();

		void HV4DThrowCouldNotNavigate();

	};

}

namespace winrt::Duality137::factory_implementation
{
	struct Landing : LandingT<Landing, implementation::Landing>
	{
	};
}
