/*
Write a C# Sharp program to create a string which is 4 copies of the 2 front characters of a given string. If the given string length is less than 2 return the original string.

Sample Input:
"C Sharp"
"JS"
"a"

Expected Output:
C C C C 
JSJSJSJS
a

*/

namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Any String : ");
            string AnyString = Console.ReadLine();

            if (AnyString.Length < 2)
            {
                Console.WriteLine(AnyString);
            }
            else
            {
                string FirstString = AnyString.Substring(0, 2);

                for (int i = 0; i < 4; i++)
                {
                    Console.Write(FirstString);
                }
            }
        }
    }
}
