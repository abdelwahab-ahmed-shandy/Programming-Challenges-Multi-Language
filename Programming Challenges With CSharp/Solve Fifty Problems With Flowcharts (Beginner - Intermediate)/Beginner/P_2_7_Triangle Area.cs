/*
 
Problem_17 >> Triangle Area 
Write a program to calculate triangle area then print it on the screen 
// Area = a/2 * h

 */

using System.Drawing;
using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static void ReadNumbers(ref double Base, ref double Height)
        {
            Console.WriteLine("Write a program to calculate triangle area then print it on the screen , Area = a/2 * h \n");
            
            Console.Write("Enter The Base : ");
            Base = double.Parse(Console.ReadLine());
            
            Console.Write("Enter The Height : ");
            Height = double.Parse(Console.ReadLine());   
        }
        public static double CalcTriangleArea(double Base, double Height)
        {
            //Area= 0.5 × base × height
            return (0.5 *Base )* Height;
        }

        public static void PrintResultArea(double TriangleArea)
        {
            Console.WriteLine($"\nThe Triangle Area IS A: {TriangleArea}\n");
        }

        static void Main(string[] args)
        {
            double Base = 0 , Height = 0 ;
            ReadNumbers(ref Base, ref Height);
            PrintResultArea(CalcTriangleArea(Base, Height));
        }
    }
}
