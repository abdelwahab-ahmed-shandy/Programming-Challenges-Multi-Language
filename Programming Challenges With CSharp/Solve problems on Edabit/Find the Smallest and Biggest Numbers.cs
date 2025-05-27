/*
Find the Smallest and Biggest Numbers
Create a function that takes an array of numbers and return both the minimum and maximum numbers, in that order.

Examples
FindMinMax([1, 2, 3, 4, 5]) ➞ [1, 5]

FindMinMax([2334454, 5]) ➞ [5, 2334454]

FindMinMax([1]) ➞ [1, 1]

*/

// Solution Code :

namespace Anny
{
    internal class Program
    {
        public static double[] FindMinMax(double[] values)
        {
            if (values.Length == 0)
            {
                throw new ArgumentException("Enter Any Numbers ");
            }

            double minNumber = values[0];
            double maxNumber = values[0];

            foreach (double value in values)
            {
                if (value < minNumber)
                {
                    minNumber = value;
                }
                if (value > maxNumber)
                {
                    maxNumber = value;
                }
            }
            return new double[] { minNumber, maxNumber };
        }

        static void Main(string[] args)
        {
            Console.WriteLine(String.Join(", ", FindMinMax(new double[] { 0,1, 2, 3, 4, 5 }))); 
            Console.WriteLine(String.Join(", ", FindMinMax(new double[] { 2334454, 5 })));    
            Console.WriteLine(String.Join(", ", FindMinMax(new double[] { 1 })));             
        }
    }
}
