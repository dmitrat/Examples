#pragma once
namespace OutWit::Examples::NativeMixed
{
	public ref class Benchmark
	{
	public:
		static double RunInt(long iterations);
		static double RunDouble(long iterations);
	};
}

