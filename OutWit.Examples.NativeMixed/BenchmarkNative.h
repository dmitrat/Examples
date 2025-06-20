#pragma once
namespace OutWit::Examples::NativeMixed
{
	class __declspec(dllexport) BenchmarkNative
	{
	public:
		static double RunInt(long iterations);
		static double RunDouble(long iterations);
	};
}

