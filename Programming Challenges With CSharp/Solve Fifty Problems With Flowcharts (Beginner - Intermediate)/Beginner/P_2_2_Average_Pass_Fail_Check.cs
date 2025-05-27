/*
 
Problem_11 >>Write a program to ask the user to enter : Mark1 , Mark2 , Mark3
Then Print the Average of entered Marks , and print "Pass" if average >= 50 , otherwise print "Fail"
 
 */

using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static void ReadMarks(ref double Mark1, ref double Mark2, ref double Mark3)
        {
            Console.WriteLine("Write a program to ask the user to enter : Mark1 , Mark2 , Mark3 Then Print the Average of entered Marks , and print Pass if average >= 50 , otherwise print Fail\n");

            Console.Write("Enter Mark One :");
            Mark1 = double.Parse(Console.ReadLine());

            Console.Write("Enter Mark Two :");
            Mark2 = double.Parse(Console.ReadLine());

            Console.Write("Enter Mark Three :");
            Mark3 = double.Parse(Console.ReadLine());

        }
        public static double SumMarks(double Mark1, double Mark2, double Mark3)
        {
            return Mark1 + Mark2 + Mark3;
        }
        public static double AvergeCalc(double Mark1, double Mark2, double Mark3)
        {
            return SumMarks(Mark1, Mark2, Mark3) / 3;
        }

        public static string CheckPassOrFail(double ResultAvarg)
        {
            if (ResultAvarg >= 50)
                return "Pass";
            return "Fail";
                
        }
        public static void PrintResutAverge(string ResultAverge)
        {
            Console.WriteLine($"\nYour Score Is: {ResultAverge}");
        }

        static void Main(string[] args)
        {
            double Mark1 = 0, Mark2 = 0, Mark3 = 0;
            ReadMarks(ref Mark1, ref Mark2, ref Mark3);
            PrintResutAverge(CheckPassOrFail(AvergeCalc(Mark1, Mark2, Mark3)));
        }
    }
}
