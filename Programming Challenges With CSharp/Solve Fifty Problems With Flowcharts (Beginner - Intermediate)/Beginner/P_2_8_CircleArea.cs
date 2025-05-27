/*
 
Problem_18 >> Circle Area 
Write a program to calculate  circle area then print it on the screen 
//PI = 3.14
//Area = PI * (r * r)

 */

using System.Drawing;
using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static void ReadNumbers(ref double radius)
        {
            Console.WriteLine("Write a program to calculate  circle area then print it on the screen ? \n");
            
            Console.Write("Enter The radius  : ");
            radius  = double.Parse(Console.ReadLine());
        }
        public static double CalcCircleArea(double radius )
        {
            //Area = PI * (r * r)
            return Math.PI * (radius * radius);
        }

        public static void PrintResultArea(double CircleArea)
        {
            Console.WriteLine($"\nThe Circle Area IS A: {CircleArea}\n");
        }

        static void Main(string[] args)
        {
            double radius = 0;
            ReadNumbers(ref radius );
            PrintResultArea(CalcCircleArea(radius));
        }
    }
}
