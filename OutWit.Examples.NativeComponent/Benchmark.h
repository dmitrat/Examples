#pragma once
namespace OutWit::Examples::NativeComponent
{
	class __declspec(dllexport) Benchmark
	{
	public:
		static double RunInt(long iterations);
		static double RunDouble(long iterations);
	};

}


