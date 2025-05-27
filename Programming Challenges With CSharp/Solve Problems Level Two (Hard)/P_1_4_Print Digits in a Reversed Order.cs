/*

Problem_04 >> Write a Program to print all perfect numbers from 1 to N.
input>> 
500

output>>
6
28
496

*/

using static System.Runtime.InteropServices.JavaScript.JSType;

namespace Solve
{
    internal class Program
    {
        public static double CheckPositiveNumber(string Message)
        {
            double Number = 0;
            do
            {
                Console.Write(Message);
                Number = Convert.ToInt32(Console.ReadLine());
            } while (Number <= 0);
            return Number;
        }

        public static bool IsPerfectNumber(double number)
        {
            double sum = 0;
            for (int i = 1; i < number; i++)
            {
                if (number % i == 0)
                    sum += i;
            }
            return sum == number;
        }

        public static void PrintPerfectNumbers(double maxNumber)
        {
            Console.WriteLine($"Perfect Numbers from 1 to {maxNumber}:");
            for (double i = 1; i <= maxNumber; i++)
            {
                if (IsPerfectNumber(i))
                    Console.WriteLine(i);
            }
        }
        static void Main(string[] args)
        {
            double Number = CheckPositiveNumber("Enter a positive number : ");
            PrintPerfectNumbers(Number);
        }
    }
}
