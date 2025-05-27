/*
 
Problem_22 >>Circle Area Inscribed in an Isosceles Triangle
Write a program to calculate circle area Inscribed in an Isosceles Triangle ,Then print it on the screen 
// Area = (PI*b*b/4)*((2*a-b)/(2*a+b))

 */

using System.Drawing;
using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static void ReadNumbers(ref double SemiMajor , ref double SemiMinor  )
        {
            Console.WriteLine("Write a program to calculate circle area Inscribed in an Isosceles Triangle ,Then print it on the screen ? \n");
            
            Console.Write("Enter The Semi Major: ");
            SemiMajor    = double.Parse(Console.ReadLine());

            Console.Write("Enter The Semi Minor: ");
            SemiMinor = double.Parse(Console.ReadLine());
        }
        public static double CalcCircleArea(double SemiMajor , double SemiMinor)
        {
            // Area = (PI * b * b / 4) * ( (2*a-b) / (2*a+b) )
            return (Math.PI * SemiMinor * SemiMinor / 4) * ( (2 * SemiMajor - SemiMinor) / (2 * SemiMajor + SemiMinor) );
        }

        public static void PrintResultArea(double CircleArea)
        {
            Console.WriteLine($"\n Circle area Inscribed in an Isosceles Triangle : {CircleArea}\n");
        }

        static void Main(string[] args)
        {
            double SemiMajor   = 0 , SemiMinor = 0;
            ReadNumbers(ref SemiMajor ,ref SemiMinor);
            PrintResultArea(CalcCircleArea(SemiMajor  , SemiMinor ));
        }
    }
}
