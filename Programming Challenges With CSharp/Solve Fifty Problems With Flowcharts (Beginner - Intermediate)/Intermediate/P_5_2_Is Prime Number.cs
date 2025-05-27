/*
 
Problem_38 >> Is Prime Number ? 
Write a program to read a number and check if it is a prime number or not 

 */

namespace ConsoleApp1
{
    public class Program
    {
        public static double ReadNumbers(string Massage)
        {
            double Number = 0;
            Console.Write(Massage);
            Number = Convert.ToDouble(Console.ReadLine());
            return Number;
        }
        public static string IsPrimeNumbers()
        {
            double Number = ReadNumbers("Enter Number : ");
            double M = Math.Round(Number / 2);
            for (int i = 2; i <= M; i++)
            {
                if (Number % i == 0)
                    return $"The {Number} IS NOT Prime";
            }
        return $"The {Number} IS Prime";
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Is Prime Number ? ");

            Console.WriteLine($"Result {IsPrimeNumbers()}");
        }
    }
}
