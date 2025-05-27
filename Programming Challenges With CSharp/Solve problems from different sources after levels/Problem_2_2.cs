/*
Write a C# Sharp program to get the absolute difference between n and 51.
If n is broader than 51 return triple the absolute difference.

Sample Input:
53
30
51

Expected Output:
6
21
0

*/

namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Any Number : ");
            int AnyNumber = int.Parse(Console.ReadLine());

            if (AnyNumber >= 51)
            {
                Console.WriteLine($"{AnyNumber} - 51 = {(AnyNumber - 51) * 3}");
            }
            else if (AnyNumber <= 51)
            {
                Console.WriteLine($"{AnyNumber} - 51 = {51 - AnyNumber}");
            }
        }
    }
}
