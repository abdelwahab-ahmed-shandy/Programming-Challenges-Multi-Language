/*
Problem_14 >> Write a Program to read a number and Print inverted pattern As follows.

Inverted letter Pattern

input>> 
3

output>>
ccc
bb
a

*/
using System.Diagnostics.Metrics;
using System.Dynamic;

namespace P5_C_
{
    internal class Program
    {
        public static int ReadPositiveNumber(string Massage)
        {
            int PositiveNumber = 0;
            do
            {
                Console.Write(Massage);
                PositiveNumber = Convert.ToInt32(Console.ReadLine());
            } while (PositiveNumber <= 0);
            return PositiveNumber;
        }

        public static void PrintletterPattern(int Number)
        {
            for (int i = 65 + Number - 1; i >= 65; i--)
            {
                for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
                {
                    Console.Write((char)i);
                }
                Console.WriteLine();
            }
        }
        static void Main(string[] args)
        {
            int Number = ReadPositiveNumber("Please enter a positive number : ");
            PrintletterPattern(Number);
        }
    }
}
