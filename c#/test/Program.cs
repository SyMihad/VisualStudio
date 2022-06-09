using System;

namespace test
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter the amount of Dollar: ");
            int dollar = Convert.ToInt32(Console.ReadLine());
            double bdt = Convert.ToDouble(dollar) * 85.94;
            Console.WriteLine("BDT= " + bdt);
        }
    }
}
