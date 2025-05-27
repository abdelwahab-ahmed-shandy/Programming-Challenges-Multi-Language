/*

Problem_02 >> Print All Prime Numbers 1 To N 

*/
using static System.Runtime.InteropServices.JavaScript.JSType;

namespace Solve
{
    internal class Program
    {
        public enum enPrimeCheck { Prime = 1, NotPrime = 2 };
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
        public static enPrimeCheck CheckPrime(double Number)
        {
            double M = Math.Round(Number / 2.0);
            for (int i = 2; i <= M; i++)
            {
                if (Number % i == 0)
                    return enPrimeCheck.NotPrime;
            }
            return enPrimeCheck.Prime;
        }
        public static void PrintAllPrimeNumbers(double Number)
        {
            Console.WriteLine($"Prime Numbers from : {Number}");
            for (int i = 2; i <= Number; i++)
            {
                if (CheckPrime(i) == enPrimeCheck.Prime)
                    Console.WriteLine(i);
            }
        }
        static void Main(string[] args)
        {
            PrintAllPrimeNumbers(CheckPositiveNumber("Enter a Positive Number : "));
        }
    }
}
 
