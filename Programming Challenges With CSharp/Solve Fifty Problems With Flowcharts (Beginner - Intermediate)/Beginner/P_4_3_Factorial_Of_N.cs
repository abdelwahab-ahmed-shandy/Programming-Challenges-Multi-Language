/*
 
Problem_30 >> Factorial of N!
Write a program to calculate factorial of N !
factorial of 6 >> 6 * 5 * 4 * 3 * 2 * 1 = 720
note : User should only positive number , other wise reject it and ask to enter again 
input >> 6 
output >> 720

 */

using System.Drawing;
using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static int ReadPositiveNumber()
        {
            Console.Write("Enter Positive Number: ");
            while (true)
            {
                int Number = Convert.ToInt32(Console.ReadLine());
                if (Number > 0)
                    return Number;
                Console.WriteLine("Please Enter Positive Number");
            }
        }

        public static int FactorialNumbers(int N)
        {
            int Sum = 1;
            for (int i = 1; i <= N; i++)
            {
                Sum = Sum * i;
            }
            return Sum;
        }

        public static void PrintFactorialNumbers(int Sum)
        {
            Console.WriteLine($"Sum of Numbers from 1 to N is: {Sum}");
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Write a program to calculate factorial of N !");
            PrintFactorialNumbers(FactorialNumbers(ReadPositiveNumber()));        
        }
    }
}
