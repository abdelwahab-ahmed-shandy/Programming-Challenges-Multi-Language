/*
Write a C# Sharp program to exchange the first and last characters in a given string and return the new string.

Sample Input:
"abcd"
"a"
"xy"

Expected Output:
dbca
a
yx

*/

namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Any String : ");
            string AnyString = Console.ReadLine();

            if (AnyString.Length <= 1)
                Console.WriteLine(AnyString);
            else
            {
                string NewSAnyString = AnyString[^1] + AnyString.Substring(1, AnyString.Length - 2) + AnyString[0];
                Console.WriteLine(NewSAnyString);
            }   
         }
    }
}
