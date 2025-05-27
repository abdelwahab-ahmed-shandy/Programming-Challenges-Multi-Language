/*
 
Problem_21 >> Circle Area Along the circumference 
Write a program to calculate circle area along the circumference, then print it on the screen 
// Area = (L * L) / (4 * PI)

 */

using System.Drawing;
using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static void ReadNumbers(ref double LengthPerimeter )
        {
            Console.WriteLine("Write a program to calculate circle area along the circumference, then print it on the screen ? \n");
            
            Console.Write("Enter The Length Perimeter  : ");
            LengthPerimeter   = double.Parse(Console.ReadLine());
        }
        public static double CalcCircleArea(double LengthPerimeter  )
        {
            // Area = (L * L) / (4 * PI)
            return (LengthPerimeter * LengthPerimeter) / (4 * Math.PI);
        }

        public static void PrintResultArea(double CircleArea)
        {
            Console.WriteLine($"\nTheCircle Area Through LengthPerimeter  IS : {CircleArea}\n");
        }

        static void Main(string[] args)
        {
            double LengthPerimeter  = 0;
            ReadNumbers(ref LengthPerimeter  );
            PrintResultArea(CalcCircleArea(LengthPerimeter ));
        }
    }
}
