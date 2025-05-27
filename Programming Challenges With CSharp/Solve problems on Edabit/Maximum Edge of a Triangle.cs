/*
Maximum Edge of a Triangle

Create a function that finds the maximum range of a triangle's third edge, where the side lengths are all integers.

Examples
NextEdge(8, 10) ➞ 17

NextEdge(5, 7) ➞ 11

NextEdge(9, 2) ➞ 10

*/

// Solution Code :

namespace Anny
{
    internal class Program
    {
        public static int NextEdge(int side1, int side2)
        {
            return (side1 + side2) - 1;
        }
        static void Main(string[] args)
        {
            Console.WriteLine(NextEdge(8, 10));
            Console.WriteLine(NextEdge(5, 7));
            Console.WriteLine(NextEdge(9, 2));
        }
    }
}
