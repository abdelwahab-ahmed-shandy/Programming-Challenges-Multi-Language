/*
 
Problem_12 >> Write a program to ask the user to enter : (Number1 , Number2) , Then print the max Number.
 
 */

using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static void ReadNumbers(ref double NumOne , ref double NumTwo )
        {
            Console.WriteLine("Write a program to ask the user to enter : (Number1 , Number2) , Then print the max Number");
            Console.Write("Enter Number One  : ");
            NumOne = double.Parse(Console.ReadLine());
            Console.Write("Enter Number Two  : ");
            NumTwo = double.Parse(Console.ReadLine());
        }
        public static double GetMaxNumber(double NumOne, double NumTwo)
        {
            if (NumOne > NumTwo)
                return NumOne;
            return NumTwo;
        }

        public static void PrintMaxNumber(double MaxNum)
        {
            Console.WriteLine("================");
            Console.WriteLine($"The Max Of Number Is : {MaxNum}");
            Console.WriteLine("================");
        }

        static void Main(string[] args)
        {
            double NumberOne =0 , NumberTwo =0;
            ReadNumbers(ref NumberOne, ref NumberTwo);
            PrintMaxNumber(GetMaxNumber(NumberOne ,NumberTwo));
        }
    }
}
