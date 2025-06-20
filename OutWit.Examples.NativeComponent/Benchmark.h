#pragma once
namespace OutWit::Examples::NativeComponent
{
	class __declspec(dllexport) Benchmark
	{
	public:
		static long RunInt(long iterations);
		static double RunDouble(long iterations);

	private:
		static long CalculateFibonacci(long n);
		static double CalculateSine(double x, int numTerms);
	};

}


