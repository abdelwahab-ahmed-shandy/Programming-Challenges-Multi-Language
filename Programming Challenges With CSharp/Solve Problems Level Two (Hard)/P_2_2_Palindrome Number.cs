/*
Problem_11 >> Write a Program to read a number and check if it is palindrome or not.

Palindrome is a number that reads the same from rigth to left.
Palindrome Number
input>> 
1234
12341

output>>
No , it is Not Palindrome Number
Yes , it is Palindrome Number

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

        public static bool CheckPalindromeNumber(int Number1 , int Numbers2)
        {
            return Number1 == Numbers2;
        }
        public static void PrintDigits(bool ISNumSame)
        {
            if (!ISNumSame)
                Console.WriteLine("No , it is Not Palindrome Number");
            else
                Console.WriteLine("Yes , it is Palindrome Number");

        }
        static void Main(string[] args)
        {
            int Numbers1 = ReadPositiveNumber("Please enter a positive number : ");
            int Numbers2 = ReadPositiveNumber("Please enter a positive number : ");
            PrintDigits(CheckPalindromeNumber(Numbers1, Numbers2));
        }
    }
}
