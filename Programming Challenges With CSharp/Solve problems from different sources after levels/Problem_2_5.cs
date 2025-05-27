/*
Write a C# Sharp program to create a string where 'if' is added to the front of a given string.
If the string already begins with 'if', return it unchanged.

Sample Input:
"if else"
"else"

Expected Output:
if else
if else
*/

namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Any String : ");
            string AnyString = Console.ReadLine();

            if (AnyString.StartsWith("if"))
                Console.WriteLine($"{AnyString} else");
            else
                Console.WriteLine($"if {AnyString}");                 
        }
    }
}
