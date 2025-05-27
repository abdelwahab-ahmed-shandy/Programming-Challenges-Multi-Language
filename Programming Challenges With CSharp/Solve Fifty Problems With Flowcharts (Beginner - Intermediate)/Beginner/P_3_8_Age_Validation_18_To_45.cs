/*
 
Problem_25 >> Read until Age between 18 and 45 
Write a program to ask the user to enter : age 
- if age is 18 and 45 print "Valid Age" otherwise print "Invalid Age" and re-ask user to enter a valid age .
note : you should keep asking user to enter a valid age until s/she enters it .

 */

using System.Drawing;
using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static int ReadAge()
        {
            Console.Write("Enter Your Age: ");
            int Age = Convert.ToInt32(Console.ReadLine());
            return Age;
        }

        public static void CheckAge()
        {
            while (true)
            {
                int Age = ReadAge(); 
                if (Age >= 18 && Age <= 45)
                {
                    Console.WriteLine("Valid Age");
                    break;  
                }
                else
                {
                    Console.WriteLine("Invalid age. Please enter a correct age.");
                }
            }
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Write a program to ask the user to enter: age - if age is 18 and 45 print Valid Age otherwise print Invalid Age and re-ask user to enter a valid age");
            CheckAge();  
        }
    }
}
