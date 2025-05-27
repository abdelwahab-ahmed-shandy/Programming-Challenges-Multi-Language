/*
Problem_12 >> Write a Program to read a number and Print inverted pattern .

Inverted Number Pattern

input>> 
5

output>>
55555
5555
555
55
5

*/
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

        public static void PrintInvertedPattern(int Number)
        {
            for (int i =Number; i > 0; i--)
            {
                for (int j = 0; j < i; j++)
                {
                    Console.Write(Number);
                }
                Console.WriteLine();
            }
        }
        static void Main(string[] args)
        {
            int Number = ReadPositiveNumber("Please enter a positive number : ");
            PrintInvertedPattern(Number);
        }
    }
}
