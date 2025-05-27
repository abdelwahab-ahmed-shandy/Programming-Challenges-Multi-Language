/*
 
Problem_23 >> Circle Area Circle Described Around an Arbitrary Triangle
Write a program to calculate Circle Described Around an Arbitrary Triangle ,Then print it on the screen .
// T = (a*b*c) / (4*sqrt (P*(P-a)*(P-b)*(P-c)))

 */

using System.Drawing;
using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static void ReadNumbers(ref double A , ref double B , ref double C )
        {
            Console.WriteLine("Write a program to calculate Circle Described Around an Arbitrary Triangle ,Then print it on the screen ? \n");
            
            Console.Write("Enter The Right Side : ");
            A = double.Parse(Console.ReadLine());

            Console.Write("Enter The Triangle Base : ");
            B = double.Parse(Console.ReadLine());
            
            Console.Write("Enter The Triangle Side  : ");
            C = double.Parse(Console.ReadLine());
        }
        public static double CalcCircleArea(double A , double B , double C) 
        {
            // T = (a*b*c) / (4*sqrt (P*(P-a)*(P-b)*(P-c)))
            double P = (A + B + C) / 2;
            double T = (A * B * C) / (4 * Math.Sqrt(P * (P - A) * (P - B) * (P - C)));
            return Math.PI * Math.Pow(T, 2);
        }

        public static void PrintResultArea(double CircleArea)
        {
            Console.WriteLine($"\n The Circle Area as Arbitrary Triangle  :  {CircleArea}\n");
        }

        static void Main(string[] args)
        {
            double A   = 0 , B = 0 , C =0 ;
            ReadNumbers(ref A ,ref B , ref C);
            PrintResultArea(CalcCircleArea(A  , B , C ));
        }
    }
}
