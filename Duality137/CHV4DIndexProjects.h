#pragma once

#include <functional>

#include <string>
#include <locale>
#include <codecvt>

#include <vector>

#include <libpq-fe.h>

#include "winrt/Duality137.h"

#include "winrt/HV4D.h"
#include "winrt/HV4DX.h"

namespace WF = winrt::Windows::Foundation;
namespace WFITT = winrt::Windows::Foundation::Collections;
namespace WUPOP = winrt::Windows::UI::Popups;
namespace MUX = winrt::Microsoft::UI::Xaml;
namespace MUXC = winrt::Microsoft::UI::Xaml::Controls;

namespace Duality137 = winrt::Duality137;

namespace HV4D = winrt::HV4D;
namespace HV4DX = winrt::HV4DX;

namespace HV4DDUALITY
{
	class CHV4DIndexProjects
	{
	public:
		CHV4DIndexProjects();

	public:
		HV4D::IHV4DRETURN HV4DIndexProjects();

	private:
		void MakeConnection();

		void PopulateProjectIndex();

		void BreakConnection();

	private:
		std::vector<HV4DX::TableProjectIndex> ProjectIndex{};

		PGconn* PublicConnection{};

	public:
		HV4D::IHV4DRETURN HV4DCleartProjectIndex();

		HV4D::IHV4DRETURN HV4DGetProjectIndexSize(uint32_t&);

		HV4D::IHV4DRETURN HV4DGetProjectIndex(uint32_t const& i, Duality137::IndexedProject** o);

	private:
		std::vector<Duality137::IndexedProject> Rows{};

	};

}