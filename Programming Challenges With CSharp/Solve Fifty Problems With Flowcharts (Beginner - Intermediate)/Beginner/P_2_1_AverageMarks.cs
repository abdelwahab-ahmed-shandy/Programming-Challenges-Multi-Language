/*
 
Problem_10 >> Write a program to ask the user to enter : Mark1 , Mark2 , Mark3 
Then print the average of entered Marks
 
 */

namespace PracticalExample
{
    internal class Program
    {
        public static void ReadMarks(ref double Mark1, ref double Mark2, ref double Mark3)
        {
            Console.WriteLine("Write a program to ask the user to enter : Mark1 , Mark2 , Mark3 Then print the average of entered Marks\n");

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

        public static void PrintAvergeNumbers(double ResultAverge)
        {
            Console.WriteLine($"\nThe Average Of Marks is : {ResultAverge}");
        }

        static void Main(string[] args)
        {
            double Mark1 = 0, Mark2 = 0, Mark3 = 0;
            ReadMarks(ref Mark1, ref Mark2, ref Mark3);
            PrintAvergeNumbers(AvergeCalc(Mark1, Mark2, Mark3));
        }
    }
}