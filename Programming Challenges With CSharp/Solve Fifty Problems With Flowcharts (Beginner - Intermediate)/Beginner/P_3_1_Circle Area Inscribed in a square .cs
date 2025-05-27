/*
 
Problem_20 >> Circle Area Inscribed in a square 
Write a program to calculate area inscribed in a square , then print it on the screen
Area = (PI * A * A ) / 4

 */

using System.Drawing;
using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static void ReadNumbers(ref double HalfRadius)
        {
            Console.WriteLine("Write a program to calculate area inscribed in a square , then print it on the screen ? \n");
            
            Console.Write("Enter The Half A Radius  : ");
            HalfRadius  = double.Parse(Console.ReadLine());
        }
        public static double CalcCircleArea(double HalfRadius )
        {
            //Area = (PI * A * A ) / 4
            return (Math.PI * HalfRadius * HalfRadius) / 4;
        }

        public static void PrintResultArea(double CircleArea)
        {
            Console.WriteLine($"\nTheCircle Area Through HalfRadius IS : {CircleArea}\n");
        }

        static void Main(string[] args)
        {
            double HalfRadius = 0;
            ReadNumbers(ref HalfRadius );
            PrintResultArea(CalcCircleArea(HalfRadius));
        }
    }
}
