/*
Write a C# Sharp program to check a given integer and return true if it is within 10 of 100 or 200.

Sample Input:
103
90
89

Expected Output:
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
            Console.Write("Enter Any Number : ");
            int AnyNumber = int.Parse(Console.ReadLine());

            if ((AnyNumber - 100 >= -10 && AnyNumber - 100 <= 10) || (AnyNumber - 200 >= -10 && AnyNumber - 200 <= 10))
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
