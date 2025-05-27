/*
 
Problem_31 >> Power of 2 , 3 , 4
Write a program to ask the user to enter : Number 
# then print the  Number 2 , Number 3 , Number 4 
input >> 3 
output >> 9 , 27 , 81

 */

using System.Drawing;
using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static int ReadPositiveNumber()
        {
            Console.Write("Enter Positive Number : ");
            while (true)
            {
                int Number = Convert.ToInt32(Console.ReadLine());
                if (Number > 0)
                    return Number;
                Console.WriteLine("Please Enter Positive Number");
            }
        }

        public static void PrintNumberOfPower(int Number)
        {
            Console.WriteLine($"\nThe Power {Number} Of 2 : {Math.Pow(Number,2)}");
            Console.WriteLine($"The Power {Number} Of 3 : {Math.Pow(Number, 3)}");
            Console.WriteLine($"The Power {Number} Of 4 : {Math.Pow(Number, 4)}");
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Write a program to ask the user to enter : Number , then print the  Number 2 , Number 3 , Number 4");
            PrintNumberOfPower(ReadPositiveNumber());        
        }
    }
}
