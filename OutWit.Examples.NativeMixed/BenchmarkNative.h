#pragma once
namespace OutWit::Examples::NativeMixed
{
	class __declspec(dllexport) BenchmarkNative
	{
	public:
		static long RunInt(long iterations);
		static double RunDouble(long iterations);
	private:
		static long CalculateFibonacci(long n);
		static double CalculateSine(double x, int numTerms);
	};
}

