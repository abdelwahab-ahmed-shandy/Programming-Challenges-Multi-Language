/*
 
Problem_29 >> Sum EVEN Numbers from 1 to N 
Write a program to Sum EVEN numbers from 1 to N 
input >> 10 
output >> 30

 */

using System.Drawing;
using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static int ReadNumber()
        {
            Console.Write("Enter Your Number: ");
            int Number = Convert.ToInt32(Console.ReadLine());
            return Number;
        }

        public static int SumEvenNumbers(int N)
        {
            int Sum = 0;
            for (int i = 1; i <= N; i++)
            {
                if (i % 2 == 0)
                    Sum += i;
            }
            return Sum;
        }

        public static void PrintEvenNumbers(int Sum)
        {
            Console.WriteLine($"Sum of Numbers from 1 to N is: {Sum}");
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Write a program to Sum EVEN numbers from 1 to N ");
            PrintEvenNumbers(SumEvenNumbers(ReadNumber()));        
        }
    }
}
