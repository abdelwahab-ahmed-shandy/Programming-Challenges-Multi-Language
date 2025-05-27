/*
To the Power of _____
Create a function that takes a base number and an exponent number and returns the calculation.

Examples
СalculateExponent(5, 5) ➞ 3125

СalculateExponent(10, 10) ➞ 10000000000

СalculateExponent(3, 3) ➞ 27

*/

// Solution

namespace Anny
{
    internal class Program
    {
        public static long CalculateExponent(long number, long exponent)
        {
            return (long)Math.Pow(number, exponent);
        }

        static void Main(string[] args)
        {
                Console.WriteLine(CalculateExponent(5, 5));
                Console.WriteLine(CalculateExponent(10, 10));
                Console.WriteLine(CalculateExponent(3, 3));
        }
     }
}
