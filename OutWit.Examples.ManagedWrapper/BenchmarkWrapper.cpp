#include "pch.h"
#include "BenchmarkWrapper.h"

using namespace OutWit::Examples::ManagedWrapper;
using namespace OutWit::Examples::ManagedComponent;

long BenchmarkWrapper::RunInt(long iterations)
{
	return Benchmark::RunInt(iterations);
}

double BenchmarkWrapper::RunDouble(long iterations)
{
	return Benchmark::RunDouble(iterations);
}
