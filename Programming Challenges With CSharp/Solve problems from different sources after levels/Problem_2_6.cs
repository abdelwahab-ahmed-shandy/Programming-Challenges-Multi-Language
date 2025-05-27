/*
Write a C# Sharp program to remove the character at a given position in the string.
The given position will be in the range 0..(string length -1) inclusive.

Sample Input:
" Python", 1
"Python", o
"Python", 4

Expected Output:
Pthon
ython
Pythn
*/

namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Any String : ");
            string AnyString = Console.ReadLine();

            Console.Write("Enter Any Character of String : ");
            int AnyChar = int.Parse(Console.ReadLine());

            Console.WriteLine(AnyString.Remove(AnyChar,1));              
        }
    }
}
