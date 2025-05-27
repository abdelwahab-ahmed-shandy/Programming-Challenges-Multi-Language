/*
Convert Hours and Minutes into Seconds

Write a function that takes two integers (hours, minutes), converts them to seconds, and adds them.

Examples
Convert(1, 3) ➞ 3780

Convert(2, 0) ➞ 7200

Convert(0, 0) ➞ 0

*/

// Solution Code :

namespace Anny
{
    internal class Program
    {
        public static int Convert(int hours, int minutes)
        {
            return (hours * 60 * 60) + (minutes * 60);
        }
        static void Main(string[] args)
        {
            Console.WriteLine(Convert(1, 3));
            Console.WriteLine(Convert(2, 0));
            Console.WriteLine(Convert(0, 0));
        }
    }
}
