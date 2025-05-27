/*
Write a C# Sharp program to check if a string 'yt' appears at index 1 in a given string.
If it appears return a string without 'yt' otherwise return the original string.

Sample Input:
"Python"
"ytade"
"Aytbdelwahab"

Expected Output:
Phon
ytade
Abdelwahab
 */

namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Any String : ");
            string AnyString = Console.ReadLine();

            if (AnyString.Length > 2 && AnyString.Substring(1,2) == "yt" )
                Console.WriteLine($"{AnyString[0]}{AnyString.Substring(3)}");
            else
                Console.WriteLine(AnyString);
            
        }
    }
}
