namespace OutWit.Examples.ManagedComponent
{
    public static class Benchmark
    {
        public static double RunDouble(int iterations)
        {
            double totalResult = 0.0;
            double sineX = Math.PI / 2.0;
            int numTerms = 20;

            for (long i = 0; i < iterations; i++)
            {
                totalResult += CalculateSine(sineX, numTerms);
            }
            return totalResult;
        }

        public static int RunInt(int iterations)
        {
            int totalResult = 0;
            int fibN = 20;

            for (int i = 0; i < iterations; i++)
            {
                totalResult += CalculateFibonacci(fibN);
            }
            return totalResult;
        }

        private static int CalculateFibonacci(int n)
        {
            if (n <= 1)
                return n;
            
            return CalculateFibonacci(n - 1) + CalculateFibonacci(n - 2);
        }

        private static double CalculateSine(double x, int numTerms)
        {
            double result = 0.0;
            double term = x;
            int sign = 1;
            long factorial = 1;

            for (int i = 1; i <= numTerms; i++)
            {
                result += sign * term / factorial;
                term *= x * x;
                factorial *= (2L * i) * (2L * i + 1L);
                sign *= -1;
            }
            return result;
        }
    }
}
