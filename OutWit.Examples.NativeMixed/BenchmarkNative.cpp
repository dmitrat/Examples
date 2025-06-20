#include "pch.h"
#include "BenchmarkNative.h"

#include <cmath>

using namespace OutWit::Examples::NativeMixed;

double BenchmarkNative::RunInt(long iterations)
{
    int val = 0;
    for (int i = 0; i < iterations; i++)
    {
        val += (i * i * i + i * i + i);
    }
    return val;
}

double BenchmarkNative::RunDouble(long iterations)
{
    double val = 0;
    for (double i = 0; i < iterations; i++)
    {
        val += (i * i * i + i * i + i);
    }
    return val;
}
