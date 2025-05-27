/*
Write a C# Sharp program to create a string with the last char added at the front and back of a given string of length 1 or more.

Sample Input:
"Red"
"Green"
"1"

Expected Output:
dRedd
nGreenn
111

 */

namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Any String : ");
            string AnyString = Console.ReadLine();

            Console.WriteLine($"{AnyString[^1]}{AnyString}{AnyString[^1]}");
        }
    }
}
