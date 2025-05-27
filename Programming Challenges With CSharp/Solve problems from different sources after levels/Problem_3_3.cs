/*
Write a C# Sharp program to create a string taking the first 3 characters of a given string.
Return the string with the 3 characters added at both the front and back. If the given string length is less than 3,
use whatever characters are there.

Sample Input:
"Python"
"JS"
"Code"

Expected Output:
PytPythonPyt
JSJSJS
CodCodeCod

 */

namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Any String : ");
            string AnyString = Console.ReadLine();            
            if (AnyString.Length <= 3 )
                Console.WriteLine(AnyString);
            else
                 Console.WriteLine($"{AnyString.Substring(0,3)}{AnyString}{AnyString.Substring(0,3)}");
        }
    }
}
