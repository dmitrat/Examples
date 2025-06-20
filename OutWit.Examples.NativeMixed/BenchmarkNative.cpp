#include "pch.h"
#include "BenchmarkNative.h"

#include <cmath>

using namespace OutWit::Examples::NativeMixed;

long BenchmarkNative::RunInt(long iterations)
{
    long totalResult = 0;
    int fibN = 20;

    for (long long i = 0; i < iterations; ++i) {
        totalResult += CalculateFibonacci(fibN);
    }
    return totalResult;
}

double BenchmarkNative::RunDouble(long iterations)
{
    double totalResult = 0.0;
    const double PI = 3.14159265358979323846;
    double sineX = PI / 2.0;
    int numTerms = 20;

    for (long long i = 0; i < iterations; ++i) {
        totalResult += CalculateSine(sineX, numTerms);
    }
    return totalResult;
}

long BenchmarkNative::CalculateFibonacci(long n)
{
    if (n <= 1)
        return n;

    return CalculateFibonacci(n - 1) + CalculateFibonacci(n - 2);
}

double BenchmarkNative::CalculateSine(double x, int numTerms)
{
    double result = 0.0;
    double term = x;
    int sign = 1;
    long long factorial = 1;

    for (int i = 1; i <= numTerms; ++i) {
        result += sign * term / factorial;
        term *= x * x;
        factorial *= (2LL * i) * (2LL * i + 1LL);
        sign *= -1;
    }
    return result;
}