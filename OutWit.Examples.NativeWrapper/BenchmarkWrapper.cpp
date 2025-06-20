#include "pch.h"
#include "BenchmarkWrapper.h"

#include "Benchmark.h"

using namespace OutWit::Examples::NativeWrapper;

double BenchmarkWrapper::RunInt(long iterations)
{
	return NativeComponent::Benchmark::RunInt(iterations);
}

double BenchmarkWrapper::RunDouble(long iterations)
{
	return NativeComponent::Benchmark::RunDouble(iterations);
}
