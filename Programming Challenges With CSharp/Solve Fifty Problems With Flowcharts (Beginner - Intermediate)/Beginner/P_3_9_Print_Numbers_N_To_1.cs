/*
 
Problem_27 >> Read numbers from N to 1 (loops )
Write a program to print numbers from N to 1 
input == 10
output >> 10 9 8 7 6 5 4 3 2 1

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

        public static void PrintNumbers(int N)
        {
            for (int i = N; i >= 1; i--)
            {
                Console.Write($"{i} ");
            }
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Write a program to print numbers from N to 1");
            PrintNumbers(ReadNumber());
        }
    }
}
