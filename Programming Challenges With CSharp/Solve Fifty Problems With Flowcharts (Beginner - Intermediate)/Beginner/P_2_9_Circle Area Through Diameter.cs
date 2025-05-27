/*
 
Problem_19 >>Circle Area Through Diameter
Write a program to calculate circle area through dirameter, then print it on the screen 
Area = (PI * D * D) /4

 */

using System.Drawing;
using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static void ReadNumbers(ref double Diameter)
        {
            Console.WriteLine("Write a program to calculate circle area through dirameter, then print it on the screen ? \n");
            
            Console.Write("Enter The Diameter  : ");
            Diameter  = double.Parse(Console.ReadLine());
        }
        public static double CalcCircleArea(double Diameter )
        {
            //Area = (PI * D * D) /4
            return (Math.PI * Diameter * Diameter) / 4;
        }

        public static void PrintResultArea(double CircleArea)
        {
            Console.WriteLine($"\nTheCircle Area Through Diameter IS : {CircleArea}\n");
        }

        static void Main(string[] args)
        {
            double Diameter = 0;
            ReadNumbers(ref Diameter );
            PrintResultArea(CalcCircleArea(Diameter));
        }
    }
}
