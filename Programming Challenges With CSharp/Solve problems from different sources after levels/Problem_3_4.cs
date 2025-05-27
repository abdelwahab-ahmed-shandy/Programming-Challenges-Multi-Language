/*
Write a C# Sharp program to check if a given string starts with 'C#' or not.

Sample Input:
"C# Sharp"
"C#"
"C++"

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
            Console.Write("Enter Any String : ");
            string AnyString = Console.ReadLine();

            string Statement = (AnyString.StartsWith("C#") ? "True" : "False" );
            Console.WriteLine(Statement);

        }
    }
}
