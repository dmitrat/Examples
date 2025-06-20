using System;
using System.Collections.Generic;
using System.Linq;

namespace OutWit.Examples.NativeMixed.TestApp
{
    class Program
    {
        private const int ITERATIONS = 10_000_000;
        private const int ATTEMPTS = 10;

        public static void Main()
        {
            var doubleStat = new List<double>();
            var intStat = new List<double>();

            Console.WriteLine("Starting double benchmark");
            for (int i = 0; i < ATTEMPTS; i++)
            {
                var start = DateTime.Now;

                Benchmark.RunDouble(ITERATIONS);

                var end = DateTime.Now;

                doubleStat.Add((end - start).TotalMilliseconds);
            }

            doubleStat.Sort();

            Console.WriteLine($"Min: {doubleStat[0]:0.0000} ms, " +
                              $"Max: {doubleStat[ATTEMPTS - 1]:0.0000} ms, " +
                              $"Median: {doubleStat[(int)Math.Ceiling(ATTEMPTS / 2.0)]:0.0000} ms, " +
                              $"Average: {doubleStat.Average():0.0000} ms");

            Console.WriteLine();


            Console.WriteLine("Starting int benchmark");
            for (int i = 0; i < ATTEMPTS; i++)
            {
                var start = DateTime.Now;

                Benchmark.RunInt(ITERATIONS);

                var end = DateTime.Now;

                intStat.Add((end - start).TotalMilliseconds);
            }

            intStat.Sort();

            Console.WriteLine($"Min: {intStat[0]:0.0000} ms, " +
                              $"Max: {intStat[ATTEMPTS - 1]:0.0000} ms, " +
                              $"Median: {intStat[(int)Math.Ceiling(ATTEMPTS / 2.0)]:0.0000} ms, " +
                              $"Average: {intStat.Average():0.0000} ms");

            Console.WriteLine("Hello, World!");
            Console.Read();
        }
    }
}