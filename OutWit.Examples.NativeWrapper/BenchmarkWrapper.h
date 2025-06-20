#pragma once
namespace OutWit::Examples::NativeWrapper
{
	public ref class BenchmarkWrapper
	{
	public:
		static double RunInt(long iterations);
		static double RunDouble(long iterations);
	};
}

