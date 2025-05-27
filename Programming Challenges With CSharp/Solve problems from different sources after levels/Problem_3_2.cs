/*
Write a C# Sharp program to check if a given positive number is a multiple of 3 or 7.

Sample Input:
3
14
12
37

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
            Console.Write("Enter Any Number : ");
            int AnyNumber = int.Parse(Console.ReadLine());
            string Stetement = (AnyNumber % 3 == 0 || AnyNumber % 7 == 0 ? "True" : "False");
            Console.WriteLine(Stetement);
        }
    }
}
