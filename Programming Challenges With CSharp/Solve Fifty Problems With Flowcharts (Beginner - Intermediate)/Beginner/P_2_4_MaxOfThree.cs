/*
 
Problem_13 >> Write a program to ask the user to enter 3 numbers : A , B , C
-Then print Max number 
 */

using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static void ReadNumbers(ref double A , ref double B ,ref double C )
        {
            Console.WriteLine("Write a program to ask the user to enter 3 numbers : A , B , C , Then print Max number\n");
            Console.Write("Enter Number A  : ");
            A = double.Parse(Console.ReadLine());
            Console.Write("Enter Number B  : ");
            B = double.Parse(Console.ReadLine());
            Console.Write("Enter Number C  : ");
            C = double.Parse(Console.ReadLine());
        }
        public static double GetMaxNumber(double A, double B ,double C)
        {
            if (A > B && A > C)
                return A;
            else if (B > C)
                return B;
            return C;
        }

        public static void PrintMaxNumber(double MaxNum)
        {
            Console.WriteLine("================");
            Console.WriteLine($"The Max Of Number Is : {MaxNum}");
            Console.WriteLine("================");
        }

        static void Main(string[] args)
        {
            double A =0 , B =0 , C = 0;
            ReadNumbers(ref A, ref B , ref C);
            PrintMaxNumber(GetMaxNumber(A, B , C));
        }
    }
}
