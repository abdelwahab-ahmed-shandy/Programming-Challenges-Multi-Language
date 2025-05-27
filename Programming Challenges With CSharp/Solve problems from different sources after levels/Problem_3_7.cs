/*
Write a C# Sharp program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the said range otherwise false.

Sample Input:
11, 20, 12
30, 30, 17
25, 35, 50
15, 12, 8

Expected Output:
True
True
True
False

 */

namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter One Number : ");
            int OneNumber = int.Parse(Console.ReadLine());

            Console.Write("Enter Two Number : ");
            int TwoNumber = int.Parse(Console.ReadLine());

            Console.Write("Enter Three Number : ");
            int ThreeNumber = int.Parse(Console.ReadLine());

            string Statement = (OneNumber >= 20 && OneNumber <= 50) || (TwoNumber >= 20 && TwoNumber <= 50) || (ThreeNumber >= 20 && ThreeNumber <= 50) ? "True" : "False" ;
            Console.WriteLine(Statement);
        }
    }
}
