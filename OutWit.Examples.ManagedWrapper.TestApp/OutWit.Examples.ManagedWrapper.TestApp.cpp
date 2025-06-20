// OutWit.Examples.ManagedWrapper.TestApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <chrono>
#include <iostream>
#include "../OutWit.Examples.ManagedWrapper/BenchmarkWrapper.h"

using namespace OutWit::Examples::ManagedWrapper;
using namespace std::chrono;

constexpr long ITERATIONS = 10000000;
constexpr int ATTEMPTS = 10;

int main()
{
    double doubleStat[ATTEMPTS];
    double doubleStatAvg = 0;

    double intStat[ATTEMPTS];
    double intStatAverage = 0;

    std::cout << "Starting double benchmark\n";
    for (int i = 0; i < ATTEMPTS; i++)
    {
        auto start = high_resolution_clock::now();

        BenchmarkWrapper::RunDouble(ITERATIONS);

        auto end = high_resolution_clock::now();

        doubleStat[i] = (duration_cast<microseconds>(end - start).count() / 1000.0);
        doubleStatAvg += doubleStat[i];
    }
    doubleStatAvg /= ATTEMPTS;

    std::sort(std::begin(doubleStat), std::end(doubleStat));

    std::cout << "Min: " << doubleStat[0] << " ms, Max: " << doubleStat[ATTEMPTS - 1] << " ms, Median: " << doubleStat[(int)ceil(ATTEMPTS / 2.0)] << " ms, Average: " << doubleStatAvg << " ms";

    std::cout << "\n";

    std::cout << "Starting int benchmark\n";
    for (int i = 0; i < ATTEMPTS; i++)
    {
        auto start = high_resolution_clock::now();

        BenchmarkWrapper::RunInt(ITERATIONS);

        auto end = high_resolution_clock::now();

        intStat[i] = (duration_cast<microseconds>(end - start).count() / 1000.0);
        intStatAverage += intStat[i];
    }
    intStatAverage /= ATTEMPTS;

    std::sort(std::begin(intStat), std::end(intStat));

    std::cout << "Min: " << intStat[0] << " ms, Max: " << intStat[ATTEMPTS - 1] << " ms, Median: " << intStat[(int)ceil(ATTEMPTS / 2.0)] << " ms, Average: " << intStatAverage << " ms";

    std::cout << "\n";

    getchar();
}
