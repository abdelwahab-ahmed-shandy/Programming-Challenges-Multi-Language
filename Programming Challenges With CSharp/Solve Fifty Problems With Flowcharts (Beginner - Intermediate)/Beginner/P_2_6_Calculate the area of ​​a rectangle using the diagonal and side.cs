/*
 
Problem_16 >>Rectangle area though diagonal and side Area .
Write a program to calculate rectangle area through diagonal and site area of rectangle and print it on the screen .
//Area = a * sqrt(d*d - a*a)

 */

using System.Drawing;
using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static void ReadNumbers(ref double Side, ref double Diagonal)
        {
            Console.WriteLine("Rectangle Area Write a program to calculate rectangle area and print it on the screen  , Area = a*b\n");
            Console.Write("Enter The Side : ");
            Side = double.Parse(Console.ReadLine());
            Console.Write("Enter The Side Diagonal : ");
            Diagonal = double.Parse(Console.ReadLine());   
        }
        public static double CalcRectangleArea(double Side, double Diagonal)
        {
            //Diagonal * sqrt(Side^2 - Diagonal^2)
            return Side * Math.Sqrt(Math.Pow(Diagonal, 2) - Math.Pow(Side, 2));
        }

        public static void PrintResultArea(double RectangleArea)
        {
            Console.WriteLine($"\nRectangle Area Though Diagonal and Side Area : {RectangleArea}\n");
        }

        static void Main(string[] args)
        {
            double Side = 0 , Diagonal = 0 ;
            ReadNumbers(ref Side, ref Diagonal);
            PrintResultArea(CalcRectangleArea(Side, Diagonal));
        }
    }
}
