#pragma once
namespace OutWit::Examples::ManagedWrapper
{
	class __declspec(dllexport) BenchmarkWrapper
	{
	public:
		static long RunInt(long iterations);
		static double RunDouble(long iterations);
	};
}

