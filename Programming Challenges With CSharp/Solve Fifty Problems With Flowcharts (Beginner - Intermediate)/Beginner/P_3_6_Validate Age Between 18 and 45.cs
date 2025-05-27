/*
 
Problem_24 >> Validate Age Between 18 and 45
Write a program to ask the user enter Age 
- If age is between 18 and 45 print "Valid Age" otherwise print "Invalid Age"

 */

using System.Drawing;
using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static void ReadAge(ref int Age)
        {
            Console.WriteLine("Write a program to ask the user enter Age  ? \n");
            
            Console.Write("Enter Your Age : ");
            Age = int.Parse(Console.ReadLine());           
        }
        public static string CheckValidAge(int Age) 
        {
            if (Age >= 18 && Age <= 45)
                return "Valid Age";
            return "Invalid Age";
        }

        public static void PrintResult(string HowAge)
        {
            Console.WriteLine($"\n{HowAge}\n");
        }

        static void Main(string[] args)
        {
            int Age  = 0 ;
            ReadAge(ref Age);
            PrintResult(CheckValidAge(Age));
        }
    }
}
