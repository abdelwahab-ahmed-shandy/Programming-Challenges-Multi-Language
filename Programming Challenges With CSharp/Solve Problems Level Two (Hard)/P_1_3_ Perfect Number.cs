/*

Problem_03 >> Write a Program to Check if the number is Perfect Number or Not ?
note : perfect Number = all Sum(divisors)
28 = 1 + 2 + 4 + 7 + 14 
6 = 1 + 2 + 3

input>> 
28
12

output>>
28 is Perfect Number
12 is Not Perfect Number

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
        public static bool CheckPerfectNumber(double Number)
        {
            double Sum = 0;
            for (int i = 1; i < Number; i++)
            {
                if (Number % i == 0)
                    Sum += i;
            }
            return Sum == Number;
        }
        public static void PrintPerfectNumber(double Number)
        {
            if (CheckPerfectNumber(Number))
                Console.WriteLine($"The {Number} Is A Perfect Number");
            else
                Console.WriteLine($"The {Number} Is A Not Perfect Number");
        }
        static void Main(string[] args)
        {
            double Number = CheckPositiveNumber("Enter Positive Number : ");
            PrintPerfectNumber(Number);
        }
    }
}
 
