/*
 
Problem_26 >> Read numbers from 1 to N (loops )
Write a program to print numbers from 1 to N 
input >> 10 
output >> 1 2 3 4 5 6 7 8 9 10  
N == The number entered by the user
counter == Default value store it

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
            for (int i = 1; i <= N; i++)
            {
                Console.Write($"{i} ");
            }
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Write a program to print numbers from 1 to N");
            PrintNumbers(ReadNumber());
        }
    }
}
