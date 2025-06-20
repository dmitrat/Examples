#include "pch.h"
#include "Benchmark.h"

#include <cmath>

using namespace OutWit::Examples::NativeComponent;

double Benchmark::RunInt(long iterations)
{
    int val = 0;
    for (int i = 0; i < iterations; i++)
    {
        val += (i * i * i + i * i + i);
    }
    return val;
}

double Benchmark::RunDouble(long iterations)
{
    double val = 0;
    for (double i = 0; i < iterations; i++)
    {
        val += (i * i * i + i * i + i);
    }
    return val;
}
