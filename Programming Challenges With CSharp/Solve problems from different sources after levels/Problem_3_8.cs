/*
Write a C# Sharp program to check whether two given integer values are in the range 20..50 inclusive. 
Return true if one or other is in the range, otherwise false.

Sample Input:
20, 84
14, 50
11, 55
25, 40

Expected Output:
True
True
False
True

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

            string Statement = (OneNumber >= 20 && OneNumber <= 50) || (TwoNumber >= 20 && TwoNumber <= 50) ? "True" : "False" ;
            Console.WriteLine(Statement);
        }
    }
}
