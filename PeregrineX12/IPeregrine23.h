#pragma once

#include <string>

namespace PeregrineX12
{
	class ICHV4DQueue
	{
	private:
		void HV4DInitializeQueue() {};

	public:
		virtual void HV4DNewQueue() = 0;

		virtual void HV4DPopulateQueue() = 0;

		virtual void HV4DExecuteQueue() = 0;


	public:
		virtual ~ICHV4DQueue() = 0;

	};

	ICHV4DQueue::~ICHV4DQueue() {};


	class ICHV4DPixels
	{
	private:
		ICHV4DPixels() {};

	public:
		virtual void HV4DManageShaders() = 0;

	public:
		virtual ~ICHV4DPixels() = 0;

	};

	ICHV4DPixels::~ICHV4DPixels() {};


	class IHV4DShader
	{
	private:
		IHV4DShader() {};

	public:
		virtual void HV4DShaderFromFile(std::wstring file) = 0;

	public:
		virtual ~IHV4DShader() = 0;

	};

	IHV4DShader::~IHV4DShader() {};

}