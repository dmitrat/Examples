namespace OutWit.Examples.ManagedComponent
{
    public static class Benchmark
    {
        public static double RunDouble(int iterations)
        {
            double val = 0;
            for (double i = 0; i < iterations; i++)
            {
                val += (i * i * i + i * i + i);
            }
            return val;
        }

        public static double RunInt(int iterations)
        {
            int val = 0;
            for (int i = 0; i < iterations; i++)
            {
                val += (i * i * i + i * i + i);
            }
            return val;
        }
    }
}
