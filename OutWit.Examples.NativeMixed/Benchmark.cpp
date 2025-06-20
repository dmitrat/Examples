#include "pch.h"
#include "Benchmark.h"

#include "BenchmarkNative.h"

using namespace OutWit::Examples::NativeMixed;

double Benchmark::RunInt(long iterations)
{
	return BenchmarkNative::RunInt(iterations);
}

double Benchmark::RunDouble(long iterations)
{
	return BenchmarkNative::RunDouble(iterations);
}
