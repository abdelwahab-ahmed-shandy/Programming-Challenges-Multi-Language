/*
Write a C# Sharp program to check two given integers, and return true if one of them is 30 or if their sum is 30.
Sample Input:
30, 0
25, 5
20, 30
20, 25

Expected Output
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
            Console.Write("Enter Number One : ");
            int NumberOne = int.Parse(Console.ReadLine());

            Console.Write("Enter Number Two : ");
            int NumberTwo = int.Parse(Console.ReadLine());

            if ((NumberOne + NumberTwo) == 30 || NumberOne == 30 || NumberTwo == 30)
            {
                Console.WriteLine("True");
            }
            else
            {
                Console.WriteLine("False");
            }
        }
    }
}
